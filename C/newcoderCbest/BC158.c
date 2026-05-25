#include <stdio.h>
#include <string.h>
#include <math.h>
//实现
/*
首先需要有一个求回文的函数
int getch(char ch[]);
需要定义两个数组,一个存储输入的数,一个存储回文数，并且是用字符串的形式存储
char ch[20],ch1[20];
运算函数，两个数按照输入的进位要求，
strcmp(ch,ch1)函数比较两个字符串是否相等，如果相等则是回文数,返回值为0，如果不相等则不是回文数，返回值不为0

*/
void getch(char ch[],char ch1[]);
void chartoint(char ch[]);
void inttochar(char ch[]);
//运算函数，两个数按照输入的进位要求，先从字符串转换为整数，然后进行加法运算，最后再转换回字符串
void compute(char ch[],char ch1[],int n);
int main() {
    int n,time=0;
    char ch[20]={0},ch1[20]={0};
    scanf("%d",&n);//输入进制
    scanf("%s",ch);
    getch(ch,ch1);
    while(strcmp(ch,ch1)!=0)
    {
      time++;
      compute(ch,ch1,n);
       getch(ch,ch1);
      if(time>30)
      {
        printf("Impossible!");
        return 0;
      }
    }
    printf("STEP=%d",time);

}


void getch(char ch[],char ch1[])
{
  int i=0;
  while(ch[i])
  {
    ch1[i]=ch[i];
    i++;
  }
  ch1[i]='\0';//i是字符串的长度
  for(int j=0;j<i/2;j++)//i/2是字符串长度的一半，j是从0开始的，所以是i-1-j
  {
    char t=ch1[j];//交换次数为字符串长度的一半
    ch1[j]=ch1[i-1-j];
    ch1[i-1-j]=t;
  }
  printf("%s\n",ch1);
  printf("%s\n",ch);
}

void chartoint(char ch[])
{
  int i=0;
  while(ch[i])
  {
    if(ch[i]>='0'&&ch[i]<='9')
    ch[i]=ch[i]-'0';//将字符转换为整数
    else if (ch[i]>='A'&&ch[i]<='F')
      {
        ch[i]=ch[i]-'A'+10;//将字符转换为整数
      }
    else if (ch[i]>='a'&&ch[i]<='f')
      {
        ch[i]=ch[i]-'a'+10;//将字符转换为整数
      }
    i++;
  }
  ch[i]=0;//字符串结束标志
}

void inttochar(char ch[])
{
  int i=0;
  while(ch[i])
  {
    if(ch[i]>=0&&ch[i]<=9)
    ch[i]=ch[i]+'0';//将整数转换为字符
    else if (ch[i]>=10&&ch[i]<=15)
      {
        ch[i]=ch[i]-10+'A';//将整数转换为字符
      }
    i++;
  }
  ch[i]='\0';//字符串结束标志
}

void compute(char ch[],char ch1[],int n)
{
  chartoint(ch);
  chartoint(ch1);
  for(int i=0;i<20;i++)
  {
    ch[i]=ch[i]+ch1[i];
    if(ch[i]>n-1)
    {
      ch[i]=ch[i]%n;
      ch[i+1]++;
    }
  }
  inttochar(ch);
}