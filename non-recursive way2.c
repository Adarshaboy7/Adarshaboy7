#include <stdio.h>
// Function to generate the Fibonacci series up to the given limit
void generateFibonacciSeries(int limit) {
int a = 0, b = 1, nextTerm;
printf("Fibonacci Series up to %d terms:\n", limit);
for (int i = 0; i < limit; ++i) {
printf("%d, ", a);
nextTerm = a + b;
a = b;
b = nextTerm;
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
// Generate and print the Fibonacci series
generateFibonacciSeries(terms);
return 0;
}
