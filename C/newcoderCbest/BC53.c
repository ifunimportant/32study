#include <stdio.h>

int main() {
  char a;
  while(scanf("%c",&a)!=EOF){
    
    if(a=='a'||a=='A'||a=='e'||a=='E'||a=='i'||a=='I'||a=='o'||a=='O'||a=='u'||a=='U')
      printf("Vowel\n");
    else if (a=='\n')
      continue;//当输入是整形时,空格键只是当做分割整形数的分割命令,不读入]\n,但是char类型直接读入\n符号
    else
      printf("Consonant\n");
  }
}
