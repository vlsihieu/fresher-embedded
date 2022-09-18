#include<stdio.h>
#include<string.h>

// // mcu b nhận chuỗi như vậy
// char value[] = "12345";
// union data_frame
// {
//     struct data
//     {
//         char id[1];
//         char command[3];
//         char check_sum[1];
//     }data;
//     char data_storage[5];

// };

struct duongbo{
     int xe_oto;
     int xe_dap;
     int xe_may;
};

struct duongthuy
{
    int ca_no;
    int tau_thuy;
};

struct duonghangkhong
{
    int may_bay;
    int truc_thang;

};
// danh sách chọn lựa, thuộc tính giống nhau
// thiết kế union mình sử dụng 1 cái, cái
// còn lại ko dùng, tiết kiệm bộ nhớ;
union phuongtiengiaothong
{
    struct duongbo duong_bo;
    struct duongthuy duong_thuy;
    struct duonghangkhong d_h_k;

    
};

int main(int argc, char const  *argv[])
{
    union phuongtiengiaothong phuong_tien;
    phuong_tien.d_h_k.may_bay = 123;
    phuong_tien.d_h_k.truc_thang =567;
    printf("%d\n",phuong_tien.d_h_k.may_bay);
    // struct typeData data;
    // union data_frame frame;
    // phía bên gửi
    // strcpy(frame.data.id,(char*)"1");
    // strcpy(frame.data.command,(char*)"234");
    // strcpy(frame.data.check_sum,(char*)"5");

    // printf("%s\n",frame.data.id);
    // printf("%s\n",frame.data.command);
    // printf("%s\n",frame.data.check_sum);
    // strcpy(frame.data_storage, value);
    // phía bên nhận
    // nhận được chuỗi value, cpy vào data_storage
    // strcpy(frame.data_storage, value);
    // printf("%s\n",frame.data_storage);

    
}