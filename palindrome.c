#include <stdio.h>
#include <string.h>
void main() {
char word[100];
int isPalindrome = 1; // Assume it's a palindrome by default
printf("Enter a word: ");
scanf("%s", word);
int len = strlen(word);
for (int i = 0; i < len / 2; i++) {
if (word[i] != word[len - i - 1]) {
isPalindrome = 0; // It's not a palindrome
break;
}
}
if (isPalindrome)
printf("%s is a palindrome.\n", word);
else
printf("%s is not a palindrome.\n", word);
}
