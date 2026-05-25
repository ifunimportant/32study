#include <stdio.h>
#include <string.h>
int main() {
 int a,b,add=0;
 scanf("%d %d",&a,&b);
 int num[b+1];
 for (int i = 0; i < b+1; i++)
 {
   num[i]=i;
 }
 for(int i=2;i<b+1;i++)
 {
   for(int j=i+1;j<b+1;j++)
   {
      if(j%i==0)
      num[j]=0;
   }

 

}

 for (int i = 2; i <b+1; i++)
 {
   printf("%d\n",num[i]);
 }
   add=0;
for (int i = a; i <b+1; i++)
 {
    add+=num[i];
 }
  
 
 printf("%d",add);

}

