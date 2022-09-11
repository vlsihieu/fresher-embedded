#include <stdio.h>
#include "ct1.c"

// extern void convert(int a[], int n);


int main()
{

    int arr[10];
    int n;
    printf("nhap vao n:");
    scanf("%d",&n);
    convert(arr,n);

    return 0;

}

