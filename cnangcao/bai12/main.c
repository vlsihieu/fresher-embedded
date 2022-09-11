#include<stdio.h>
#include<stdint.h>
#include "pthread.h"
uint8_t LED1 =0;
uint8_t LED2 =0;
int i;
void delay_s(int delay)
{
    for (int i=0;i<delay*300000000;i++);
}
void *BlinkLED_1s()
{
    while(1)
    {
        printf("LED1:%d\n",LED1);
        LED1 =!LED1;
        delay_s(1);
    }

}
void *BlinkLED_2s()
{
    while(1)
    {
        printf("LED2:%d\n",LED2);
        LED2 =!LED2;
        delay_s(3);
    }

}
int main()
{
    pthread_t task1, task2;

    pthread_create(&task1,NULL,BlinkLED_1s,NULL);
    pthread_create(&task2,NULL,BlinkLED_2s,NULL);
    while(1)
    {
        
    }
    // while (1)
    // {
    //     printf("count:%d\n",i++);
    //     delay_s(2);
    // }

    return 0;
}