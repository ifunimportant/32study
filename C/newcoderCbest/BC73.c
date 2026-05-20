#include <stdio.h>
#include <math.h>
int main() 
{
  float a,b,c,det,x1,x2;
  while (scanf("%f%f%f",&a,&b,&c)!=EOF)
  {
  //if(a==' '||a=='\n')//只有char类型需要规避空格和回车
  //continue;
    if(a==0)
      printf("Not quadratic equation\n");
    else
    {
      det=b*b-4*a*c;
      if(det==0){
        x1=(-b/a/2);
        if(x1==0)
        x1=0.00;
        printf("x1=x2=%.2f\n",x1);
      }
      else if(det>0){
        x1=(-b-sqrt(det))/(2*a);
        x2=(-b+sqrt(det))/(2*a);
        printf("x1=%.2f;x2=%.2f\n",x1,x2);  
      }
      else{
        x1=-b/a/2;
        x2=sqrt(-det)/a/2;
        printf("x1=%.2f-%.2fi;x2=%.2f+%.2fi\n",x1,x2,x1,x2);  
      }
    }
  }
}
