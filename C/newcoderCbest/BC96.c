#include <stdio.h>

int main() {
  int day=0,l=0;
  int n=0,cost=0;
  
  while(scanf("%d",&n)!=EOF)//在牛客上,输入结束后,会自动返回eof,
  {
    while(day<=n)//求出轮数
    {
      l++;
      day+=l;
    }
    //此时轮数为超了一轮的轮数,day也是超了的轮数
    day-=l;
    l--;//l轮
    for (int i = 1; i <= l; i++)//前l轮发的钱数量;
    {
      for (int j = 0; j < i; j++)
      {
        cost+=i;
      }
      
    }
    cost=cost+(n-day)*(l+1);
    printf("%d\n",cost);
    cost=0;
    l=0;
    day=0;
  }

}

