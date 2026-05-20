#include <stdio.h>
#include <math.h>
//everge max min
//
int main() {
int n,h,m;
scanf("%d %d %d",&n,&h,&m);
if(m%h==0)
n=n-m/h;
else
n=n-(m/h+1);
printf("%d",n);
}

