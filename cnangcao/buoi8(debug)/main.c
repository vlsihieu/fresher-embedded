#include<stdio.h>
// #define  NDEBUG
#include<assert.h>

char mang1[5];
char mang2[5];

int isEqual(char arr1[], char arr2[])
{
    if (mang1 == mang2)
    {
        return 1;
    }
    else{
        return 0;
    }
}

#define ASSERT(err, text)  assert( err && text);

double thuong(int a, int b)
{
    //  tắt tính năng debug
   ASSERT(b!=0,"error not equal")
   ASSERT(b==3,"error not equal")
   return (double)(a/b);
 
}

int arr[3] = {1,2,3};
int main()
{
    // double result;
    // result = thuong(15,5);
    // printf("thuong a va b:%.2f\n",result);
    for (int i =0;i<10;i++)
    {
        printf("ma hex:0x%x\n",arr[i]);
    }
}