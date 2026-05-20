#include <stdio.h>

int main() {
//int a[4];
int b,c=0;
  while(scanf("%d",&b)!=EOF)
  {
    static int i=0;
    if(b>c)
    c=b;
    i++;
    if(i==4)
    break;
  }
  printf("%d",c);
}