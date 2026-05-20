#include <stdio.h>



int main() {

  int a,b;
  scanf("%d%d",&a,&b);
  int sum;
  sum=a+b;
  sum%=100;
 printf("%d",sum);
}