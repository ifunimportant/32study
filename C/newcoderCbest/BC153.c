#include <stdio.h>
#include <string.h>
int gitaddflag(int n,int x);
int main() {
 int a,b ,add=0;
 scanf("%d%d",&a,&b);

 for (int i = a; i <=b; i++)
 {
    add+=gitaddflag(i,2);
 }
 printf("%d",add);
 

}
//n符合要求,返回1
int gitaddflag(int n,int x)
{
    int add=0;
    for (int i=n; i!=0; i/=10)
    {
        if(x==i%10)
        add++;
    }
   return add;
}

