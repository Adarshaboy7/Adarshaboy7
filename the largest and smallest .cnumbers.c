#include <stdio.h>
void main() {
// Declare variables
int n, i;
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
// Initialize variables to store the largest and smallest numbers
int largest = arr[0];
int smallest = arr[0];
// Find the largest and smallest numbers
for (i = 1; i < n; i++) {
if (arr[i] > largest) {
largest = arr[i];
}
if (arr[i] < smallest) {
smallest = arr[i];
}
}
// Display the results
printf("The largest number is: %d\n", largest);
printf("The smallest number is: %d\n", smallest);
}
