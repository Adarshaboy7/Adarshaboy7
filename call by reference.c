#include <stdio.h>
// Function to swap two variables using call by reference
void swapByReference(int *a, int *b) {
int temp = *a;
*a = *b;
*b = temp;
}
void main() {
int num1 = 5, num2 = 10;
printf("Before swap (call by reference): num1 = %d, num2 = %d\n", num1, num2);
// Call the function with call by reference
swapByReference(&num1, &num2);

printf("After swap (call by reference): num1 = %d, num2 = %d\n", num1, num2);
}
