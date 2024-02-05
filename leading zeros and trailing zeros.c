#include <stdio.h>
void main()
{
int number;
// Input
printf("Enter a number: ");
scanf("%d", &number);
// Display with leading and trailing zeros
printf("Number with leading zeros: %08d\n", number);
// Display with 8 digits, padded with zeros
printf("Number with trailing zeros: %d.000\n", number);
// Display with trailing decimal zeros
}
