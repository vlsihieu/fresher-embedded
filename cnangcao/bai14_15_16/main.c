#include<stdio.h>
#include<stdint.h>
#include <stdlib.h>

struct List
{
   int data;
   struct List *next;
};

typedef struct List *Vector;

Vector CreateNode(int value)
{
   Vector temp;
   temp = (Vector)malloc(sizeof(struct List));
   temp->data = value;
   temp->next = NULL;
   return temp;
}
void Push_back(Vector *head, int value)
{
    Vector temp, p;
    temp = CreateNode(value);
    if (*head == NULL)
    {
        *head = temp;
    }
    else
    {
        p = *head;
        while(p->next != NULL)
        {
            p=p->next;
        }
        p->next = temp;
    }
}
Vector Pop_back(Vector head)
{
    //vector head == null khởi tạo hay chưa
    // = NULL chưa khởi tạo

    if (head == NULL &&(head)->next == NULL)
    {
        // return Pop_back(head);
        head = NULL;
    }
    Vector p = head;
    while (p->next->next != NULL)
    {
        /* code */
        p=p->next;
    }
    // 
    free(p->next);
    p->next = NULL;
    return head;
    
}
int getData(Vector head, int index)
{
    int i =0;
    Vector p = head;
    while(p->next != NULL && i!=index)
    {
        p = p->next;
        i++;
    }
    return p->data;
}
int main(int argc,char const *argv[])
{
   Vector data = NULL;
   Push_back(&data,5); //0
   Push_back(&data,2); //1
   Push_back(&data,4); //2
   Push_back(&data,7); //3

   int result;
   data = Pop_back(data);
   data = Pop_back(data);
   data = Pop_back(data);
//    data = Pop_back(data);

   result = getData(data,0);
   printf("%d\n",result);
   return 0;
}