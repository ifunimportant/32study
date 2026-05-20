#include <stdio.h>
int main() {
  int n=0;
  while(scanf("%d",&n)!=EOF)//在牛客上,输入结束后,会自动返回eof,
  { 
  
     for(int j=0;j<3*n;j++)//行
    { 
      for(int i=3*n-j;i>1;i--)//每行空白数量;
      {
        
        printf(" ");
       
      }
    for(int i=0;i<=(j/3);i++)
    {
      for(int k=0;k<3;k++)
      {
        if(k<=j%3)
        printf("* ");
        else
        printf("  ");
      }
    }
      printf("\n");

    } 

    //输出树干
    for(int j=0;j<n;j++)
    {
      for(int i=1;i<3*n;i++)
      {
        printf(" ");
      }
        printf("*\n");
    }

  }
}