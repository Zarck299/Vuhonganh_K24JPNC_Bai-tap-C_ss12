#include <stdio.h>
#include <stdlib.h>

void createMatrix(int rows, int cols, int matrix[][100]) {
    printf("Nhap gia tri cho ma tran %d x %d:\n", rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Nhap gia tri tai vi tri [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
}

void printMatrix(int rows, int cols, int matrix[][100]) {
    printf("Ma tran %d x %d la:\n", rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int rows, cols;

    printf("Nhap so hang: ");
    scanf("%d", &rows);
    printf("Nhap so cot: ");
    scanf("%d", &cols);

    if (rows <= 0 || cols <= 0) {
        printf("So hang va so cot phai lon hon 0.\n");
        return 1;
    }

    int matrix[100][100];
    createMatrix(rows, cols, matrix);
    printMatrix(rows, cols, matrix);

    return 0;
}

