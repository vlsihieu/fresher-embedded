#include<stdio.h>

int a =10;
// khởi tạo 
int *ptr;

char *ptr_char;
char var_char = 'A';
double var_double = 10.2;
int var_int =10;
void *ptr_void; // trỏ tới mọi địa chỉ biến khác
int *ptr_int = NULL; // là con trỏ được define tại địa chỉ 0x00 có giá trị là 0

void tong(int a, int b)
{
    printf("tong %d va %d = %d\n",a,b,a+b);
}
void hieu(int a, int b)
{
    printf("hieu %d va %d = %d\n",a,b,a+b);
}
void tich(int a, int b)
{
    printf("tich %d va %d= %d\n",a,b,a*b);
}
double thuong(int a, int b)
{
    return (double)a/b;
}
int tong3so(int a, int b, int c)
{
    return a+b+c;
}
void xuat_ra_man_hinh(int a, int b)
{
   printf("hello word!!!");
}
void pheptoan(void (*ptr_temp)(int, int), int a,int b)
{
    printf("Day la chuong trinh tinh toan.\n");
    ptr_temp(a,b);
}
int main(int argc, char const *argv)
{
    pheptoan(tong,7,9);
    pheptoan(tich,7,9);

    // con trỏ hàm
    // khi hàm có đặt tính giống nhau
    // ta dùng còn trỏ hàm quản lý thằng này
    // void (*ptr_pheptoan)(int, int);

    // double(*ptr_thuong)(int , int);
    // int (*ptr_tong)(int , int , int);

    void *ptr_void;
    ptr_void = tong;

    ((void (*)(int, int))(ptr_void))(10,12);
    // ptr_pheptoan = &tong;

    // ptr_pheptoan(14,12);

    // ptr_pheptoan = &hieu;

    // ptr_pheptoan(14,12);

    // ptr_pheptoan = &tich;

    // ptr_pheptoan(14,12);
    // ptr_pheptoan = xuat_ra_man_hinh;

    // ptr_thuong = thuong;
    // printf("%f\n",ptr_thuong(13,3));

    // ptr_tong = tong3so;
    // printf("%d\n",tong3so(4,13,3));
    // tong(5,6);
    // hieu(15,7);
    // tich(4,6);
    // printf("dia chi ptr:%p\n",ptr_void);
    // ptr = &a;
    // ptr_char = 
    // ptr = (int*)0x00007ff633d62010; // 8 byte
    // 0x80 1 byte
    // 0b10000000 8 bit
    // kiến trúc vđk 64bit/8 bit = 8byte
    // 32 /8 bit = 4 byte phụ thuộc kiến trúc vxl
    // ptr_void = &a;

    // printf("dia chi con tro a:%p\n",&a);
    // printf("dia chi con tro a:%p\n",ptr);
    // printf("dia chi con tro a:%p\n",ptr_void);
    // lấy giá trị con trỏ void
    // printf("gia tri con tro a:%d\n",*(int*)ptr_void);

    // ptr_void = &var_int;
    // printf("gia tri var_in %d dia chi var_in:%p\n",*(int*)ptr_void, ptr_void);

    // ptr_void = &var_char;
    // printf("gia tri var_char %c dia chi var_in:%p\n",*(char*)ptr_void, ptr_void);

    // ptr_void = &var_double;
    // printf("gia tri var_char %.2f dia chi var_in:%p\n",*(double*)ptr_void, ptr_void);
    return 0;
}