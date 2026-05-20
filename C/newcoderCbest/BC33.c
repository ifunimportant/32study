#include <stdio.h>
//everge max min
//
int main() {
  const int exchange = 3.156e7;
  int n;
  scanf("%d\n",&n);
  float scores[n];
  scanf("%f",&scores[0]);
  float sum,max,min;
  sum=max=min=scores[0];
  for (int i = 1; i < n; i++)
  {
    scanf("%f",&scores[i]);
    sum+=scores[i];
    if(max<scores[i])
    max=scores[i];
    if(min>scores[i])
    min=scores[i];
  }
  sum=sum/n;
printf("%.2f %.2f %.2f",max,min,sum);

}

