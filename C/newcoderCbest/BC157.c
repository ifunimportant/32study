#include <stdio.h>
#include <string.h>
#include <math.h>
//实现
/*
输入两个数组长度 n m,数组为a b
设置函数,读取给定位数,与给定启示位置的求和函数
int gitadd (int i,int x,int n,int ch[n])
设置差函数 int dev(int i,int j)

*/

long long getnum(long long n);
int main() {
long long n;
int flag=0;
scanf("%lld",&n);
n=getnum(n);
printf("%lld\n",n);
if(n%2!=0)
  for(long long i=3;i<=sqrt(n);i=i+2)
  {
    if(n%i==0)
    {
      flag=1;
      break;
    }
  }
  else if(n%2==0)
  flag=1;

  if(flag==0)
  printf("prime");
  else
  printf("noprime");
}

long long getnum(long long n)
{
  long long t=0;
  long long m=n%10;
  long long z=n;
  long long result;
  while(n)
  {
    z=z*10;
    t=t*10+n%10;
    m=m*10;
    n=n/10;
  }
  result=t-m/10+z/10;
  return result;
}