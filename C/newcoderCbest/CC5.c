#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
   int n;
   scanf("%d",&n);
   int m[n],*p=m;
   for (int i = 0; i < n; i++)
   {
      scanf("%d",&m[i]);
   }
   
      printf("%d",cal(p,n));
   
}
 int cal(int *array,int n) 
 { 
   int add=0;
   for (int i = 0; i < n; i++)
   {
      add+=array[i];
   }
   return add;
 }
