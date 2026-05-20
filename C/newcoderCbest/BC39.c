#include <stdio.h>
#include <math.h>
//terperater exchange
//
int main() {
    const float pai =3.14;
    int r,h,n,v=1e4;
    scanf("%d %d",&h,&r);
    double area=pai*r*r;//圆的面积
    double l=v*1.0/area;
    if((l-(int)l)>0)
        l=(int)l+1;
    if((int)l%h>0)
        n=(int)l/h+1;
    else
        n=(int)l/h;

    printf("%d\n",n);//float-int=float   float-int.0=double   int.0自动隐式转化为double类型
    
    
}


