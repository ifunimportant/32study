  #include <stdio.h>
  #include "array.h"
/*
typedef  int  data_t ;

//结构体声明
typedef struct 
{
    data_t  sums[N];
    int last;
} array,*arraypoint;
//初始化，读取，写入肯定是对指针操作方便
//申请的内存地址如何与数组联系在一起
*/

//申请一个数组，返回一个数组地址，这样使用的时候自己定义一个array指针赋值给他即可
array * getarray()
{
   // array *p=(array *)malloc(N*sizeof(data_t)+4)
     array *p=(array *)malloc(sizeof(array));
    return p;
}



//初始化函数
//传入的一个指针结构体，对他进行一些操作，但是不是他定义的
void arrayinit(array * p)
{
  p->last=0;
  for(int i=0;i<N;i++)
  {
    p->sums[i]=0;
  }

}



//读取函数，往位置上读取数据
int array_readdate(array*p , int n)
{
  return p->sums[n-1];
}

//写函数，往位置上写入数据
int array_writedate(array*p , int pos , data_t value)
{
  if(pos<0||pos>p->last-1||p->last>=N)
  {
    return 0;//插入失败
  }
  else
  {
    p->last++;
    for(int i=p->last-1;i>pos;i--)
    {
      p->sums[i]=p->sums[i-1];
    }
    p->sums[pos]=value;
    return 1;
  }
}

//释放一个数组
int freearray(array *p)
{
    free(p);
    return 1;
}