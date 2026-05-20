#include <stdio.h>
//输入一个char,再输出
//input a char and output
int main() {
    char a;
    scanf("%c", &a);

    for (int i = 0; i<3;i++){

        for (int j = 0; j<3;j++){
             printf("%c", a);        
        }
        printf("\n");
    }
    return 0;
}