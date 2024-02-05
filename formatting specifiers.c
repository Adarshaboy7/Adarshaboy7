#include <stdio.h>
int main() {
int intNumber = 42;
float floatNumber = 3.14159;
char character = 'A';
char string[] = "Hello, World!";
unsigned int unsignedNumber = 255;

printf("Integer: %d\n", intNumber);
printf("Float: %f\n", floatNumber);
printf("Character: %c\n", character);
printf("String: %s\n", string);
printf("Unsigned Integer: %u\n", unsignedNumber);

// Hexadecimal, Octal, and Padding
int Number = 255;
printf("Hexadecimal: %X\n", Number);
printf("Octal: %o\n", Number);
printf("Padded Integer: %05d\n", Number);
// Displayed with at least 5 characters, padded with zeros

// Floating-Point Formatting
float precisionFloat = 123.456789;
printf("Float with 2 decimal places: %.2f\n", precisionFloat);
printf("Scientific Notation: %e\n", precisionFloat);
}
