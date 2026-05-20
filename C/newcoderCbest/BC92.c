#include <stdio.h>
int getjie(int n);
int getflag(int n);
int main() {

  for(int i =10000;i<100000;i++)\
  {
    if(getflag(i)==1)
    printf("%d ",i);
  }

    return 0;
}

int getflag(int n)
{
  int flag=0;
  int cal=0;
  int x1,x2;
  for (int i = 1; i < 5; i++)
  {
    x1=n%getjie(i);
    x2=n/getjie(i);
    cal+=x1*x2;
  }
  if(cal==n)
  flag=1;
  return flag;
}

int getjie(int n)
{
  int cal=1;
  for (int i = 0; i < n; i++)
  {
    cal*=10;
  }
  return cal;
  
}