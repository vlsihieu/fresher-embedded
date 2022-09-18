#include<stdio.h>
#include<time.h>
/**
 * @brief 
 * ban đầu n = 1
 * vào cái nhãn
 * in ra n = 1
 * kiểm tra n < = 10 
 * nếu ok thì quay lại nhãn
 * ngược lại thoát hàm đó.
 */
void printNumber()
{
    int n = 1;
label:
    printf("%d ", n);
    n++;
    if(n <= 10){
        goto label;
    }
}



int main(int argc, char const  *argv[]){
   
   printNumber();
   return 0;
}