#include <stdio.h>
#include <string.h>
int gitaddflag(int n);
int main() {
 int x ;
 scanf("%d",&x);
printf("%d",gitaddflag(x));
 

}
//n符合要求,返回1
int gitaddflag(int n)
{
    int add=0;
    int flag=0;
    for (; n!=0; n/=10)
    {
        add+=n%10;
    }
        flag=add;
    
    if(flag/10!=0)
    {
    flag=gitaddflag(add);
    }
   return flag;
}

