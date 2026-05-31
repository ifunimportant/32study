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
    int x=0;
    ll n;
    ret j;

    scanf("%d",&x);
    for (int i = 0; i < x; i++)
    {
      scanf("%lld",&n);
      j=getret(n);
      printf("%lld %lld\n",j.i,j.j);
    }
    
 
  
    
}

ret getret(ll x)
{
  int rnt=0;
  while(x)
  {
    if(x%2==1)
    {
      rnt++;
    }
    x=x/2;
  }

  ret l;
  l.i=rnt;
  ll j=1;
  l.j=(j<<rnt)-1;
  return l;
}



