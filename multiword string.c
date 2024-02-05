#include <stdio.h>
#include <string.h>
void main() {
// Declare variables
char multiwordString[1000];
char targetString[50];
char replacementString[50];
// Input the multiword string
printf("Enter a multiword string: ");
gets(multiwordString);
// Input the target string to replace
printf("Enter the target string to replace: ");
gets(targetString);
// Input the replacement string
printf("Enter the replacement string: ");
gets(replacementString);
// Replace the target string with the replacement string
int i, j, k;
int multiwordStringLength = strlen(multiwordString);
int targetStringLength = strlen(targetString);
int replacementStringLength = strlen(replacementString);
for (i = 0; i <= multiwordStringLength - targetStringLength; i++) {
// Check if the substring in source matches the target
int match = 1;
for (j = 0, k = i; j < targetStringLength; j++, k++) {
if (multiwordString[k] != targetString[j]) {
match = 0;
break;
}
}
// If a match is found, replace the target with the replacement
if (match) {
for (j = i, k = 0; k < replacementStringLength; j++, k++) {
multiwordString[j] = replacementString[k];
}
// Move the remaining characters to the left to fill the gap
for (j = i + replacementStringLength; multiwordString[j] != '\0'; j++) {
multiwordString[j - targetStringLength + replacementStringLength] = multiwordString[j];
}
multiwordString[j - targetStringLength + replacementStringLength] = '\0';
}
}
// Display the modified string
printf("Modified String: %s\n", multiwordString);
}
