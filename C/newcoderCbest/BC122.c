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
  for(int i=0;i<n-2;i++)
  {
   if(num[i]<num[i+1])
   {
      for(int j=i+1;j<(n-1);j++)
      {
        if(num[j]>num[j+1])
        {
          flag =1;
          tag=1;
          break;
        }
        tag=1;

      }
   }
   else if (num[i]>num[i+1])
   {
      for(int j=i+1;j<(n-1);j++)
      {
        if(num[j]<num[j+1])
        {
          flag =1;
          tag=1;
          break;
        }
        tag=1;
      }
   }
   else 
   {
     if(i==n-3)
     tag=1;
     else
      continue;
   }  
   if(tag==1)
      break;
  }
  if(tag==1)
  if(flag==1)
  printf("unsorted");
  else
  printf("sorted");
  else
  printf("404");
}
 



 