#include <stdio.h>
int getnomber(int n);
int main() {
  int day=0,l=0;
  int n=0,cost=0;
  
  while(scanf("%d",&n)!=EOF)//在牛客上,输入结束后,会自动返回eof,
  {
    for (int i = 1; i <=n; i++)
    {
      if(i==getnomber(i))
      printf("%d\n",i);
    }
    
  }

}

int getnomber(int n)
{
  int i=0;
  while(n)
  {
    i=i*10+n%10;
    n/=10;
  }
  return i;
}

