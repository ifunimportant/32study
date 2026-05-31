#include <stdio.h>
#include <string.h>
#include <math.h>
//实现
/*
*/
#define n 1000
typedef long long ll;
typedef struct 
{
  ll i;
  ll j;
}ret,*pret;
ret getret(ll x);


int main() {

  int *p=(int *)malloc((n+1)*sizeof(int));
  for(int i=0;i<n;i++)
  {
    p[i]=i;
  }
  for (int i = 2; i <= sqrt(n+1); i++)
  {
       for(int j=i+1;j<n+1;j++)
   {
      if(j%i==0)
      p[j]=0;
   }
  }
  int x;
  scanf("%d",&x);
  for (int i = 0; i < x; i++)
  {
    int prime;
    scanf("%d",&prime);
    if(p[prime]!=0)
    printf("true\n");
    else
    printf("false\n");
  }
  free(p);
}





