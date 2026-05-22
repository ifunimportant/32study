#include <stdio.h>

int main() {
    int n, x = 0, flag = 0, i = 0, j = 0;
    scanf("%d", &n);
    int num[n][n];
    for (int i=0; i<n; i++) 
    {
        for (int j=0; j<n; j++) {
        num[i][j]=0;
        }
    }

    for (x = 1; x <= n * n; x++) {
        switch (flag % 4) {
            case 0:
                if (j < n && num[i][j] == 0) {
                    num[i][j] = x;
                    j++;
                } else {
                    flag++;
                    x--;
                    j--;
                    i++;
                }
                break;
            case 1:
                if (i < n && num[i][j] == 0) {
                    num[i][j] = x;
                    i++;
                } else {
                    flag++;
                    i--;
                    x--;
                    j--;
                }
                break;
            case 2:
                if ( j >= 0 && num[i][j] == 0) {
                    num[i][j] = x;
                    j--;
                } else {
                    flag++;
                    j++;
                    x--;
                    i--;
                }
                break;
            case 3:
                if(i>=0&&num[i][j]==0)
                {
                    num[i][j]=x;
                    i--;
                }
                else{
                    flag++;
                    i++;
                    x--;
                    j++;
                }
                break;
        }
    }
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            printf("%d ",num[i][j]);
        }
        printf("\n");
    
    }
    return 0;
}

