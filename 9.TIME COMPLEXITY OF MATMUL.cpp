#include <stdio.h>
void multiply_matrices(int mat1[][3], int mat2[][2], int result[][2], int rows1, int cols1, int cols2) {
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < cols1; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}
void print_matrix(int mat[][2], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}
int main() {
    int mat1[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int mat2[3][2] = {{7, 8}, {9, 10}, {11, 12}};
    int result[2][2];

    int rows1 = 2;
    int cols1 = 3;
    int cols2 = 2;

    multiply_matrices(mat1, mat2, result, rows1, cols1, cols2);

    printf("Resultant matrix:\n");
    print_matrix(result, rows1, cols2);

    return 0;
}

