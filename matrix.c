#include <stdio.h>
// Function to read a matrix from the user
void readMatrix(int rows, int cols, int matrix[][cols]) {
printf("Enter the elements of the matrix:\n");
for (int i = 0; i < rows; ++i) {
for (int j = 0; j < cols; ++j) {
scanf("%d", &matrix[i][j]);
}
}
}
// Function to print a matrix
void printMatrix(int rows, int cols, int matrix[][cols]) {
printf("Matrix:\n");
for (int i = 0; i < rows; ++i) {

for (int j = 0; j < cols; ++j) {
printf("%d ", matrix[i][j]);
}
printf("\n");
}
}
// Function to add two matrices
void addMatrices(int rows, int cols, int matrix1[][cols], int matrix2[][cols], int result[][cols])
{
for (int i = 0; i < rows; ++i) {
for (int j = 0; j < cols; ++j) {
result[i][j] = matrix1[i][j] + matrix2[i][j];
}
}
}
// Function to subtract one matrix from another
void subtractMatrices(int rows, int cols, int matrix1[][cols], int matrix2[][cols], int
result[][cols]) {
for (int i = 0; i < rows; ++i) {
for (int j = 0; j < cols; ++j) {
result[i][j] = matrix1[i][j] - matrix2[i][j];
}
}
}
// Function to multiply two matrices
void multiplyMatrices(int rows1, int cols1, int matrix1[][cols1], int rows2, int cols2, int
matrix2[][cols2], int result[][cols2]) {
for (int i = 0; i < rows1; ++i) {
for (int j = 0; j < cols2; ++j) {
result[i][j] = 0;
for (int k = 0; k < cols1; ++k) {
result[i][j] += matrix1[i][k] * matrix2[k][j];
}
}

}
}
int main() {
int rows1, cols1, rows2, cols2;
// Input the dimensions of the first matrix
printf("Enter the dimensions of the first matrix (rows columns): ");
scanf("%d %d", &rows1, &cols1);
// Input the dimensions of the second matrix
printf("Enter the dimensions of the second matrix (rows columns): ");
scanf("%d %d", &rows2, &cols2);
// Check if matrix addition and subtraction are possible
if (rows1 != rows2 || cols1 != cols2) {
printf("Matrix addition and subtraction are not possible with the given dimensions.\n");
return 1; // Return an error code
}
// Check if matrix multiplication is possible
if (cols1 != rows2) {
printf("Matrix multiplication is not possible with the given dimensions.\n");
return 1; // Return an error code
}
int matrix1[rows1][cols1];
int matrix2[rows2][cols2];
int result[rows1][cols2];
// Read the elements of the first matrix
readMatrix(rows1, cols1, matrix1);
// Read the elements of the second matrix
readMatrix(rows2, cols2, matrix2);
// Print the first matrix
printMatrix(rows1, cols1, matrix1);
// Print the second matrix
printMatrix(rows2, cols2, matrix2);
// Perform matrix addition
addMatrices(rows1, cols1, matrix1, matrix2, result);
printf("Matrix Addition:\n");

printMatrix(rows1, cols1, result);
// Perform matrix subtraction
subtractMatrices(rows1, cols1, matrix1, matrix2, result);
printf("Matrix Subtraction:\n");
printMatrix(rows1, cols1, result);
// Perform matrix multiplication
multiplyMatrices(rows1, cols1, matrix1, rows2, cols2, matrix2, result);
printf("Matrix Multiplication:\n");
printMatrix(rows1, cols2, result);
return 0;
}
