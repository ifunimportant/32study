#include <stdio.h>


int main(void) {
  system("chcp 936");
    int ch ;
    for(ch=30;ch<=100;ch++)
    {
printf("ASCII码=%5d，字符=%3c,\t地址验证=%20p,对应十六进制=%x\n",ch,ch,ch,ch,ch);
    }


    printf("你好呀hello C\n");
    return 0;
}
