#include <stdio.h>
int main() {
  int flag=0,l[3],comparison=0;
for (int i = 0; i < 3; i++)//接受数据
{
  scanf("%d",&l[i]);
  if(l[i]>comparison)
  comparison=l[i];
  else if(l[i]==comparison)
  flag++;
  else if(i>0){
  l[i-1]=l[i];
  l[i]=comparison;
  if(i==2&&flag==0&&l[0]==l[1])//特殊情况,第一个数与第三个数相同,且第二个数最大
  flag++;
  }
}
if((l[0]+l[1])>l[2])
  if(flag==2)
    printf("Equilateral triangle!");
  else if(flag==1)
    printf("Isosceles triangle!");
  else
    printf("Ordinary triangle!");
else
  printf("Not a triangle!");
}
