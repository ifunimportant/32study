#include <stdio.h>
#include <string.h>
#include <math.h>

#define num 31




int main() {
   char ch[num];
   fgets(ch,num,stdin);
   int add=0;
   scanf("%d",&add);
   printf("%s",ch+add-1);
}

