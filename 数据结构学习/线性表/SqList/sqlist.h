#ifndef _SQLIST_H_
#define _SQLIST_H_

#define MAX 5  //默认初始长度
#define ADD 2  //扩容默认增加值
#define typef "d"
typedef int elemtype;
typedef struct sqlist
{
    int capacity;
    int  length;
    elemtype *array;
}sqlist;

int initlist(sqlist *l);
sqlist *createlist();
elemtype listquertelem(sqlist*l,int pos);
int listlocateelem(sqlist * l,elemtype elem);
int listdeleteelem(sqlist*l,elemtype elem);
int listdeleteall(sqlist*l,elemtype elem);
int listdeletepos(sqlist*l,int pos);
int listinsertelem(sqlist*l,int pos,elemtype elem);
int destroylist(sqlist **l);
int listsearchpos(sqlist*l,int f);
int listcountelem(sqlist*l,elemtype elem);
int listsearchelem(sqlist*l,elemtype elem,int num[]);
int listtailinsert(sqlist*l,elemtype elem);
int listfrontinsert(sqlist*l,elemtype elem);
sqlist * expendsqlist(sqlist *l,int add);
int listsort(sqlist*l,char f);

int listshow(sqlist*l);
void listdeleterepeat(sqlist*l);
void listmarge(sqlist*l1,sqlist*l2);


#endif