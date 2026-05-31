#include <stdio.h>
#include <string.h>
#include <math.h>
//实现
/*
*/
int move( char a,char b,char c,int n,int flag);
typedef long long ll;
typedef struct 
{
  ll i;
  ll j;
}ret,*pret;
ret getret(ll x);
int add=0;

int main() {
  int i;
    while(scanf("%d",&i)!=EOF)
    {
      int j=move('a','b','c',i,1);
      printf("this times is over\nthe step is %d\n",j);
    }
}

int move( char a,char b,char c,int n,int flag)
{
  static int step=0;
  if(flag==1)
  {
  step=0;
  flag=0;
  }
  if(n==1)
  {
    step++;
    printf("step=%d,n=%d从%c传到%c\n",step,n,a,b);
    
  }
  else
  {
    move(a,c,b,n-1,flag);
    step++; 
    printf("step=%d,n=%d从%c传到%c\n",step,n,a,b); 
    move(c,b,a,n-1,flag);
  }
 
 
  return step;
}



