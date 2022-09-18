#include<stdio.h>
#include<stdint.h>
#include <stdlib.h>
// uint8_t C;
// typedef int typeInt;

// typeInt A;

struct LinkedList
{
   int data;
   struct LinkedList *next;
};

typedef struct LinkedList *node;

// int *ptr(int a)
// {
//     // static int temp;
//     // return &temp;
//     int *ptr;
//     ptr = malloc(sizeof(int));
//     return ptr;
// }

node CreateNode(int value)
{
   node temp;
   temp = (node)malloc(sizeof(struct LinkedList));
   temp->data = value;
   temp->next = NULL;
   return temp;
}
node AddHead(node head, int value)
{
    // kiểm tra node này đc khởi tạo chưa
    // chưa đc khởi tạo đầu tiên(chưa có thông số)
    // head == NULL-> head = temp là node đầu tiên
    // nếu khác null->trước đó code data, địa chỉ
    // temp-> next gán địa chỉ head
    // head được gán temp
    node temp = CreateNode(value);
    if (head == NULL)
    {
        head = temp;
    }
    else
    {
        temp -> next = head;
        head = temp;
    }
    return head;
}
int main(int argc,char const *argv[])
{
   int *ptr_return;
   ptr_return = ptr(10);
   printf("%d",*ptr_return);
   return 0;
}