#include<stdio.h>
#include<time.h>

void delay_1s(){
    // for (int i =0 ;i <30000000;i++)
    // {

    // }
    register int i; // sử dụng register , tốc độ xử lý nhanh hơn
    for (i =0 ;i <30000000;i++)
    {

    }
}
// extern void count();
extern void delay_1s();
int main(int argc, char const  *argv[]){
//    extern int i;
//    register int a; 
   // giá trị biến này lưu register ko lưu ram
   // tính toán đẩy qua alu song đẩy qua register
   // thời gian nó nhanh hơn.
   // lưu trên Ram xử lý lâu hơn.
//    i = 10;

   clock_t st,end;

   
   st = clock();
   delay_1s();
   end = clock();
   printf("time:%f",(double)(end - st));
//    while(1)
//    {
//     printf("count i:%d\n",i++);
//     delay_1s();
//    }
   return 0;
}