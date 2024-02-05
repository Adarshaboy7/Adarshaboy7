#include <stdio.h>
void main()
{
int number;
// Input
printf("Enter a number: ");
scanf("%d", &number);
// Display in different formats
printf("Decimal: %d\n", number);
printf("Hexadecimal: %X\n", number);
printf("Octal: %o\n", number);
}
