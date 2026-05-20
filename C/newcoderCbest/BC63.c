#include <stdio.h>
#define card 50
int main() {
  int mon,day,flag=0;
  float price;
  scanf("%f %d %d %d",&price,&mon,&day,&flag);
  if(day==11&&mon==11)//双十一
  {
    price*=0.7;
    if(flag==1)
    price-=card;
  }
  else if(day==12)
  {
    price*=0.8;
    if(flag==1&&price>=card)
    price-=card;    
  }  
 // else if(!((day==11&&mon==11)||(day==12&&mon==12)))
  if(price<0)//不能让商家花钱给你
   price=0;
  printf("%.2f",price);
  

}
