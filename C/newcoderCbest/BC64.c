#include <stdio.h>
#define card 20;
int main() {
  int price;
  float kg;
  char flag;
  scanf("%f %c",&kg,&flag);
  if(kg<=1)
  price=20;
  else if(kg-(int)kg==0)
  price=20+(int)kg-1;
  else
  price=20+(int)kg;

  if(flag=='y')
  price+=5;
  printf("%d",price);
}
