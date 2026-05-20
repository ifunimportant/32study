#include <stdio.h>

int main() {
  
  int n=0,cal,add=0;
  while(scanf("%d",&n)!=EOF)//在牛客上,输入结束后,会自动返回eof,
  {int i=0;
    while(n)
    {
      add=n%10;
      cal=cal*10+add;
      n=n/10;
      i++;
    }
    printf("%04d",cal);
  }

    return 0;
}

