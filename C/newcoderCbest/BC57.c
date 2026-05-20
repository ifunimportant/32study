#include <stdio.h>

int main() {
  int x,mon;
  scanf("%d",&x);
  mon=x%100;
  switch (mon)
  {
  case 3:
  case 4:
  case 5:
    printf("spring");
    break;
  case 6:
  case 7:
  case 8:
    printf("summer");
    break;
  case 9:
  case 10:
  case 11:
    printf("autumn");
    break;
  default:
    printf("winter");
    break;
  }
  
}
