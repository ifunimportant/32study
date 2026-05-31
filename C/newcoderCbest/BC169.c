#include <stdio.h>
#include <string.h>
#include <math.h>
typedef long long ll;
//实现
/*
*/


ll ackmann(int m,int n);

int main() {
   int m,n;
   scanf("%d %d",&n,&m);
   printf("%lld\n",ackmann(m,n));     
}
ll ackmann(int m,int n)
{  
   int add;
   if(m>0&&n==0)
      add=ackmann(m-1,1);
   else if(m>0&&n>0)
      add=ackmann(m-1,ackmann(m,n-1));
   else if(m==0)
   {
      n++;
      add=n;
   }
   return add;
}


