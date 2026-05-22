#include <stdio.h>
void delnumber(int*z,int num[],int*n,int*tag);
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
    delnumber(&z,num,&n,&tag);
      // tag=num[z];
      // for(int i=z+1;i<n;i++)
      // {
      //   if(num[i]==tag)
      //   {
      //     n--;
      //     int j=i;
      //     while(j<n)
      //     {
      //       num[j]=num[j+1];
      //       j++;
      //     }
      //   i--;
      //   }
      
      // }
  }
   for (int i = 0; i < n; i++)
   {
    printf("%d ",num[i]);
   }
   
}

void delnumber(int*z,int num[],int*n,int*tag)
{ 
  for(int i=*z+1;i<*n;i++)
  {
    if(num[i]==*tag)
    {
      *n--;
      int j=i;
      while(j<*n)
      {
        num[j]=num[j+1];
        j++;
      }
    i--;
    }
  
  }
}


 