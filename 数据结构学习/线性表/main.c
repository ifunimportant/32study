#include<stdio.h>
#include"array.h"


int main()
{

    //外部定义指针
  array *parray1=getarray();
  arrayinit(parray1);
  array array2;
  arrayinit(&array2);
  printf("打印状态： %d\n",array_writedate(parray1,0,12));
  printf("打印状态： %d\n",array_writedate(&array2,0,2));
  printf("array1存入的第%d个数是:%d\n",parray1->last,parray1->sums[parray1->last-1]);
  printf("array2存入的第%d个数是:%d\n",array2.last,array2.sums[array2.last-1]);

}


