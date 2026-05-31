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
ret j;
ll n;
  scanf("%lld",&n);
  j=getret(n);
  //printf("here2");
  printf("%lld %lld",j.i,j.j);
}

ret getret(ll x)
{
  int rnt=0;
  while(x)
  {
 //   printf("here1");
    if(x%2==1)
    {
      rnt++;
    }
    x=x/2;
  }
//printf("here3");
  ret l;
  l.i=rnt;
  ll j=1;
  l.j=(j<<rnt)-1;
  return l;
}



