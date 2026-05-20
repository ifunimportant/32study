#include <stdio.h>
//求一个整数的十位数字
//
int main() {

  int a,b;
  
  scanf("%d",&a);
  
  b=a%100/10;
  printf("%d",b);
}

