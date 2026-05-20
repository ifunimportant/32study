#include <stdio.h>


int main() {
 
  int n;
  scanf("%d",&n);
  int sum=0;
  char str[10005];//留有足够的空间读取10的10000次幂的一串数值,longlong类型存不下.
  for (int i = 0; i < n; i++)
  {
    scanf("%s",str);
    int len=0;
    while(str[len])
    len++;//找出\n的位置
    len--;//回到末尾
    sum+=(int)(str[len]-'0');//把char类型传化为int类型
  }
  sum=sum%2;
  printf("%d",sum);

}

