#include <stdio.h>
#include <string.h>
int outnumber(int n,int m,int x, int y,char sh[n][m]);
int main() {
    int m=0;
    char ch[100];
    fgets(ch,100,stdin);
    // printf("%s\n",ch);
    // m=strlen(ch);
    // printf ("%d\n",m);
    
    // for (int i = 0; i <= m; i++)
    // {
    //     if(ch[i]=='0')
    //     printf("no");
    //     else
    //     printf ("%c\n",ch[i]);
    // }
     int i=0;
    while(ch[i]!='\0')
    {
    
        
        if(ch[i]!=' '&&ch[i]!='\n')
            m++;
        i++;
    }
    printf("%d",m);

 
}
