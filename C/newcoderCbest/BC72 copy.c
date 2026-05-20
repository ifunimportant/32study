#include <stdio.h>
int main() {
int y,y1,m,m1,d,d1;
scanf("%d%d%d",&y,&m,&d);
scanf("%d%d%d",&y1,&m1,&d1);
if(y1>y||(y1==y&&m1>m)||(y1==y&&m1==m&&d1>=d))
  printf("yes");
else
  printf("no");
}
