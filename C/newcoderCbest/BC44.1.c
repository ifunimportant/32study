#include <stdio.h>
//更相减损术
//
int main() {

  unsigned long a,b,c;
  unsigned long yue,bei,sum;
  scanf("%ld %ld",&a,&b);
  bei=a*b;
  do
  {
    c=a%b;
    a=b;
    b=c;
  }while (c!=0);//为真就继续循环
 yue=a;
 bei=bei/yue;
 sum=yue+bei;
 printf("%ld",sum);
}


