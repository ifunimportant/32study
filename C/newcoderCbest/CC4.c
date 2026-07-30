#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
   int m[6],*p=m;
   for (int i = 0; i < 6; i++)
   {
      scanf("%d",&m[i]);
   }
      for (int i = 0; i < 6; i++)
   {
      printf("%d",p[i]);
   }
   
}

