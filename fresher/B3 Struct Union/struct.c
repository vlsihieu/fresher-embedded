#include<stdio.h>
#include<stdint.h>

struct dataStruct{
    uint8_t ten; // 1byte
    uint64_t lop; // 8 byte
    uint16_t tuoi;  // 2byte
    uint16_t mssv; // 2 byte
    
};


int main(int argc, char const *argv[])
{
    struct dataStruct data;
    printf("size:%d\n",sizeof(data));

    printf("Dia chi data: %p\n", &data.ten);
    printf("Dia chi data: %p\n", &data.lop);
    printf("Dia chi data: %p\n", &data.tuoi);
    printf("Dia chi data: %p\n", &data.mssv);
    printf("--------------\n");



    void *ptr;
    ptr = &data;
    for (int i =0;i < 10 ;i++) {
         printf("dia chi void:%p\n", ptr + i);
    }
    
    // data.u8bit = 8;
    // printf("ub8bit = %d\n",data.u8bit);

    // data.u16bit = 16;
    // printf("ub16bit = %d\n",data.u16bit);

    // data.u32bit = 32;
    // printf("ub32bit = %d\n",data.u32bit);

    // printf("ub8bit = %d\n",data.u8bit);
    // printf("ub16bit = %d\n",data.u16bit);

    // data.u8bit = 8;
    // data.u16bit = 16;
    // data.u32bit = 32;
    // dùng chung địa chỉ, tác động biến nào ảnh hưởng biến khác
    // kích thước lấy thằng lớn nhất
    // printf("dia chỉ data = %p\n",&data);

    // printf("dia chỉ data.u8bit = %p\n",&data.u8bit);
    // printf("dia chỉ data.u16bit = %p\n",&data.u16bit);
    // printf("dia chỉ data.u32bit = %p\n",&data.u32bit);

    // for (int i =0; i<5;i++){
    //     data.ten[i] = 2*i;

    // }

    // for (int i =0; i<5;i++){
    //     printf("data.ten[%d]:%d\n",i,data.ten[i]);
        
    // }
    // printf("------------------\n");
    // for (int i =0; i<7;i++){
    //     data.lop[i] = 3*i;

    // }

    // for (int i =0; i<7;i++){
    //     printf("data.lop[%d]:%d\n",i,data.lop[i]);
        
    // }

    // for (int i =0; i<5;i++){
    //     printf("data.ten[%d]:%d\n",i,data.ten[i]);
        
    // }
    // printf("------------------\n");
    // for (int i =0; i<3;i++){
    //     data.tuoi[i] = 5*i;

    // }

    // for (int i =0; i<3;i++){
    //     printf("data.tuoi[%d]:%d\n",i,data.tuoi[i]);
        
    // }
    // printf("------------------\n");
    // for (int i =0; i<7;i++){
    //     printf("data.lop[%d]:%d\n",i,data.lop[i]);
        
    // }
    return 0;
}
 