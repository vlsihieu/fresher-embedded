#include<stdio.h>
int i =0;

void delay_1s(){
    for (int i =0 ; i< 300000000;i++);

}

void count(){
   while(1)
   {
    printf("count i:%d\n",i++);
    delay_1s();
   }
}