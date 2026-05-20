#include <stdio.h>
int main() {
  int n=0;
  while(scanf("%d",&n)!=EOF)//在牛客上,输入结束后,会自动返回eof,
  { 
     for(int j=1;j<=n;j++)
    { 
      for(int i=1;i<=n;i++)
      {
        if(j==i||j==(n-i+1))
        printf("*");
        else
        printf(" ");
      }
      printf("\n");

    } 

  }
}