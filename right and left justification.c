#include <stdio.h>
void main()
{
int number;
// Input
printf("Enter a number: ");
scanf("%d", &number);

// Display with right justification
printf("Right Justified:\n");
printf("Number: %10d\n", number); // Display with a width of 10

// Display with left justification
printf("\nLeft Justified:\n");
printf("Number: %-10d\n", number); // Display with a width of 10
}
