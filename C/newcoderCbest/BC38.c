#include <stdio.h>
#include <math.h>
//terperater exchange
//
int main() {
    
    int r1,r2 ;
    scanf("%d %d",&r1,&r2);
    //f=83648.78878;
    //b=f-32;
    double r3=(r1*r2)*1.0/(r1+r2);//double=int/int 得到的是整形的除法,后赋值,必须在算式中先隐式转化为double类型
    printf("%.2f\n",r3);//float-int=float   float-int.0=double   int.0自动隐式转化为double类型
}

