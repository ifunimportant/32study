#include <stdio.h>
#include <string.h>
#include <math.h>
//实现
/*
*/
typedef struct 
{
  int i;
  int j;
}ret,*pret;
ret getret(int x);

//运算函数，两个数按照输入的进位要求，先从字符串转换为整数，然后进行加法运算，最后再转换回字符串

int main() {
    int n,time=0;
    scanf("%d",&time);
    for (int i = 0; i < n; i++)
    {
      scanf("%d",&n);
      ret l=getret(n);
      printf("%d %d\n",l.i,l.j);
    }  
}

ret getret(int x)
{
  int n[x+1];
  n[0]=0;
  n[1]=1;
  for (int i = 0; i <= x; i++)
  {
    n[i]=n[i/2]+n[i%2];
  }
  ret l;
  l.i=n[x];
  for (int i = 0; i <= x; i++)
  {
    if (n[i]==n[x])
    {
      l.j=i;
      break;
    }
    
  }
  return l;
}



