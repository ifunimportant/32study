#ifndef _ARRAY_H_
#define _ARRAY_H_
#define  N  100
//
typedef  int  data_t ;

//结构体声明
typedef struct 
{
    data_t *sums;
    int last;
} array,*arraypoint;
//初始化，读取，写入肯定是对指针操作方便
//申请的内存地址如何与数组联系在一起


//申请一个数组，返回一个数组地址，这样使用的时候自己定义一个array指针赋值给他即可
array * array_create();




//初始化函数
//传入的一个指针结构体，对他进行一些操作，但是不是他定义的
int arrayinit(array * p);



//读取函数，往位置上读取数据
int array_readdate(array*p , int n);
//写函数，往位置上写入数据
int array_writedate(array*p , int pos , data_t value);

//删除制定位置数据
int array_delete(array*p,int pos);





#endif