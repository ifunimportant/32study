#include <stdio.h>
//2^n
//
int main() {

  int n;
  scanf("%d",&n);
  n=2<<(n-1);
  printf("%d",n);
}

