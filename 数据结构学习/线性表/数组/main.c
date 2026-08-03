#include<stdio.h>
#include"array.h"


int main()
{

    //外部定义指针
  array *parray1=array_create();//使用内存申请,储存在堆内存上
  arrayinit(parray1);
  array array2;//直接定义结构体,结构体数组是定义在栈上的,栈很小,一般不推荐
  arrayinit(&array2);
  printf("打印状态： %d\n",array_writedate(parray1,0,12));
  printf("打印状态： %d\n",array_writedate(&array2,0,2));
  printf("array1存入的第%d个数是:%d\n",parray1->last,parray1->sums[parray1->last-1]);
  printf("array2存入的第%d个数是:%d\n",array2.last,array2.sums[array2.last-1]);
  printf("parray1的存储地址是%p\narray2的存储地址是%p",parray1,&array2);
}


