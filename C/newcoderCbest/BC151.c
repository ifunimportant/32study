#include <stdio.h>
#include <string.h>
int gitaddflag(int n);
int main() {
 int x,y;
 int flag=0;
 scanf("%d %d",&x,&y);
 for (int i = x; i <=y; i++)
 {
    flag+=gitaddflag(i);
 }
 printf("%d",flag);
 
}
//n符合要求,返回1
int gitaddflag(int n)
{
    int add;
    int flag=0;
    for (; n!=0; n/=10)
    {
        add+=n%10;
    }
    if (add%5==0)
    {
        flag=1;
    }
    
   return flag;
}

