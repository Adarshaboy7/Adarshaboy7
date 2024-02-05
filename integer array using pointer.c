#include <stdio.h>
int main() {
int size;
// Get the size of the array from the user
printf("Enter the size of the array: ");
scanf("%d", &size);
// Dynamically allocate memory for the array
int *arr = (int*)malloc(size * sizeof(int));
// Check if memory allocation is successful
if (arr == NULL) {
printf("Memory allocation failed\n");
return 1; // Exit with an error code
}
// Read integers into the array using pointer
printf("Enter %d integers:\n", size);
for (int i = 0; i < size; i++) {
scanf("%d", arr + i);
}
// Display the array using pointer
printf("Entered integers are: ");
for (int i = 0; i < size; i++) {
printf("%d ", *(arr + i));
}
// Free the dynamically allocated memory
free(arr);
return 0; // Exit successfully
}
