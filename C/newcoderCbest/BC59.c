#include <stdio.h>

int main() {
//int a[4];
int b,c=0;
  for(int i=0;scanf("%d",&b)!=EOF;i++)
  {
    if(b>c)
    c=b;
    
    if(i==3)
    goto t1;
  }
  t1:
  printf("%d",c);
}