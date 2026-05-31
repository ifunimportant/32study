#include <stdio.h>
#include <string.h>
#include <math.h>
typedef long long ll;
//实现
/*
*/


int digit(int m,int n);

int main() {
   int m,n;
   scanf("%d %d",&m,&n);
   printf("%lld\n",digit(m,n));     
}
int digit(int m,int n)
{  
   n=pow(10,n);
   m=m%n;
   return m;
}
