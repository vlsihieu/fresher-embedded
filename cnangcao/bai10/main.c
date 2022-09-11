#include<stdio.h>
#include<stdlib.h>
// try catch
// ứng dụng
// ứng dụng nó try catch
// try catch ?
// rất nhiều trường hợp ko thể bắt lỗi ko dùng if
// nhiều lỗi ko mong muốn, ko biết trước-> try catch

#include<setjmp.h> 

jmp_buf buf;
int exception_value = 0;
#define  TRY if((exception_value= setjmp(buf))==0)
#define CATCH(NUM) else if(exception_value == NUM)
#define THROW(NUM) longjmp(buf,NUM);
double average(double *value, int lenght)
{
    double sum =0.0;
    if (lenght <=0)
    {
        // longjmp(buf,1);
        THROW(1);
    }
    for (int i=0;i<lenght;i++)
    {
        sum += value[i];
    }
    return sum/lenght;
}
int main(int argc, char const *argv)
{
    // int i;
    // // khai báo trước longjmp
    // i = setjmp(buf);
    // if (i == 1)
    // {
    //     printf("error size of arr\n");
    //     exit(0);
    // }
    // printf("error size of arr\n");
    double mang[] = {1,2,3,4,5,6};
    double avg;
    // double mang2[1];
    // double kq = average(mang,6);
    // double kq = average(mang2,0);
    // printf("average: %lf",kq);
    TRY
    {
       avg = average(mang,6);
       printf("aver:%f\n",avg);
    }
    CATCH(1)
    {
        printf("error size arr\n");
    }

    // if (i)



    // biến env kiểu jmp_buf
    // jmp_buf env;
    // int i;
    // i = setjmp(env);
    // // mơi setjmp lần đầu trả về bằng 0
    // printf("i = %d\n",i);

    // if (i!=0) exit(0);
    // // set nó bằng 2, gặp thằng này quay lại line 10
    // // gán cho i =2, gặp điều khiện if thoát
    // longjmp(env,2);
    // printf("Dong nay co duoc in khong?\n");
    return 0;





    // int i =0;
    // while(1)
    // {
    //     printf("Dem i: %d\n",i);
    //     if (i >=20) exit(0); // dường luôn chương trình
    //     i++;
    // }
    // printf("chuong trinh 1");
    // exit(1);
    // printf("chuong trinh 2");
    return 0;
}