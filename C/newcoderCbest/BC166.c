#include <stdio.h>
#include <string.h>
#include <math.h>
//实现
/*
*/

int gettimes(int n,int *add);
int getnum(int n);

int main() {
   int n;
   while(1)
   {
   scanf("%d",&n);
   printf("%d\n",getnum(n));   
   }
}
int getnum(int n)
{
   int nadd=0;
   gettimes(n,&nadd);
   return nadd;
}

int gettimes(int n,int* add)
{
  if(n==1)
  {
   (*add)++;
   return *add;
  }
  if(n==0)
  {
   (*add)++;
   return *add;
  }
  gettimes(n-1,add);
  gettimes(n-2,add);
  return *add;
}
