#include<stdio.h>
#include "test1.c"

#define SUM(a,b) a+b
int main(int argc, char const *argv[])
{
    // sum 5 and 6
    printf("sum 5 and 6:%d\n", SUM(6,7));

    // test
    test();

    // count
    for (int i =0;i<5;i++)
    {
        count();
    }
    
    return 0;
}