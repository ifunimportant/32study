#include <stdio.h>
#define card 20;
int main() {
  int x;
  while(scanf("%d",&x)!=EOF)
  {
    switch (x)
    {
    case 200:
      printf("OK");
      break;
    case 202:
      printf("Accepted");
      break;
    case 400:
      printf("Bad Request");
      break;
    case 403:
      printf("Forbidden");
      break;
    case 404:
      printf("Not Found");
      break;
    case 500:
      printf("Internal Server Error");
      break;
    case 502:
      printf("Bad Gateway");
      break;
    default:
      break;
    }
  }
}
