#include <stdio.h>

//输入一个整体年月日,分开输出
//input a complete date and output separately
int main() {
    int i;
    
    
    scanf("%d", &i);
    int year = i / 10000;
    int month = (i % 10000) / 100; 
    int date = i % 100;
    printf("year=%.4d\nmonth=%.2d\ndate=%.2d", year, month, date);
    

    return 0;
}
