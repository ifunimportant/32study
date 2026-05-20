#include <stdio.h>
#include <math.h>
//everge max min
//
int main() {
float a,b,c;
scanf("%f %f %f",&a,&b,&c);
double cir=(a+b+c)/2.0;
double area=sqrt(cir*(cir-a)*(cir-b)*(cir-c));
cir *=2;
printf("circumference=%.2lf area=%.2lf",cir,area);

}

