#include <stdio.h>

int main() {
  char ch;
  
//   scanf("%c",&ch);
//   if(ch>='A'&&ch<='Z'||ch>='a'&&ch<='\z')
//       printf("YES");
//   else
//       printf("NO");
  while(scanf("%c",&ch)!=EOF)
    if((ch>='A'&&ch<='Z')||(ch>='a'&&ch<='z'))
        printf("%c is an alphabet.\n",ch);
    else if (ch==' '||ch=='\n')//char类型可以读取空格\0,以及回车\n

    continue;
    else
        printf("%c is not an alphabet.\n",ch);
  
}
