#include<stdio.h>

static int i =0;

void count()
{
    // static int i =0;
    printf("dia chỉ:%p,count:%d\n",&i, i);
    i = i + 1;
}

static void print()
{
    printf("vu trung hieu");
}

void getCount(){
    print();
}

static int tong(int a, int b){
    return a+b;
}
void trungbinhcong(int a, int b){
    int temp = tong(a,b);
    printf("tong a va b:%f\n",(float)temp/2);

}