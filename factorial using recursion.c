#include <stdio.h>
// Function to calculate factorial using recursion
unsigned long long factorial(int n) {
// Base case: factorial of 0 is 1
if (n == 0 || n == 1) {
return 1;
} else {
// Recursive case: n! = n * (n-1)!
return n * factorial(n - 1);
}
}
void main() {
int num;
// Input a number from the user
printf("Enter a number: ");
scanf("%d", &num);
// Check if the number is non-negative
if (num < 0) {
printf("Factorial is not defined for negative numbers.\n");
} else {
// Call the function to calculate factorial
unsigned long long fact = factorial(num);

// Display the factorial
printf("The factorial of %d is: %llu\n", num, fact);
}
}
