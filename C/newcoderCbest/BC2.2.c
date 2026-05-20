#include <stdio.h>
//输出plane
int main() {

    int plant[3][12] = {
        {0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0},
        {1,1,1,1,1,1,1,1,1,1,1,1},
        {0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0},
    };
    for (int i = 0; i < 3; i++) {
        int z=2;
        while (z){
            for (int j = 0; j < 12; j++) {
             
                if (plant[i][j] == 1) {
                    printf("*");
                } else {
                    printf(" ");
                }
            
            
            }
            printf("\n");
                z--;
        }
    }
    
    return 0;
}