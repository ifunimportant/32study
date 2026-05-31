#include <stdio.h>
#include <string.h>
#include <math.h>
//实现
/*
*/
int fourflouer(int n);

int main() {
   int x,y;
   
   scanf("%d %d",&x,&y);
  for(int i=x;i<= y;i++)
  {
    if(fourflouer(i)!=0)
    printf("%d",i);
  }
}

int fourflouer(int n)
{
  int j=n,add=0,flag=0;
  for(int i=0;i<4;i++)
  {
    add+=pow(j%10,4);
    j=j/10;
  }
  if(add==n)
  flag=1;
  return flag;
}



