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
   scanf("%d %d",&n);
 
   printf("%lld",getnum(n));    
}

ll getnum(int n)
{  
   int num=0;
   while(n!=0)
   {
      num=num*10+n%10;
      n=n/10;
   }
   return num;
}