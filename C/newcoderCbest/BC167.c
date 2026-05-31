#include <stdio.h>
#include <string.h>
#include <math.h>
typedef long long ll;
//实现
/*
*/


ll getnum(int n);

int main() {
   int n;
   while(1)
   {
   scanf("%d",&n);
   printf("%I64d\n",getnum(n));   
   }
}
ll getnum(int n)
{  ll add=1;
   if(n==1)
   return 1;
   else
   add=n*getnum(n-1);
   
   return add;
}


