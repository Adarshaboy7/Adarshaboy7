#include <stdio.h>
#include <ctype.h>

void main() {
// Declare variables
char multiwordString[1000];

// Input the multiword string
printf("Enter a multiword string: ");
gets(multiwordString);

// Display the abbreviated form
printf("Abbreviated Form: ");

// Print the first character of the first word
if (isalpha(multiwordString[0])) {
putchar(toupper(multiwordString[0]));
}

// Print the first character of each subsequent word
for (int i = 1; multiwordString[i] != '\0'; i++) {
if (isalpha(multiwordString[i]) && multiwordString[i - 1] == ' ') {
putchar(toupper(multiwordString[i]));
}
}
printf("\n");
}
