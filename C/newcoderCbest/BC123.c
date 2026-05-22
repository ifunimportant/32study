#include <stdio.h>
#define f 5//输出前五
int getflag(int n,int x);
int main() {
  int x,cal;
  scanf("%d",&x);
  x=x+1;
  int num[x];
  scanf("%d",&num[0]);
  cal=num[0];
  for(int i=1;i<x;i++)
  {
    scanf("%d",&cal);
    for(int j=0;j<i;j++)
    {
      if(cal<num[j])
      {
        int z=i;
        while(z!=j)
        {
          num[z]=num[z-1];
          z--;
        }
        num[j]=cal;
        break;//因为每次输入新数据的时候,原本的队列是排序好的,新数只需要找位置即可;
      }
      else
      num[i]=cal;
    }
   
  }
  for(int i=0;i<x;i++)
  {
  printf("%d ",num[i]);
  }
}


 