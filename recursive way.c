#include <stdio.h>
// Recursive function to calculate the nth Fibonacci number
int fibonacci(int n) {
if (n <= 1) {
return n;
} else {
return fibonacci(n - 1) + fibonacci(n - 2);
}
}
// Function to print the Fibonacci series up to the given limit
void printFibonacciSeries(int limit) {
printf("Fibonacci Series up to %d terms:\n", limit);
for (int i = 0; i < limit; ++i) {
printf("%d ", fibonacci(i));
}
printf("\n");
}
int main() {
int terms;
// Input the number of terms for the Fibonacci series

printf("Enter the number of terms for the Fibonacci series: ");
scanf("%d", &terms);
// Check if the input is valid
if (terms < 0) {
printf("Invalid input. Please enter a non-negative number.\n");
return 1; // Return an error code
}
// Print the Fibonacci series
printFibonacciSeries(terms);
return 0;
}
