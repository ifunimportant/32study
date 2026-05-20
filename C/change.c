#include <stdio.h>
//瀛︿範scanf鍑芥暟
int main(void) {
int ptices=0,change=100-ptices;
    printf("请输入价格n");
    scanf("%d", &ptices);
    printf("您输入的价格是：%d\n", ptices);
    printf("找零是：%d\n", change);
    return 0;
}