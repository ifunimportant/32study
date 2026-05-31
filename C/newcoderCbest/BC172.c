#include <stdio.h>
#include <string.h>
#include <math.h>
typedef long long ll;
//实现
/*
*/


ll getnum(int n);

int main() {
   int n,m;
   scanf("%d %d",&n,&m);
   if(n<m)
   {
    printf("0");
   }
   else 
   printf("%lld",getnum(n)/getnum(n-m));    
}

ll getnum(int n)
{  ll add=1;
   if(n==1||n==0)
   return 1;
   else
   add=n*getnum(n-1);   
   return add;
}