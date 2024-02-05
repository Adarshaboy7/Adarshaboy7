#include <stdio.h>
void main() {
// Declare variables
int matrix[3][3];
int i, j;
// Input elements for the 3x3 matrix
printf("Enter elements for the 3x3 matrix:\n");
for (i = 0; i < 3; i++) {
for (j = 0; j < 3; j++) {
printf("Enter element at position (%d, %d): ", i + 1, j + 1);
scanf("%d", &matrix[i][j]);
}
}
// Display the entered matrix
printf("\nThe 3x3 matrix is:\n");
for (i = 0; i < 3; i++) {
for (j = 0; j < 3; j++) {
printf("%d\t", matrix[i][j]);
}
printf("\n");
}
}
