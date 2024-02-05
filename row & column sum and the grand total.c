#include <stdio.h>
void main() {
int rows, cols;
printf("Enter the number of rows: ");
scanf("%d", &rows);
printf("Enter the number of columns: ");
scanf("%d", &cols);
int matrix[rows][cols];
printf("Enter the elements of the matrix:\n");

for (int i = 0; i < rows; i++)
for (int j = 0; j < cols; j++)
scanf("%d", &matrix[i][j]);
// Calculate and display row sums
printf("Row sums:\n");
for (int i = 0; i < rows; i++) {
int rowSum = 0;
for (int j = 0; j < cols; j++) {
rowSum += matrix[i][j];
}
printf("Row %d: %d\n", i + 1, rowSum);
}
// Calculate and display column sums
printf("Column sums:\n");
for (int j = 0; j < cols; j++) {
int colSum = 0;
for (int i = 0; i < rows; i++) {
colSum += matrix[i][j];
}
printf("Column %d: %d\n", j + 1, colSum);
}
// Calculate and display the grand total
int grandTotal = 0;
for (int i = 0; i < rows; i++) {
for (int j = 0; j < cols; j++) {
grandTotal += matrix[i][j];
}
}
printf("Grand Total: %d\n", grandTotal);
}

