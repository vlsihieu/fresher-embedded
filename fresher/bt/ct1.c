#include<stdio.h>


void convert(int a[], int n)
{
    int index=0;
    int i;
    // 20 -> 4 lần cuối thì i là 5
    for(i=0;n>0;i++)  
    {  
        a[i]=n%2;
        n= n/2;
    }
    // printf("%d",i);
    // bắt đầu lấy từ thằng tử thứ 4
    for(i=i-1;i>=0;i--)  
    {   printf("%d\n",i);
        // printf("%d ",a[i]);
    }  
}


 