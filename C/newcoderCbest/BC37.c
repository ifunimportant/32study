#include <stdio.h>
#include <math.h>
//terperater exchange
//
int main() {
    const float pai =3.14;
    int r ;
    scanf("%d",&r);
    //f=83648.78878;
    //b=f-32;
    float area=pai*r*r;//圆的面积
    printf("%.2f\n",area);//float-int=float   float-int.0=double   int.0自动隐式转化为double类型
    
    
}


