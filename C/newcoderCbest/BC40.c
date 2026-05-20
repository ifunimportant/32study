#include <stdio.h>
#include <math.h>
//terperater exchange
//
int main() {
    
    int d1,d2,d3 ;
    scanf("%d %d",&d1,&d2);
    
    d3=d2+d2-d1;//double=int/int 得到的是整形的除法,后赋值,必须在算式中先隐式转化为double类型
    printf("%d\n",d3);//float-int=float   float-int.0=double   int.0自动隐式转化为double类型
}

