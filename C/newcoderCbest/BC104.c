#include <stdio.h>
int main() {
  int n=0;
  
  while(scanf("%d",&n)!=EOF)//在牛客上,输入结束后,会自动返回eof,
  { for(int j=n;j>0;j--)
    { 
      for(int i=n-j;i>0;i--)
      {
        printf(" ");
      }

      for (int i = 1; i <=j; i++)
      {
        printf("* ");
      }
      printf("\n");
    }
  }
}





