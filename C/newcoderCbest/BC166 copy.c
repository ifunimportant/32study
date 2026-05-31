#include <stdio.h>
#include <string.h>
#include <math.h>
//实现
/*
*/
int add=0;
int gettimes(int n);
int main() {
    int n;
    while(1)
    {
      add=0;
    scanf("%d", &n);
    printf("%d\n",gettimes(n));
    }
}

int gettimes(int n) {
    if (n == 1) {
        add++;
        return add;
    }
    if(n==0)
    {
      add++;
      return add;
    }
    gettimes(n - 1);
    gettimes(n - 2);
    return add;
}
