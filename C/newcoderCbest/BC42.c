#include <stdio.h>
//时间转换
//
int main() {

  int hour,minute,times;
  
  scanf("%d:%d %d",&hour,&minute,&times);
  int num=hour*60+minute+times;
  minute=num%60;
  hour=num/60;
  printf("%02d:%02d",hour,minute);//02中,2表示至少输入两位,0表示前方空位置零
}


