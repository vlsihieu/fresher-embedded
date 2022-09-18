#include<stdio.h>
// #include "test3.c"  
// thay vi viết include thư viện , nội bộ của main3
// mình có thể viết
// e nhắn qua zalo đi,e giải thích
// call function ngoài file main3
// extern void pheptinh(int a,int b);
// extern int i;
// extern void tbcong(int a, int b);

// định nghĩa macro
// phân biệt include và extern ?
#define sum(a,b) a+b  // macro
int i =0;
void dem()
{
    // static int i =0; // 0x01
    printf("tang i len 1 %d\n",i);
    i++;
}
int main(int argc, char const *argv[])
{
    dem();
    dem();
    dem();
    dem();
    // i là bao nhiêu
    // printf("sum 5 and 6:=%d\n", sum(6,7));
    // tbcong(4,5);
    //call function test from test.c
    // test();
    // trungbinh(5,6,7);
    // tong(5,6);
    // pheptinh(5,6);
    // printf("%d",tong(5,6));
    // test();s
    // // call function count();
    // count();
    // trungbinh(4,5,6);
    return 0;
}