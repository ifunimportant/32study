#include <stdio.h>
int outnumber(int n,int m,int x, int y,char sh[n][m]);
int main() {
    int n,m;
    char ch;
    scanf("%d%d", &n,&m);
    char num[n][m];

    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
        scanf("%c",&ch);
        if(ch=='\n')
        {
            j--;
            continue;
        }
        else
            num[i][j]=ch;
        }   
    }

    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            if(num[i][j]=='*')
            printf("*");
            else
            {printf("%d",outnumber(n,m,i,j,num));}
           
        }  
         printf("\n");
    }
 
}

int outnumber(int n,int m,int x, int y,char sh[n][m])
{
    int flag =0;
    if(sh[x][y]=='*')
    flag= 0;
    if(sh[x][y]=='.')
    {
        int x1,x2,y1,y2;
        x1=x-1<0?0:x-1;
        x2=x+1>n-1?n-1:x+1;
        y1=y-1<0?0:y-1;
        y2=y+1>m-1?m-1:y+1;
        for(int i=x1;i<=x2;i++)
        for(int j=y1;j<=y2;j++)
        
            if(sh[i][j]=='*')
                flag++;
        
    }
    return flag;
}
