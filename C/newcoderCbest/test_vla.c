#include <stdio.h>
int main() {
    int n = 5, m = 5;
    char a[n][m]; // VLA 声明
    printf("VLA is supported!\n");
    return 0;
}