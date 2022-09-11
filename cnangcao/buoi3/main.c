#include<stdio.h>


// struct typeData
// {
//     int i_var; // 4 byte
//     char c_var; // 1 byte
//     double d_var;// 8 byte
// };

union typeData
{
    int i_var; // 4 byte
    char c_var; // 1 byte
    double d_var;// 8 byte
};

int main(int argc, char const  *argv[])
{
    // struct typeData data;
    union typeData data;

    data.c_var = 'A';
    data.i_var = 10;
    data.d_var = 11.1;
    printf("Size typeData:%d\n",sizeof(data));

    printf("c_var:%c\n",data.c_var);
    printf("i_var:%d\n",data.i_var);
    printf("d_var:%f\n",data.d_var);
    
}