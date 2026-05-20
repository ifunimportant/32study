#include <stdio.h>

int main() {
  int x;
  scanf("%d",&x);
  if(x%2==0)
  printf("2");
  if (x%3==0)
  printf("3");
  if (x%7==0)
  printf("7");
  if(x%2!=0&&x%3!=0&&x%7!=0)
  printf("n");
  
}

// #include <stdio.h>
// int main(){
//     int a[3] = {2, 3, 7},n, i = 0;
//     int flag = 0;
//     scanf("%d", &n);
//     while(i != 3){
//         if(n % a[i] == 0){
//             printf("%d ", a[i]);
//             flag = 1;
//         }i++;
//     }
//     if(!flag)
//         printf("n");
//     return 0;
// }