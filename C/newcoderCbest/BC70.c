#include <stdio.h>
#define card 20;
int main() {
  int t;
  while(scanf("%d",&t)!=EOF)
  {
    if(t==0)
      printf("0.5");
    else if (t>0)
      printf("1");
    else
      printf("0");
    
  }
}
