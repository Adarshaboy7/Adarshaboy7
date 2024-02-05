#include <stdio.h>
// Define a structure
struct Person {
char name[50];
int age;
float height;
};
int main() {
// Declare a structure variable
struct Person person;
// Declare a pointer to the structure
struct Person *ptrPerson = &person;

// Read input for the structure using a pointer
printf("Enter name: ");
scanf("%s", ptrPerson->name);
printf("Enter age: ");
scanf("%d", &ptrPerson->age);
printf("Enter height: ");
scanf("%f", &ptrPerson->height);
// Display the contents of the structure using a pointer
printf("\nDetails entered:\n");
printf("Name: %s\n", ptrPerson->name);
printf("Age: %d\n", ptrPerson->age);
printf("Height: %.2f\n", ptrPerson->height);
return 0;
}
