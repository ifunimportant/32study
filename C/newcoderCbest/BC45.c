#include <stdio.h>


int getbit(int a);
//01输出
int out (int a);
int main() {

  int n,bit,num;
  scanf("%d",&n);
  bit=getbit(n);
  for (int i = 0; i < bit; i++)
  {   
    num=num*10;
      int z=1;
      
      for (int j = i+1; j < bit; j++)
      {
          z*=10;
      }
      
       num+=out(n/z);
      n=n%z;
      z=1;
  }
 printf("%d",num);
}
//更相减损术
int getbit(int a)
{
  int times=0;
  do
  {
   a=a/10;
   times++;

  } while (a!=0);
  
return times;
}


int out (int a)
{
  if(a%2==0)
  a=0;
  else
  a=1;
  return a;
}