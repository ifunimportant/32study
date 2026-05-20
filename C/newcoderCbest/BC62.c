#include <stdio.h>

int main() {
  int x,i=0;
  int posflag=0,negflag=0;
  while(scanf("%d",&x)!=EOF)
  {
    if(x<0)
    negflag++;
    if(x>0)
    posflag++;
    if(i==9)//0-9十个数
    break;
    i++;
  }
  printf("positive:%d\nnegative:%d",posflag,negflag);
}
