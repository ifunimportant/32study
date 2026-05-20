#include <stdio.h>
#define card 20;
int main() {
  int x,y,x1,y1;
  scanf("%d%d",&x,&y);
  scanf("%d%d",&x1,&y1);
  if(x==x1)
    if(y1>y)
    printf("u");
    else
    printf("d");
  else
    if(x1>x)
    printf("r");
    else
    printf("l");
}