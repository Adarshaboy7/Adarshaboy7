#include <stdio.h>
#include <ctype.h>
void main() {
// Declare variables
char str[100];
int vowels = 0, consonants = 0, i;
// Input the string
printf("Enter a string: ");
gets(str);
// Count the number of vowels and consonants
for (i = 0; str[i] != '\0'; i++) {
// Convert each character to lowercase for case-insensitive comparison
char ch = tolower(str[i]);

// Check if the character is a letter
if ((ch >= 'a' && ch <= 'z')) {
// Check if the letter is a vowel
if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
vowels++;
} else {
consonants++;
}
}
}

// Display the results
printf("Number of vowels: %d\n", vowels);
printf("Number of consonants: %d\n", consonants);
}

5. h) To check whether a string is palindrome or not.
#include <stdio.h>
#include <string.h>
#include <ctype.h>
void main() {
// Declare variables
char str[100];
// Input the string
printf("Enter a string: ");
gets(str);
// Check if the string is a palindrome
int left = 0;
int right = strlen(str) - 1;
int isPalindrome = 1; // Assume the string is a palindrome
while (left < right) {
// Skip non-alphabetic characters from the left
while (!isalpha(str[left]) && left < right) {
left++;
}
// Skip non-alphabetic characters from the right
while (!isalpha(str[right]) && left < right) {
right--;
}
// Compare the characters (case-insensitive)
if (tolower(str[left]) != tolower(str[right])) {
isPalindrome = 0; // Not a palindrome
break;
}
left++;
right--;
}
// Display the result
if (isPalindrome) {
printf("The string is a palindrome.\n");
} else {
printf("The string is not a palindrome.\n");
}
}
