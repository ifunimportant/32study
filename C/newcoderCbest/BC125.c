#include <stdio.h>
int main() 
{
  int n,flag=0,tag=0;
  scanf("%d",&n);
  int num[n];
  for(int i=0;i<n;i++)
  {
    scanf("%d",&num[i]);
  }
  for (int z=0;z<n;z++)
  {
      tag=num[z];
      for(int i=z+1;i<n;i++)
      {
        if(num[i]==tag)
        {
          n--;
          int j=i;
          while(j<n)
          {
            num[j]=num[j+1];
            j++;
          }
        i--;
        }
      
      }
  }
   for (int i = 0; i < n; i++)
   {
    printf("%d ",num[i]);
   }
   
}
 



 