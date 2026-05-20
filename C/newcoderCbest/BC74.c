#include <stdio.h>
int getyear(int year);
int main() {
 int year,mon,day;
 while(scanf("%d %d",&year,&mon)!=EOF)
 {
    switch (mon)
    {
    case 2:
     day=28+getyear(year);
           break;
    case 4:
    case 6:
    case 9:
    case 11:
     day=30;
      break;
    
    default:
    day=31;
      break;
    }
    printf("%d\n",day);
 }

}

int getyear(int year)
{
  int i=0;
if(year%400==0||(year%4==0&&year%100!=0))
  i=1;
  return i;
}

