#include <stdio.h>
int main() {
  int n=0;
  while(scanf("%d",&n)!=EOF)//在牛客上,输入结束后,会自动返回eof,
  { 
     for(int j=1;j<=n;j++)//行
    { 
      for(int i=1;i<=j;i++)
      {
        if(j==1||j==n||i==1||i==j)
        printf("* ");
        else
        printf("  ");
      }
      printf("\n");

    } 

  }
}