#include<stdio.h>
#include<stdint.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct person{
      uint32_t VERID;                             /**< Version ID Register, offset: 0x0 */
      uint32_t PARAM;                             /**< Parameter Register, offset: 0x4 */
      uint32_t MCR;                               /**< Module Control Register, offset: 0x8 */
      uint32_t MSR;                               /**< Module Status Register, offset: 0xC */
      uint32_t MIER;                              /**< Module Interrupt Enable Register, offset: 0x10 */
      uint32_t SETTEN;                            /**< Set Timer Enable Register, offset: 0x14 */
      uint32_t CLRTEN;                            /**< Clear Timer Enable Register, offset: 0x18 */
}person2;


/** Peripheral LPIT0 base address */
// #define LPIT0_BASE                               (0x40037000u)
/** Peripheral LPIT0 base pointer */
// #define LPIT0                                    ((LPIT_Type *)LPIT0_BASE)
int main()
{
   person2 *p;
  p = (person2 *)malloc(sizeof(person2));
  p->VERID = 0x40037000;
  // p = (uint32_t)0x40037000;
  printf("%p\n",&(p->VERID));
  printf("%p\n",&(p->PARAM));
  printf("%p\n",&(p->MCR));
  printf("%p\n",&(p->MSR));
  printf("%p\n",&(p->MIER));
  printf("%p\n",&(p->SETTEN));

  return 0;
}