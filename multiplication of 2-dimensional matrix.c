#include <stdio.h>
void main() {
// Declare variables
int matrix1[3][3], matrix2[3][3], resultMatrix[3][3];
int i, j, k;
// Input elements for the first matrix
printf("Enter elements for the first 3x3 matrix:\n");
for (i = 0; i < 3; i++) {
for (j = 0; j < 3; j++) {
printf("Enter element at position (%d, %d): ", i + 1, j + 1);
scanf("%d", &matrix1[i][j]);
}
}
// Input elements for the second matrix
printf("\nEnter elements for the second 3x3 matrix:\n");
for (i = 0; i < 3; i++) {
for (j = 0; j < 3; j++) {
printf("Enter element at position (%d, %d): ", i + 1, j + 1);
scanf("%d", &matrix2[i][j]);
}
}
// Perform multiplication of matrices
printf("\nMultiplication of the two matrices is:\n");
for (i = 0; i < 3; i++) {
for (j = 0; j < 3; j++) {
resultMatrix[i][j] = 0;
for (k = 0; k < 3; k++) {
resultMatrix[i][j] += matrix1[i][k] * matrix2[k][j];
}
printf("%d\t", resultMatrix[i][j]);
}
printf("\n");
}
}
