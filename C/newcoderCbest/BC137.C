#include <stdio.h>

int main() {
    int n,m,flag = 0;
    double result;
    scanf("%d%d", &n,&m);
    int num[n][m];

    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            scanf("%d",&num[i][j]);
        }   
    }

    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            printf("%d ",num[i][j]);
           
        }  
         printf("\n");
    }
 
}
 
