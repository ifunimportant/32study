#include <stdio.h>
const int isbnbit[]={0,2,3,4,6,7,8,9,10,12};//0-9
char isbn[13];int cal=0;
int main() {
for (int i = 0; i < 13; i++)
{
  scanf("%c",&isbn[i]);
}
for ( int i = 0; i < 9; i++)
{
  cal+=(isbn[isbnbit[i]]-'0')*(i+1);
}
cal=cal%11;
//if(cal==10)
// cal='x'-'0';
  if(cal==10&&isbn[isbnbit[9]]=='x')
    printf("Right");
  else if((cal+'0')==isbn[isbnbit[9]])
    printf("Right");
  else{
    isbn[isbnbit[9]]=cal+'0';
    for (int i = 0; i < 13; i++)
    {
      printf("%c",isbn[i]);
    }
}

}
