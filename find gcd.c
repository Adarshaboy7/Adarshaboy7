
#include <stdio.h>
// Function to find GCD using recursion
int findGCD(int num1, int num2) {
if (num2 == 0) {
return num1;
} else {
return findGCD(num2, num1 % num2);
}
}
void main() {
int num1, num2;
// Input two numbers from the user
printf("Enter two numbers: ");
scanf("%d %d", &num1, &num2);

// Call the function to find GCD
int gcd = findGCD(num1, num2);

// Display the GCD
printf("The GCD of %d and %d is: %d\n", num1, num2, gcd);
}
