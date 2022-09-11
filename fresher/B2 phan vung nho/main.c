#include<stdio.h>
#include <stdint.h>
#include <stdlib.h>
// // hằng số lưu phân vùng text
// const int i= 10;

// char mang[] = "Hello world!!!";
// // sử dụng con trỏ khai báo chuỗi , lưu phân vùng text
// char *mang2 ="Hello world!!!";

int a1 =0; // phân vùng bss

int a = 5;
// uint16_t *ptr;

// void tong(){
//     // lưu phân vùng data
//     a = 6;
//     int x = 6;
//     static int b = 9;

// }

// // phân vùng stack
// void tong(int x, int y)
// {
//     int a = 10;

// }

// uint16_t mang[5] = {1,3,5,7,8};
// uint8_t *ptr;
int *ptr;

void test(){
    int mang[5] = {1,2,3,4,5};
    for (int i =0 ;i<5;i++)
    {
        printf("dia chi vitri[%d] = %p\n",i,mang+i);
    }
}

void test1(){
   int *mang;
   mang = (int*)malloc(5*sizeof(int));
    for (int i =0 ;i<5;i++)
    {
        printf("dia chi vitri[%d] = %p\n",i,mang+i);
    }
    free(mang);// thu hồi phân vùng heap.
}
int main(int argc, char const *argv[])
{
//    int a = 5;
//    a = a + i;
//    mang2[1] = 'E';
//    printf("%s", mang2);
//    a = 8;
//    x = 9;
    //   a1 = 10;
    //   printf("%d",a1);
    // tong(5,6); // int x = 5, int y = 6; 0x01, 0x02
               // int a = 10; 0x03
    // sau khi kết thúc gọi tổng, giải phóng vùng nhớ
    // ptr = mang;
    // for (int i =0;i<5;i++)
    // {
    //     printf("dia chỉ mang[%d] = %d\n",i,*(ptr + i));
    // }
    // mảng kích thước 2 byte
    // ptr = malloc(2);
    // ptr[0] = 1;
    // ptr[1] = 12;
    // printf("%d\n",ptr[0]);
    // printf("%d",ptr[1]);
    // ptr = (int*)malloc(4*sizeof(int));
    // for (int i =0; i<4;i++)
    // {
    //     ptr[i] = i *3;
    //     printf("%d\n",ptr[i]);
    // }
    // ptr = (int*) realloc(ptr,6*sizeof(int));
    // for (int i =0; i<6;i++)
    // {
    //     ptr[i] = i *3;
    //     printf("%d\n",ptr[i]);
    // }
    // nằm trong phân vùng nhớ stack thoát khỏi hàm thu hồi vùng nhớ
    test();
    printf("------------------------\n");
    test();
    printf("------------------------\n");
    // không thu hồi vùng nhớ, địa chỉ tồn tại có giá trị
    // lưu phân vùng nhớ heap
    test1();
    printf("------------------------\n");
    test1();

   return 0;

}

void func(){
    static int a = 1; // phân vùng nhớ data
    const int b = 2; // phân vùng nhớ text;
    int c = 3; // phân vùng nhớ data.

}
// hàm func() lưu vào phân vùng nhớ stack
// không thể tạo ra phân vùng nhớ khác trong RAM.
