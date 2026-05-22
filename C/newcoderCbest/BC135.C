#include <stdio.h>

int main() {
    int n, m, flag = 0;
    double result;
    scanf("%d %d", &n,&m);
    int num[n][m];
    int add[n][m];
    // for (int i=0; i<n; i++) 
    // {
    //     for (int j=0; j<n; j++) {
    //     num[i][j]=0;
    //     }
    // }
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            scanf("%d",&num[i][j]);
        }   
    }
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            scanf("%d",&add[i][j]);
        }   
    }
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            if((num[i][j])==(add[i][j]))
            flag++;
        }   
    }
  result =flag*100.00/(n*m);
  printf("%.2lf",result);
    return 0;
}
 
