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
        switch (flag % 2) {
            case 0:
                if (j < n && i>=0 && num[i][j] == 0) {
                    num[i][j] = x;
                    j++;
                    i--;
                } else if(j<n&&i<0){
                    flag++;
                    i++;
                    num[i][j] = x;
                    j--;
                    i++;
                }
                else if(i<0&&j>=n)
                {
                    flag++;
                    i++;
                    j--;
                    i++;
                    num[i][j] = x;
                    j--;
                    i++;
                }
                else if(i>=0&&j>=n)
                {
                    flag++;
                    i++;
                    j--;
                    i++;
                    num[i][j] = x;
                    j--;
                    i++;
                }


                break;
            case 1:
                if (i<n && j>=0) {
                    num[i][j] = x;
                    i++;
                    j--;
                } else if(j<0&&i<n){
                    flag++;
                    j++;
                    num[i][j] = x;
                    i--;
                    j++;
                }
                else if(j<0&&i>=n)
                { 
                    flag++;
                    j++;
                    i--;
                    j++;//纠正
                    num[i][j] = x;
                    i--;
                    j++;
                }
                else if(j>=0&&i>=n)
                {
                    flag++;
                    j++;
                    i--;
                    j++;//纠正
                    num[i][j] = x;
                    i--;
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

