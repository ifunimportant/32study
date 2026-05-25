#include <stdio.h>
#include <string.h>
int gitaddflag(int x);
int main() {
 int n,num=0,add=0;
 double price;
 scanf("%d",&n);

 for (int i = 0; i <n; i++)
 {
    scanf("%d",&num);
    add+=gitprice(num);
 }
 price=add*0.1;
 printf("%.1f",price);
}
//n符合要求,返回1
int gitprice(int x)
{
    int flag=1;
    if(x>60)
    flag=2;
   return flag;
}