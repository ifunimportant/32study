#include <stdio.h>
int rounded_integer(float a);
//输入一个integer,再输出
//input an integer and output
int main() {
    int i;
    float a,b,c;
    scanf("%i;%f,%f,%f", &i, &a, &b, &c);
    a =(float)rounded_integer(a)/100;
    b =(float)rounded_integer(b)/100;
    c =(float)rounded_integer(c)/100;
    printf("The each subject score of No. %d is %3.2f, %3.2f, %3.2f.", i, a, b, c);
    return 0;
}


int rounded_integer(float a) {
    a*=100;
    if(a<0){
        return (int)(a - 0.5);
    }
    else    
        return (int)(a + 0.5);
}