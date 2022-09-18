#include <stdio.h>
// static toàn cục
// phạm vi hoạt động nó trong file test3.c 
// int i;
// tính chất trừu tượng ( cái nào cần show, ko cần thiết ẩn nó đi)
static int tong(int a, int b)
{
   return a+b;
}
void tbcong(int a, int b)
{
   printf("%f\n",((float)tong(a,b))/2);
}
// static int tong(int a, int b)
// {
//     return a+b;
// }

// static int hieu(int a, int b)
// {
//     return a-b;
// }
// static int tich(int a, int b)
// {
//     return a*b;
// }
// void pheptinh(int a, int b)
// {
//     printf("%d\n",tong(a,b));
//     printf("%d\n",hieu(a,b));
//     printf("%d\n",tich(a,b));
// }
