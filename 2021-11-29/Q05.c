#include <stdio.h>

void matrixInput1(int *rowsPtr, int *colsPtr, int *matPtr);
void matrixPrint(int *rowsPtr, int *colsPtr, int *matPtr);
void matrixAdd(int *rowsPtr, int *colsPtr, int *mat1Ptr, int *mat2Ptr, int *reMatPtr);

void matrixInput1(int *rowsPtr, int *colsPtr, int *matPtr){
    int i, j;
    for (i = 0; i < *rowsPtr; i++){
        for (j = 0; j < *colsPtr; j++){
            scanf("%d", matPtr+(i * *colsPtr)+j);
        }
    }
}

void matrixPrint(int *rowsPtr, int *colsPtr, int *matPtr){
    int i, j;
    for (i = 0; i < *rowsPtr; i++){
        for (j = 0; j < *colsPtr; j++){
            printf("%3d\t", *(matPtr+(i * *colsPtr)+j));
        }
        puts("");
    }
}

void matrixAdd(int *rowsPtr, int *colsPtr, int *mat1Ptr, int *mat2Ptr, int *reMatPtr){
    int i, j;
    for (i = 0; i < *rowsPtr; i++){
        for (j = 0; j < *colsPtr; j++){
            *(reMatPtr+(i * *colsPtr)+j) = *(mat1Ptr+(i * *colsPtr)+j) + *(mat2Ptr+(i * *colsPtr)+j);
        }
    }
}

int main(){
    int rows, cols;
    scanf("%d%d", &rows, &cols);
    int mat1[rows][cols], mat2[rows][cols], res[rows][cols];

    matrixInput1(&rows, &cols, &mat1[0][0]);
    matrixInput1(&rows, &cols, &mat2[0][0]);
    matrixAdd(&rows, &cols, &mat1[0][0], &mat2[0][0], &res[0][0]);
    matrixPrint(&rows, &cols, &res[0][0]);
}
