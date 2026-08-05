#include <stdio.h>
#include <stdlib.h>
#include "sqlist.h"

// typedef int elemtype;
// typedef struct sqlist
// {
//     elemtype *elem;
//     int max;
//     int  length;
// }sqlist;
//

/*
*创造一个链表,默认总长度是5,超出后自动括加2
*返回一个结构题sqlist*指针地址
*/
sqlist *createlist()
{
    sqlist *p=(sqlist*)malloc(sizeof(sqlist));
    if(!p)
    {
        printf("顺序表创建失败,返回null\n");
        return NULL;
    }
    printf("正在创建数组\n");
    p->array=(elemtype*)malloc(MAX*sizeof(elemtype));
    if(!p->array)
    {
        printf("数组创建失败,返回null\n");
        return NULL;
    }
    p->capacity=MAX;
    p->length=0;
    printf("数组已经创建\n");
    return p;
}

/*
*链表初始化,把原有列表初始化,但是分配的空间大小默认不变
*初始化成功,返回链表申请空间长度;
*初始化失败,返回-1
*/
int initlist(sqlist *l)
{
    if(l==NULL)
    {
        printf("初始化失败,初始化链表为空链表\n");
        return -1;
    }
    l->length=0;
    printf("初始化完成\n");
    return l->capacity;

}

/*
*quert查询pos位置上的数据,并返回;
*数组有问题返回-1,所以默认数组不能存入负数
*/
elemtype listquertelem(sqlist*l,int pos)
{
    if(l==NULL||l->array==NULL)//l是数组结构体本身,l->array是数组
    {
        printf("查询数组本身出错,返回-1\n");
       return -1;
    }
    if(pos<=0||pos>l->length)
    {
        printf("查询位置超出界限,目前数组含有数据个数为%d\n",l->length);
        return -1;
    }
    printf("查询到第%d位的值\n",pos);
    return l->array[pos-1];
}
/*
*查询数据elem的出现的位置
*并且返回该位置
*如果没有出现,返回0;
*当查询数组为null,返回-1
*/
int listlocateelem(sqlist * l,elemtype elem)
{
   if(l==NULL||l->array==NULL)
   {
        printf("查询数组为空,返回-1\n");
        return -1;
   }
   for(int i=0;i<l->length;i++)
   {
      if(l->array[i]==elem)
      {
        printf("查询到一个%"typef",位置为%d",elem,++i);
        //return ++i;
        return i;
      }
   }
   printf("没有查询到该数据\n");
   return 0;
}
//内部函数,不检验sqlist的安全性,不检验pos是否超层
static inline elemtype  delete(sqlist*l,int pos)
{
    if(l==NULL||l->array==NULL||pos<1||pos>(l->length))
    {
        return -1;
    }
    elemtype elem=l->array[pos-1];
    for(int i=pos;i<l->length;i++)
    {
        l->array[i-1]=l->array[i];//pos是位置,实际按照下标删除,pos-1
    }
    l->length--;
    return elem;
}


/*
*删除该数组的elem的元素,并返回元素pos
*当数组内部没有elem,返回0
*数组本身错误,返回-1
*/
int listdeleteelem(sqlist*l,elemtype elem)
{
    if(l==NULL||l->array==NULL)
    {
        printf("要删除数据的数组错误,返回-1\n");
        return -1;
    }
    for(int i=0;i<l->length;i++)
    {
        if(l->array[i]==elem)
        {
            delete(l,++i);
            printf("已删除一位%"typef",位置是%d",elem,i);
            return i;
        }
    }
    printf("没有对应数据%"typef"可以删除",elem);
    return 0;
}
int listdeleteall(sqlist*l,elemtype elem)
{
    if(l==NULL||l->array==NULL)
    {
        printf("要删除数据的数组错误,返回-1\n");
        return -1;
    }
    for(int i=0;i<l->length;i++)
    {
        if(l->array[i]==elem)
        {
            //不能使用i++,或++i,因为i会自增
            delete(l,i+1);
            i--;
        }
    }
    printf("已经删除所有的%"typef"\n",elem);
    return 1;
}
int listdeletepos(sqlist*l,int pos)
{
    if(l==NULL||l->array==NULL)
    {
        printf("要删除数据的数组错误,返回-1\n");
        return -1;
    }
    if(pos<1||pos>(l->length))
    {
        printf("删除位置超层,目前最大删除位置是%d\n",l->length);
        return -1;
    }
    //delete(l,pos);
    printf("已删除%d位置的数据%"typef"\n",pos,delete(l,pos));
    return 0;
}
/*
*按照位置插入数据
*判断数组是否为空
*判断插入位置是否合格
*/
int listinsertelem(sqlist*l,int pos,elemtype elem)
{
    if(l==NULL||l->array==NULL)
    {
        printf("插入的数组错误,返回-1\n");
        return -1;
    }
    if(pos<1||pos>(l->length+1))
    {
        printf("插入位置超层,目前最高插入位置是%d\n",l->length+1);
        return -1;
    }
    if(l->capacity==l->length)
    {
        if(!expendsqlist(l,ADD))
        {
           printf("扩容失败,无法插入\n"); 
            return -1;
        }
        printf("按需要已扩容,默认扩容%d\n",ADD);
    }
    //这一步开始按照下标插入,下标比位数小1
    for(int i=l->length;i>=pos;i--)
    {
        l->array[i]=l->array[i-1];
    }
    l->array[pos-1]=elem;
    l->length++;
    printf("已插入:%"typef" 到位置:%d\n",elem,pos);
    return pos;

}

int destroylist(sqlist **l)
{
    if(l==NULL||*l==NULL||(*l)->array==NULL)
    {
        printf("需要销毁的数组发生错误或者已经释放\n");
        return -1;
    }
    printf("准备开始释放数组\n");
    free((*l)->array);
    printf("已释放数组\n");
    (*l)->array=NULL;
    printf("数组地址归0\n");
    free(*l);
    printf("已释放结构体\n");
    *l=NULL;
    printf("结构体指针归0\n");
    return 1;
}

//查询某位置元素
elemtype listsearchpos(sqlist*l,int pos)
{
    if(l==NULL||l->array==NULL)
    {
        printf("按位查询的数组错误,返回-1\n");
        return -1;
    }
    if(pos<1||pos>l->length)
    {
        printf("查询越位,数组数目为%d\n",l->length);
        return -1;
    }
    printf("已查询第%d位数据%"typef,pos,l->array[pos-1]);
    return l->array[pos-1];
}

//查询elem的数量
int listcountelem(sqlist*l,elemtype elem)
{
    if(l==NULL||l->array==NULL)
    {
        printf("按数据查询的数组错误,返回-1\n");
        return -1;
    }
    int count=0;
    for(int i=0;i<l->length;i++)
    {
        if(l->array[i]==elem)
        count++;
    }
    printf("数据%"typef"的个数是%d\n",elem,count);
    return count;
}
//查elem数据位置
int listsearchelem(sqlist*l,elemtype elem,int num[])
{
    if(l==NULL||l->array==NULL)
    {
        printf("按数据查询的数组错误,返回-1\n");
        return -1;
    }
    int count=0;
    for(int i=0;i<l->length;i++)
    {
        if(l->array[i]==elem)
        {
            num[count]=i+1;
            count++;
        }
    }
    printf("数据%"typef"的位置是:",elem);
    for(int i=0;i<count;i++)
    {
        printf("%d  ",num[i]);
    }
    printf("\n");
    return 1;
}
/*
*@ret null,l
@sert 返回指针
*/
sqlist* expendsqlist(sqlist *l,int add)
{
    if(l==NULL||l->array==NULL)
    {
        printf("需要扩展的数组发生错误\n");
        return NULL;
    }
    elemtype*p=(elemtype*)malloc((l->capacity+add)*sizeof(elemtype));
    if(p==NULL)
    {
        printf("扩张失败,返回NULL");
        return NULL;
    }
    for(int i=0;i<l->length;i++)
    {
        p[i]=l->array[i];
    }
    free(l->array);
    l->array=p;
    l->capacity=l->capacity+add;
    printf("已完成扩张,容量是%d\n",l->capacity);
    return l;
}

int listtailinsert(sqlist*l,elemtype elem)
{
    listinsertelem(l,l->length+1,elem);
    //应该插入长度加一的位置,因为函数封装的pos就是位数
    return l->length;
}

int listfrontinsert(sqlist*l,elemtype elem)
{
    listinsertelem(l,1,elem);
    return l->length;
}

int listshow(sqlist*l)
{
    if(l==NULL||l->array==NULL)
    {
        printf("展示的数组为空\n");
        return -1;
    }
    printf("--------------------------\n");
    printf("目前数组容器为:%d\n数组含有数据数量:%d\n",l->capacity,l->length);
    for(int i=0;i<l->length;i++)
    {
        printf("  %d  ",l->array[i]);
    }
    printf("\n");
    printf("--------------------------\n");
    return l->length;
}

int listsort(sqlist*l,char f)
{
    if(l==NULL)
    {
        printf("要排序数列输错");
        return -1;
    }
    switch (f)
    {
    case 's':
        printf("准备进行升序排序\n");
        break;
    case 'j':
        printf("准备进行降序排序\n");
        break;   
    default:
        break;
    }
    elemtype p;
    for(int i=1;i<l->length;i++)
    {
        for(int j=0;j<i;j++)
        {
            switch (f)
            {
            case 'j':
                if(l->array[i]>l->array[j])
                {
                    p=l->array[i];
                    l->array[i]=l->array[j];
                    l->array[j]=p;
                    printf("*");
                }
                else
                {
                    printf("^");
                }
                break;
            case 's':
                if(l->array[i]<l->array[j])
                {
                    p=l->array[i];
                    l->array[i]=l->array[j];
                    l->array[j]=p;
                    printf("*");
                }
                else
                {
                    printf("^");
                }   
                break;
            default:
                printf("排序信息识别错误,未能排序\n");
                return -1;
                break;
            }
            //printf("-");
        }
        printf("\n");
    }
    printf("排序已完成\n");
    return 1;
}

void listdeleterepeat(sqlist*l)
{
    if(l==NULL||l->array==NULL)
    {
        printf("删除重复数据操作失效,线性表错误\n");
        return ;
    }
    int count=0;
    for(int i=1;i<l->length;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(l->array[i]==l->array[j])
            {
            count++;
            printf("%"typef"重复,位置为:%d-%d\n",l->array[i],i+1,j+1);
            listdeletepos(l,i+1);
            i--;
            break;//发现有重复,删除,i--跳出该位置前对比循环;
            }
        }
    }
    printf("删除重复组数量%d\n",count);
}

void listmarge(sqlist*l1,sqlist*l2)
{
    printf("---------------\n合并开始\n");
    if(expendsqlist(l1,l2->length)==NULL)
    {
        return -1;
    }
    for(int i=0;i<l2->length;i++)
    {
        listtailinsert(l1,l2->array[i]);
    }
    printf("合并完成,被合并线性表未释放\n---------------\n");
}
