#include <stdio.h>

int main() {
  int score[7],min,max;
  t1:
  double cal=0;
  for(int i=0;i<7;i++)
  {
    scanf("%d",&score[i]);
    cal+=score[i];
    if(i==0)
    {
      min=max=score[0];
    }
    else
    {
      if(min>score[i])
      min=score[i];
      if(max<score[i])
      max=score[i];
    }

  }

  cal=(cal-min-max)/5.0;
  printf("%.2lf",cal);
goto t1;
    return 0;
}

