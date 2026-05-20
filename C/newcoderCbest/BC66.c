#include <stdio.h>
#define card 20;
int main() {
  int distant;
  scanf("%d",&distant);
  int walktime,taxitime;
  walktime=distant/1;
  taxitime=distant%10==0?(distant/10+10):(distant/10+1+10);
  if(walktime<taxitime)
  printf("w");
  else
  printf("v");
}