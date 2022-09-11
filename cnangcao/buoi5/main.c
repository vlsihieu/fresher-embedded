#include<stdio.h>


// int *pt;
// void count()
// {
//     // nếu dùng int i ;
//     // song nó sẽ thu hồi lại vùng nhớ.

//     // hàm static
//     // khởi tạo địa chỉ cụ thể 0x00, lưu giá trị bằng 0
//     // gọi lần 1,2,3,... nó nhớ được địa chỉ nó ( địa chỉ không bị thu hồi)
//     // in ra được giá trị tăng 
//     static int i =0;
//     pt = &i;
//     // printf("count:%d\n",i);
//     printf("dia chi:%p,count:%d\n",&i, i);
//     i = i + 1;
// }

// void millis(){
//     static int m_millis;
//     m_millis = time4();
//     return m_millis;

// }

// extern void count();
// biến i static toàn cục
// nó có giá trị nội bộ file test.c
// extern int i;

// lỗi, sử dụng trong file test.c
// extern void print();
// extern void getCount();
// extern void trungbinhcong(int a, int b);

static inline int tonga(int a, int b){
    return a+b;
}
int main(int argc, char const *argv[])
{
    // i = 10;
    // count();
    // // *pt = 10;
    // count();
    // count();
    // count();
    // count();
    // getCount();
    // trungbinhcong(4,5);

    int a = tonga(5, 10);
    printf("tong a va b:%d \n",a);
    return 0;
}