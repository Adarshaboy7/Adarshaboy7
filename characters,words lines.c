#include <stdio.h>
#include <stdlib.h>
int main() {
char *text;
int length = 0, wordCount = 0, lineCount = 1;
int inWord = 0; // Flag to track whether currently in a word
// Allocate initial memory for the text
text = (char*)malloc(1 * sizeof(char));
if (text == NULL) {
printf("Memory allocation failed\n");
return 1; // Exit with an error code
}
printf("Enter text (press Enter to finish):\n");
// Read and display text using a character pointer
int c;
while ((c = getchar()) != '\n') {
// Reallocate memory for each character
text = (char*)realloc(text, (length + 1) * sizeof(char));
if (text == NULL) {
printf("Memory reallocation failed\n");
free(text);
return 1; // Exit with an error code
}
text[length++] = (char)c;
// Count characters, words, and lines
if (c != ' ' && c != '\t' && c != '\n') {
if (!inWord) {
inWord = 1;
wordCount++;
}
} else {
inWord = 0;
if (c == '\n') {

lineCount++;
}
}
}
// Null-terminate the string
text[length] = '\0';
// Display the entered text
printf("\nEntered text:\n%s\n", text);
// Display counts
printf("\nCharacter count: %d\n", length);
printf("Word count: %d\n", wordCount);
printf("Line count: %d\n", lineCount);
// Free the dynamically allocated memory
free(text);
return 0; // Exit successfully
