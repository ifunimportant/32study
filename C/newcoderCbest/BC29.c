#include <stdio.h>
//延期
//
int main() {

  int a,b;
  
  scanf("%d %d",&a,&b);
  int n=(a+b-1)%7+1;//不能有周0,但会有周7
  printf("%d",n);
}

