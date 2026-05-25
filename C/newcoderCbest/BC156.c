#include <stdio.h>
#include <string.h>
//实现
/*
输入两个数组长度 n m,数组为a b
设置函数,读取给定位数,与给定启示位置的求和函数
int gitadd (int i,int x,int n,int ch[n])
设置差函数 int dev(int i,int j)

*/
int gitadd (int i,int x,int n,int ch[n]);
int dev(int i,int j);

int main() {
  int n,m,sub=0,flag,tag;
  scanf("%d %d",&n,&m);
  int a[n],b[m];
  int badd;
  int aadd;
  for (int i = 0; i < n; i++)
  {
    scanf("%d",&a[i]);
  }
  for (int i = 0; i < m; i++)
  {
    scanf("%d",&b[i]);
  }
  aadd=gitadd(0,n,n,a);

  for(int j=1;j<=m;j++)
  {
    for(int i=0;i<=m-j;i++)
    {
      badd=gitadd(i,j,m,b);
      if(i==0&&j==1)
      {
      sub=dev(aadd,badd);
      flag=i;
      tag=j;
      }
      else{
        if(dev(aadd,badd)<sub)
        {
          sub=dev(aadd,badd);
          flag=i;
          tag=j;
        }
      }
    } 
  }
  
  for (int i = flag; i < flag+tag; i++)
  {
    printf("%d ",b[i]);
  }
  
  

}

int gitadd (int i,int x,int n,int ch[n])
{
  int add=0;
  for (int j=i ; j <i+x ; j++)
  {
    add+=ch[j];
  }
  return add;
}

int dev(int i,int j)
{
  int dev=0;
  dev=i>j?i-j:j-i;
  return dev;
} 
