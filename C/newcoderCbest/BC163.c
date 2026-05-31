#include <stdio.h>
#include <string.h>
#include <math.h>
//实现
/*
*/

typedef long long ll;
typedef struct 
{
  ll i;
  ll j;
}ret,*pret;
ret getret(ll x);


int main() {
   int ch;
   char a1,a2,a3,a4;
   scanf("%d %c %c %c %c",&ch,&a1,&a2,&a3,&a4);
   char str[ch+1];
   scanf("%s",str);
  for(int i=0;i<ch;i++)
  {
    if(str[i]==a1)
        str[i]=a2;
    if(str[i]==a3)
        str[i]=a4;    
  }

  printf("%s",str);
  
}





