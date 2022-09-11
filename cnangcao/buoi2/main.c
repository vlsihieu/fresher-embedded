#include<stdio.h>
#include<stdarg.h> 
// if not ( check xem nào define hay chưa
// chưa ai định nghĩa nó sẽ định nghĩa
// nếu định nghĩa rồi , bên trong không sủ dụng đc
// #ifndef  __STM8S_IT_H 
// #define  __STM8S_IT_H
// #endif /* __stm8s_it_h*/
// thay thế định nghĩa macro, tốc độ xử lý nhanh
// #define MAX 100
// #ifndef __STM8S_IT_H
// #define TEST 10
// #endif
// #define SIZE 100
// // kiểm tra size = 100 
// #if SIZE > 200
// #undef SIZE
// #define SIZE 200

// #elif SIZE <100
// #undef SIZE 
// #define SIZE 100

// #else
// // xóa định nghĩa cũ, định nghĩa lại
// #undef SIZE
// #define SIZE 150

// #endif
// viết macro, định nghĩa biến trong này
// nuối chuỗi macro ##
// tạo ra một kiểu integer biến là normal_TEST
// #define DECLARE_VAR(type, name) type normal_##name
// xuống dòng macro "\"
#define DECLARE_VAR(type, name) type normal_##name;\
type premium_##name;\
type low_##name;\
type hieu_##name;

int tong(int num_args, ...){
    int val =0;
    va_list ap; // khởi tạo kiểu va_list ( con trỏ)
    int i;
    // num_args : số lượng đầu vào
    // truyền vào kiểu dữ liệu va_list, bao nhiêu parameter
    va_start(ap, num_args);

    for (int i =0;i< num_args ;i++)
    {
        // lấy int của đầu vào, nào ko phải bỏ qua
        val = val + va_arg(ap,int);
    }
    va_end(ap);
    return val;

}
int main(int argc , char const *argv[])
{
    // printf("MAX = %d\n",TEST);
    // printf("MAX = %d\n",TEST);
    // printf("MAX = %d\n",TEST);
    // printf("MAX = %d\n",TEST);
    // printf("MAX = %d\n",TEST);
    // printf("size = %d\n", SIZE);

    DECLARE_VAR(int, TEST);
    normal_TEST = 10;
    printf("Test:%d",normal_TEST);

    printf("tong:%d\n",tong(2,6,7));
    return 0;
}