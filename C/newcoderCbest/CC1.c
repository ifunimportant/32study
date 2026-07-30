#include <stdio.h>
#include <string.h>
#include <math.h>
typedef long long ll;
//实现
/*
*/
#define num 31


ll getnum(int n);

int main() {
   char ch[num];
   fgets(ch,num,stdin);
int add=0;
for (int i = 0; ch[i]!='\0'; i++)
{
   add++;
}
 printf("%d",add);
}

