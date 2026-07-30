#include <stdio.h>
#include <string.h>
#include <math.h>

#define num 31




int main() {
   int m,n;
   scanf("%d %d",&m,&n);
   exchange(&m,&n);
   printf("%d %d\n",m,n);
}

void exchange(int *a,int *b)
{
   int ex=*a;
   *a=*b;
   *b=ex;
}