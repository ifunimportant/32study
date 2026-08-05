#ifndef _LISTNODE_H_
#define _LISTNODE_H_
typedef  int  data_t ;

typedef struct listnode
{
    data_t data;
    //int * notenext;  错误,不应该是一个int型指针,而是下一个结构体指针
    struct listnode * next;
} listnode ;
//创造一个链表并且输入一个数
listnode * listnodecreate(int val);

int listnode_tail_insert(listnode **head,data_t value);

int listnodedelete(listnode **head,data_t value);
//int listnodedeleteall(listnode**head,data_t value);
void listshow(listnode *head);


#endif