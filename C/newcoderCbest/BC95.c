#include <stdio.h>

int main() {
  int i=0;
  int n=0;
  long long cal=0,cal2=0,add=0;//windows上,int 和long位数一样
  while(scanf("%d",&n)!=EOF)//在牛客上,输入结束后,会自动返回eof,
  {
    while(n)
    {
      add=n%6;
      cal=cal*10+add;//如果采用int,则当n=100000000时,cal=13531202544超出界限,有符号数int最大值21亿
      n=n/6;
       i++;
    }
    for (int j=0; j<i; j++) {
    
      add=cal%10;
      cal2=cal2*10+add;
      cal=cal/10;
    }
    printf("%lld\n",cal2);
    cal=cal2=i=0;
  }

    return 0;
}

