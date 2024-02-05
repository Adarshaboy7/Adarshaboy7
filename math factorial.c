#include <stdio.h>
#include <math.h>
// Function to calculate factorial of a number
int factorial(int num) {
int fact = 1;
for (int i = 1; i <= num; ++i) {
fact *= i;
}
return fact;
}
void main() {
int n, x,i;
float sum=0;
// Input values for n and x
printf("Enter the value of n: ");
scanf("%d", &n);
printf("Enter the value of x: ");
scanf("%d", &x);
// Calculate and print series
for(i=1; i<=n; i++)
{
sum = sum + pow(x,i)/factorial(i);
}
printf("n=%d, x=%d, Sum of Series = %f\n", n, x, sum);
}
