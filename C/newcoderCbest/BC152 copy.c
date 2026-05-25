#include <stdio.h>
#include <string.h>
int gitaddflag(int n);
int main() {
 int x ;
 scanf("%d",&x);
 int add=0;
 do{
    add=0;
for (int i=x; i!=0; i/=10)
    {
        add+=i%10;
    }
    x=add;

}while(add/10!=0);
printf("%d",add);
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
    if (add/10==0)
    {
        flag=add;
    }
    else
    flag=gitaddflag(add);
    
   return flag;
}

