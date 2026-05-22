#include <stdio.h>

int main() {
    int n,flag = 0;
    double result;
    scanf("%d", &n);
    int num[n][n];

    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            scanf("%d",&num[i][j]);
        }   
    }

    for (int i=1; i<n; i++) {
        for (int j=0; j<i; j++) {
            if((num[i][j])!=0)
            flag=1;
        }   
    }
  if(flag==1)
  printf("NO");
  else
  printf("YES");
    return 0;
}
 
