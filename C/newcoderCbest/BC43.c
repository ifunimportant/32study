#include <stdio.h>
//时间转换
//
int main() {

  int number,times,time;
  const int v=12;
  scanf("%d",&number);
  number+=1;
  if(number%v==0)
    times=number/v;
  else
    times=number/v+1;
  time=times*4-2;
  printf("%d",time);//02中,2表示至少输入两位,0表示前方空位置零
}


