
#include "device_registers.h"            /* include peripheral declarations S32K144 */
#include "clocks_and_modes.h"

int lpit0_ch0_flag_counter = 0; /*< LPIT0 timeout counter */


void PORT_init (void)
{
  /* Enable clock for PORT D */
  // đầu tiên cho port D hoạt động -> enable
  // port D có nhiều GPIO
  // mih cần GPIO nào i/o-> CẤU HÌNH
  PCC-> PCCn[PCC_PORTD_INDEX] = PCC_PCCn_CGC_MASK;
  /* Port D0:  Data Direction= output */
  //1 <<0 : 1 DỊCH 0 LẦN VỀ BÊN TRÁI
  // A |= 1<<0;-> A = A | 1 <<0
  // A =0000000000000000
  // 1 =0000000000000001 -> 1 <<0 = 0000000000000001
  // A | 1<<0 = 0000000000000001
  PTD->PDDR |= 1<<0;
  // 1 PIN NHIỀU CHỨC NĂNG CẤU HÌNH CHỨC NĂNG CHÂN ĐÓ LÀ CHÂN GÌ ?
  // port D -> trỏ D0 cấu hình D0 là GPIO 		
  PORTD->PCR[0] |=  PORT_PCR_MUX(1);  	/* Port D0:  MUX = ALT1, GPIO (to blue LED on EVB) */
}

void LPIT0_init (void)
{
	/*!
	 * LPIT Clocking:
	 * ==============================
	 */
  PCC->PCCn[PCC_LPIT_INDEX] = PCC_PCCn_PCS(6);    /* Clock Src = 6 (SPLL2_DIV2_CLK)*/
  PCC->PCCn[PCC_LPIT_INDEX] |= PCC_PCCn_CGC_MASK; /* Enable clk to LPIT0 regs 		*/

  /*!
   * LPIT Initialization:
   */
  LPIT0->MCR |= LPIT_MCR_M_CEN_MASK;  /* DBG_EN-0: Timer chans stop in Debug mode */
                              	  	  /* DOZE_EN=0: Timer chans are stopped in DOZE mode */
                              	  	  /* SW_RST=0: SW reset does not reset timer chans, regs */
                              	  	  /* M_CEN=1: enable module clk (allows writing other LPIT0 regs) */
  LPIT0->TMR[0].TVAL = 40000000;      /* Chan 0 Timeout period: 40M clocks */

  LPIT0->TMR[0].TCTRL |= LPIT_TMR_TCTRL_T_EN_MASK;
  	  	  	  	  	  	  	  /* T_EN=1: Timer channel is enabled */
                              /* CHAIN=0: channel chaining is disabled */
                              /* MODE=0: 32 periodic counter mode */
                              /* TSOT=0: Timer decrements immediately based on restart */
                              /* TSOI=0: Timer does not stop after timeout */
                              /* TROT=0 Timer will not reload on trigger */
                              /* TRG_SRC=0: External trigger soruce */
                              /* TRG_SEL=0: Timer chan 0 trigger source is selected*/
}

void WDOG_disable (void)
{
  WDOG->CNT=0xD928C520;     /* Unlock watchdog 		*/
  WDOG->TOVAL=0x0000FFFF;   /* Maximum timeout value 	*/
  WDOG->CS = 0x00002100;    /* Disable watchdog 		*/
}

int main(void)
{
	/*!
	 * Initialization:
	 * =======================
	 */
  WDOG_disable();		  /* Disable WDOG */
  PORT_init();            /* Configure ports */
  SOSC_init_8MHz();       /* Initialize system oscilator for 8 MHz xtal */
  SPLL_init_160MHz();     /* Initialize SPLL to 160 MHz with 8 MHz SOSC */
  NormalRUNmode_80MHz();  /* Init clocks: 80 MHz sysclk & core, 40 MHz bus, 20 MHz flash */
  LPIT0_init();           /* Initialize PIT0 for 1 second timeout  */

	/*!
	 * Infinite for:
	 * ========================
	 */
	  for (;;)
	  {
		  /* Toggle output to LED every LPIT0 timeout */
		while (0 == (LPIT0->MSR & LPIT_MSR_TIF0_MASK)) {} /* Wait for LPIT0 CH0 Flag */
		lpit0_ch0_flag_counter++;         /* Increment LPIT0 timeout counter */
		PTD->PTOR |= 1<<0;                /* Toggle output on port D0 (blue LED) */
		LPIT0->MSR |= LPIT_MSR_TIF0_MASK; /* Clear LPIT0 timer flag 0 */
	  }
}
