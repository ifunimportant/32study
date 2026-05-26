#include <stdio.h>
int main() {
    int n = 0, m = 0;
    char a[6]={1,0,2,3,4,'\0'};

    while (a[n])
    {
       m++;
       n++;
    }
    printf("%d",m);
    return 0;
}