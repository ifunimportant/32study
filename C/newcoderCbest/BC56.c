#include <stdio.h>

int main() {
  char ch;
  scanf("%c",&ch);
  if(ch>='A'&&ch<='Z'||ch>='a'&&ch<='\z')
      printf("YES");
  else
      printf("NO");
//   while(scanf("%c",&ch))
//     if((ch>='A'&&ch<='Z')||(ch>='a'&&ch<='z'))
//         printf("YES\n");
//     else if (ch==' '||ch=='\n')//char类型可以读取空格\0,以及回车\n

//     continue;
//     else
//         printf("NO\n");
}
