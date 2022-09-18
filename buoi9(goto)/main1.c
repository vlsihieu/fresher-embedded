#include<stdio.h>
#include<time.h>

// #define LED  0;
// #define LED1 0;
// /*
// trường hợp có while, for vô hạn dùng goto nhanh nhất
// có nhiều vòng lặp, lồng nhau nhiều không kiểm soát được

// */
// void countLED(int count){

//     int i =0;
//     while(i <count)
//     {
//         LED = !LED;
//         delay_check(1000);
//     }
// }

// void button(){
//     if(readPIN(1) == 1){
//         LED = 0;
//         goto label:
//     }
// }

// void button1(){
//     if(readPIN(2) == 1){
//         LED1 = 0;
//         goto label:
//     }
// }
// void delay_check(int delay){
//     int temp = delay / 10;
//     for (int i =0;i< temp;i++)
//     {
//         // if(readPIN(1) == 1)
//         // {
//         //      LED = 0;
//         //      break;
//         // }
//         // // xử lý thêm điều kiện bên ngoài
//         // else if (){
//         button1();
//         button();
//         // }
//         delay_ms(temp);
//     }
// }
int main(int argc, char const  *argv[]){
   
//    int i = 0;
//    while(i < count)
//    {
//     LED =!LED;
//     delay_check(1000);
//    }
// label:
while (1)
{
   for (int i =0 ; i< 100; i++){
        int a = 0;
        while(1)
        {
            
            a++;
            printf("%d ", a);
            if (a == 15)
            {
                
                
                goto lable;
            }
        }
        break;

   }
   break;
}
lable:
printf(" chuong trinh da thoat");
   return 0;
}