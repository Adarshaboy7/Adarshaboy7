#include <stdio.h>
// Function to find the index of the smallest element in the array
int findSmallestIndex(int arr[], int size) {
int smallestIndex = 0;
for (int i = 1; i < size; ++i) {
if (arr[i] < arr[smallestIndex]) {
smallestIndex = i;
}
}
return smallestIndex;
}
// Function to find the index of the largest element in the array
int findLargestIndex(int arr[], int size) {
int largestIndex = 0;
for (int i = 1; i < size; ++i) {
if (arr[i] > arr[largestIndex]) {
largestIndex = i;
}
}
return largestIndex;
}
// Function to interchange the smallest and largest elements in the array
void interchangeMinMax(int arr[], int size) {
if (size <= 1) {
// Nothing to interchange for arrays with 0 or 1 element
return;
}
// Find the indices of the smallest and largest elements
int smallestIndex = findSmallestIndex(arr, size);
int largestIndex = findLargestIndex(arr, size);
// Interchange the values at the smallest and largest indices
int temp = arr[smallestIndex];
arr[smallestIndex] = arr[largestIndex];
arr[largestIndex] = temp;
}
int main() {
int size;
// Input the size of the array
printf("Enter the size of the array: ");
scanf("%d", &size);

// Check if the input size is valid
if (size <= 0) {
printf("Invalid input. Please enter a positive size.\n");
return 1; // Return an error code
}
// Input the array elements
int arr[size];
printf("Enter %d elements for the array:\n", size);
for (int i = 0; i < size; ++i) {
scanf("%d", &arr[i]);
}
// Interchange the smallest and largest elements in the array
interchangeMinMax(arr, size);
// Print the modified array
printf("Array after interchanging the smallest and largest elements:\n");
for (int i = 0; i < size; ++i) {
printf("%d ", arr[i]);
}
printf("\n");
return 0;
}
