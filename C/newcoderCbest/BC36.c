#include <stdio.h>
#include <math.h>
//terperater exchange
//
int main() {
    double f,c,b;
    scanf("%lf",&f);
    //f=83648.78878;
    //b=f-32;
    c=(f-32)*5/9;//华氏度转变为摄氏度公式
    printf("%.3f\n",c);//float-int=float   float-int.0=double   int.0自动隐式转化为double类型
    //printf("%.10f\n",f);
    //printf("%.3f\n",b*5/9);
    
}

