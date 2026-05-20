#include <stdio.h>
//寻址学习
int main(void) {
    int ptices=0,change=100-ptices;
  //  while (1)
  //  {
        /* code */
    
        printf("请输入两个整数：");
    
        scanf("%d%d", &ptices, &change);
        printf("你输入的整数是：");
        printf("%d,%d\n", ptices, change);
        double f;
        printf("请输入一个浮点数：");
        scanf("%lf",&f);
        printf("你输入的浮点数是：");
        int number=0;
        printf("你要保留的小数位数是：");
        scanf("%d", &number);
        printf("保留%d位小数的结果是：", number);
        printf("%.*lf\n", number, f);
        char ch;
        printf("请输入一个字母：");
        scanf(" %c",&ch);
        printf("你输入的字母是：");
        printf("%c\n",ch);
  //  }
   
    return 0;
}
