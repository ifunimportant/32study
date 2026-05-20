#include <stdio.h>
//age exchange seconds
//
int main() {
  const int exchange = 3.156e7;
  int age;
  long seconds;
  scanf("%d",&age);
  seconds=exchange*age;
  printf("%ld",seconds);
}

