#include <stdio.h>
#include <string.h>
#include <math.h>
typedef long long ll;
//实现
/*
*/


int digit(int m,int n);

int main() {
   int x,n;
   scanf("%d %d",&n,&x);
   printf("%lld\n",digit(n,x));     
}
int digit(int n,int x)
{  
  if(n==0)
  return 1;
  else if(n==1)
  return 2*n;
  else if(n>1)
  return 2*x*digit(n-1,x)-2*(n-1)*digit(n-2,x);
}
