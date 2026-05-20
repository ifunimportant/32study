#include <stdio.h>
#define card 20;
int main() {
  float price;
  scanf("%f",&price);
  if(price>=5000)
  price*=0.6;
  else if(price>=2000)
  price*=0.7;
  else if(price>=500)
  price*=0.8;
  else if(price>=100)
  price*=0.9;
  printf("%f",price);
}
