#include <stdio.h>
// Function to calculate the factorial of a number
int factorial(int n) {
if (n == 0 || n == 1) {
return 1;
} else {
return n * factorial(n - 1);
}
}
// Function to calculate the binomial coefficient (nCr) using recursion
int nCr(int n, int r) {
if (n < r) {
return 0; // Invalid input, n should be greater than or equal to r
} else {
return factorial(n) / (factorial(r) * factorial(n - r));
}
}
void main() {
int n, r;

// Input values for n and r
printf("Enter the value of n: ");
scanf("%d", &n);
printf("Enter the value of r: ");
scanf("%d", &r);
// Check if input values are valid
if (n < 0 || r < 0 || r > n) {
printf("Invalid input. Make sure n >= 0, r >= 0, and r <= n.\n");
return 1; // Return an error code
}
// Calculate and print the binomial coefficient (nCr)
printf("C(%d, %d) = %d\n", n, r, nCr(n, r));
}
