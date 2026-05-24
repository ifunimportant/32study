#include <stdio.h>

// 变长数组形参
void print_matrix(int rows, int cols, int mat[rows][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++)
            printf("%3d ", mat[i][j]);
        putchar('\n');
    }
}

int main() {
    int a[2][3] = {{1,2,3}, {4,5,6}};
    print_matrix(2, 3, a);
    return 0;
}