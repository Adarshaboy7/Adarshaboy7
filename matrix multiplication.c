
#include <stdio.h>
#include <stdlib.h>
void main() {
int rowsA, colsA, rowsB, colsB;
// Input dimensions of matrix A
printf("Enter the number of rows for matrix A: ");
scanf("%d", &rowsA);
printf("Enter the number of columns for matrix A: ");
scanf("%d", &colsA);
// Input dimensions of matrix B
printf("Enter the number of rows for matrix B: ");
scanf("%d", &rowsB);
printf("Enter the number of columns for matrix B: ");
scanf("%d", &colsB);
if (colsA != rowsB) {
printf("Matrix multiplication is not possible. Number of columns in A must be equal to the number of rows in B.\n");
exit(0);
}
int matrixA[rowsA][colsA];
int matrixB[rowsB][colsB];
int resultMatrix[rowsA][colsB];
// Input matrix A
printf("Enter the elements of matrix A:\n");
for (int i = 0; i < rowsA; i++) {
for (int j = 0; j < colsA; j++) {
scanf("%d", &matrixA[i][j]);
}
}

// Input matrix B
printf("Enter the elements of matrix B:\n");
for (int i = 0; i < rowsB; i++) {
for (int j = 0; j < colsB; j++) {
scanf("%d", &matrixB[i][j]);
}
}
// Initialize resultMatrix with zeros
for (int i = 0; i < rowsA; i++) {
for (int j = 0; j < colsB; j++) {
resultMatrix[i][j] = 0;
}
}
// Perform matrix multiplication
for (int i = 0; i < rowsA; i++) {
for (int j = 0; j < colsB; j++) {
for (int k = 0; k < colsA; k++) {
resultMatrix[i][j] += matrixA[i][k] * matrixB[k][j];
}
}
}
// Display the resultMatrix
printf("Result of matrix multiplication:\n");
for (int i = 0; i < rowsA; i++) {
for (int j = 0; j < colsB; j++) {
printf("%d ", resultMatrix[i][j]);
}
printf("\n");
}
}
