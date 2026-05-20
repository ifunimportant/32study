#include <stdio.h>
//输入一个FLOAT,再输出四舍五入后的整数
//input a float and output the rounded integer
int main() {
    float a;
    scanf("%f", &a);
    if(a<0){
        printf("%d", (int)(a - 0.5));
    }
    else    
    printf("%d", (int)(a + 0.5));
    return 0;
}