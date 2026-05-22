#include <stdio.h>
#define f 5//输出前五
int getflag(int n,int x);
int main() {
  int x,cal;
  scanf("%d",&x);
  int n[x];
  scanf("%d",&n[0]);
  cal=n[0];
  for(int i=1;i<x;i++)
  {
    scanf("%d",&cal);
    for(int j=0;j<i;j++)
    {
      if(cal>n[j])
      {
        int z=i;
        while(z!=j)
        {
          n[z]=n[z-1];
          z--;
        }
        n[j]=cal;
        break;//因为每次输入新数据的时候,原本的队列是排序好的,新数只需要找位置即可;
      }
      else
      n[i]=cal;
    }
  }
  for(int i=0;i<f;i++)
  {
  printf("%d ",n[i]);
  }
}


 