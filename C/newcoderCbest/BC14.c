#include <stdio.h>

//输入一个整体年月日,分开输出
//input a complete date and output separately
void exchange(int *x, int *y);
int main() {
    int a,b;
    
    
    scanf("a=%d,b=%d", &a,&b);
    exchange(&a,&b);
    printf("a=%d,b=%d", a,b);

    

    return 0;
}


 void exchange(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}