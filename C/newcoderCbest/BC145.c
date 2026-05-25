#include <stdio.h>
#include <string.h>
int chcmp(char user[],char right[]);
int main() {
    int flag=0;
    char user[100];
    char passwords[100];
    scanf ("%s %s",user,passwords);
    if(chcmp(user,"admin")==0)
    {
        if(chcmp(passwords,"admin")==0)
        flag=1;
    }
    if(flag==1)
    printf("Login Success!");
    else
    printf("Login Fail!");
}

int chcmp(char user[],char right[])
{
    int i;
   for ( i = 0; user[i]!='\0'&&right[i]!='\0'; i++)
   {
    if(user[i]!=right[i])
    return 1;
   }
   return !(user[i]=='\0'&&right[i]=='\0');
}

