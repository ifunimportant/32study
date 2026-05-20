#include <stdio.h>
//输入一个char,再输出
//input a char and output
int main() {
    char a;
    scanf("%c", &a);

    for (int i = 0; i<5;i++){

        for (int j = 0; j<5;j++){
            if ((i==0||i==4)&&j==2||(i==1||i==3)&&j>0&&j<4||i==2)
            {
                 printf("%c", a);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");

    }
    return 0;
}