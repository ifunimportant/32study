#include <stdio.h>
#include <string.h>
#include <math.h>
typedef long long ll;
//实现
/*
*/


ll getnum(int n);

int main() {
   char ch[100];
   fgets(ch,100,stdin);
int add=0;
for (int i = 0; ch[i]!='\0'; i++)
{
   add++;
}
 printf("%d",add);
}

