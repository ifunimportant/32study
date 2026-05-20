#include <stdio.h>

//大小写转换
//input a complete date and output separately
int main() {
   const int diff='a'-'A';
    char ch;
    while (1)
    {
      ch=getchar();
        if(ch=='\n') 
         continue;
        else if (ch==EOF)
         break;
        else
        printf("%c",ch-diff);
    }
    return 0;
}

