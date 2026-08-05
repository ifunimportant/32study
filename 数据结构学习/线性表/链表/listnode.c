#include <stdio.h>
#include <stdlib.h>
#include "listnode.h"

listnode * listnodecreate(int val)
{
    /*申请一块大小为链表节点的内存,并把内存的地址返回给一个链表节点结构体类型的指针
    *结构体指针就可以按照格式访问数据,
    */
    listnode *p=(listnode*)malloc(sizeof(listnode));
    if(p==NULL)
    {
        printf("创建失败");
        return p;
    }
    p->data=val;
    p->next=NULL;
    //printf("创建成功,第1个值是%d\n",val);
    return p;

}

int listnode_tail_insert(listnode **head,data_t value)
{
    listnode * p =listnodecreate(value);//先申请内存,返回该内存的地址,之后链接到链表
    //如果链表本身
    if(p==NULL)
    {
        return -1;
    }
    if(*head==NULL)
    {
        printf("数组指针为空,默认插入为第一个值");
        *head=p;
        return 0;
    }
    //寻找链表next为null的地址
    //如何寻找,*head->next>.... ->肯定能找到
    listnode *fp=*head;//结构体指针fp赋值**head的指针
    int count =2;
    while(fp->next!=NULL)
    {
        count++;
        fp=fp->next;
    }
    printf("插入的第%d个值是%d\n",count,value);
     fp->next=p;
     return 1;
}

// int listnodedeleteall(listnode**head,data_t value)
// {
//    listnode * findp=*head;//复制头指针的值
//     if(*head==NULL)
//     {
//         printf("this list is a null point\n这是一个空指针\n");//空指针
//         return -1;//返回错误代码
//     }
//     while(findp!=NULL)
//     {
//     while(findp!=NULL&&findp->data!=value)
//     {
//         findp=findp->next;
//     }
//     if(findp->data!=value)
//     {
//         if(findp->next==NULL)
//         {

//         }
        
//     }


//     }

// }
int listnodedelete(listnode**head,data_t value)
{
    listnode * findp=*head;//复制头指针的值
    if(*head==NULL)
    {
        printf("this list is a null point\n这是一个空指针\n");//空指针
        return -1;//返回错误代码
    }
    /*特殊情况分析---第一个值就是要删除的值free()头指针
    * 是唯一值,头指针指向null
    *不是唯一值,第二数据指针做头指针
    */
    if((*head)->data ==value)//如果链表第一个数就是要删除的数
    {
        if((*head)->next==NULL)
        {  //如果链表只有一个数并且是删除的数,free头指针并提醒
            printf("这是链表唯一的值,删除后链表彻底删除,头指针为空\n");//删除唯一的值
          
            free(*head);
            *head=NULL;
            //释放头指针的内存,并且把指针本身指向空指针
            return 2;
        }
        else//不是唯一的值,但是头部值
        {
            *head=(*head)->next;//链表不止一位,则把第二位地址作为头指针,并释放第一位头指针
            free(findp);
            printf("删除链表第一个值%d\n",value);//删除唯一的值
            return 1;
        }
    }
    else if((*head)->next==NULL)
    {
        return 0;
    }
    
   //为什么从第二个数开始,因为当第二个数需要删除时,前置的后置指针需要更改为本身的后置指针  
    while (findp->next->data!=value&&findp->next->next!=NULL)
    //从第二个数据开始寻找/需要提前处理,第一个数是val以及只有一个数,0个数
    {
       //findp->next=findp->next->next;
       findp=findp->next;//findp是函数内部变量,findp->next是通过解引用访问外部内存,会更改外部链表结构
    }
    if (findp->next->data==value&&findp->next->next==NULL)//是尾部数据
    {
       free(findp->next);
       findp->next=NULL;
       printf("链表删除末尾值%d\n",value);
       return 1;
    }
    else if(findp->next->data==value&&(findp->next->next!=NULL))//正常理想情况
    {
       listnode *delp=findp->next;
       findp->next=findp->next->next;
       free(delp);
       printf("链表删除一个%d值\n",value);
       return 1;
    }
    else
    {
        printf("链表内没有%d值\n",value);
        return 0;
    }


}


void listshow(listnode *head)
{
    listnode *findp=head;
    if(head==NULL)
    {
        printf("this list is a null list\n");
        return ;
    }
    int count=0;
    while(findp!=NULL)//如果是findp->nextze最后一个值不会被打印
    {
        count++;
        printf("第%d个数是:%d\n",count,findp->data);
        findp=findp->next;
    }
    return ;
}

