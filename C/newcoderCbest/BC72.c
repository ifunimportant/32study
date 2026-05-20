#include <stdio.h>
int main() {
int y,y1,m,m1,d,d1,flag;
scanf("%d%d%d",&y,&m,&d);
scanf("%d%d%d",&y1,&m1,&d1);
if(y1<y)
  flag=0;
else if (y1>y)
  flag=1;
else//y1=y
  {
    if(m1<m)
      flag=0;
    else if (m1>m)
      flag=1;
    else//y1=y
    {
      if(m1<m)
        flag=0;
      else
        flag=1;

    }
  }

if(flag==0)
  printf("no");
else
  printf("yes");
}
