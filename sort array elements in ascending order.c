#include <stdio.h>
void main() {
// Declare variables
int n, i, j, temp;
// Input the size of the array
printf("Enter the number of elements in the array: ");
scanf("%d", &n);
// Declare an array of size n
int arr[n];
// Input the elements of the array
printf("Enter %d elements:\n", n);
for (i = 0; i < n; i++) {
scanf("%d", &arr[i]);
}
// Sort the array in ascending order using the bubble sort algorithm
for (i = 0; i < n - 1; i++) {
for (j = 0; j < n - i - 1; j++) {
if (arr[j] > arr[j + 1]) {
// Swap arr[j] and arr[j + 1]
temp = arr[j];
arr[j] = arr[j + 1];
arr[j + 1] = temp;
}
}
}
// Display the sorted array in ascending order
printf("\nSorted Array in Ascending Order:\n");
for (i = 0; i < n; i++) {
printf("%d ", arr[i]);
}
}
