#include <stdio.h>
#define ROW 3
#define COL 3

void matrixInput(int mat[][COL]);
void matrixPrint(int mat[][COL]);
void matrixMultiply(int mat1[][COL], int mat2[][COL], int res[][COL]);

int main(){
    int mat1[ROW][COL];
    int mat2[ROW][COL];
    int product[ROW][COL];

    matrixInput(mat1);
    matrixInput(mat2);
    matrixMultiply(mat1, mat2, product);
    matrixPrint(product);
}

void matrixInput(int mat[][COL]){
    int row, col;
    for (row = 0; row < ROW; row++){
        for (col = 0; col < COL; col++){
            scanf("%d", (*(mat + row) + col));
        }
    }
}

void matrixPrint(int mat[][COL]){
    int row, col;
    for (row = 0; row < ROW; row++){
        for (col = 0; col < COL; col++){
            printf("%4d\t", *(*(mat + row) + col));
        }
        printf("\n");
    }
}

void matrixMultiply(int mat1[][COL], int mat2[][COL], int res[][COL]){
    int row, col, i;
    int sum;
    for (row = 0; row < ROW; row++){
        for (col = 0; col < COL; col++){
            sum = 0;
            for (i = 0; i < COL; i++){
                sum += (*(*(mat1 + row) + i)) * (*(*(mat2 + i) + col));
            }
            *(*(res + row) + col) = sum;
        }
    }
}