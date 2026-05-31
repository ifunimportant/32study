#include <stdio.h>
#include <string.h>
#include <math.h>
//实现
/*
*/
int fourflouer(int n);
int main() {
   int n,num;
   int flag1=0,flag0=0;
   scanf("%d",&n);
  for(int i=0;i< n;i++)
  {
      flag1=0;
      flag0=0;
      scanf("%d",&num);
      while(num!=0)
      {
            if(num%2==0)
            flag0++;
            else
            flag1++;
            num=num/2;
      }
      if((flag0!=0&&flag0%2==0)&&!(flag1!=0&&flag1%2==0))
      {
         printf("0 ");
      }
      else if(!(flag0!=0&&flag0%2==0)&&(flag1!=0&&flag1%2==0))
      {
        printf("1 ");
      }
      else if((flag0!=0&&flag0%2==0)&&(flag1!=0&&flag1%2==0))
      {
         printf("10 ");
      }
      else
         printf("100 ");
  }
}


