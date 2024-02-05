#include <stdio.h>
#include <stdlib.h>
// Node structure for a linked list
struct Node {
int data;
struct Node* next;
};
// Function to create a new node with given data
struct Node* createNode(int data) {
struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
newNode->data = data;
newNode->next = NULL;
return newNode;
}
// Function to merge two sorted linked lists
struct Node* mergeSortedLists(struct Node* list1, struct Node* list2) {
struct Node* mergedList = NULL;
struct Node* tail = NULL;
// Initialize mergedList with the smaller head node
if (list1 && list2) {
if (list1->data <= list2->data) {
mergedList = list1;
list1 = list1->next;
} else {
mergedList = list2;
list2 = list2->next;
}
tail = mergedList;
} else if (list1) {
return list1;
} else if (list2) {
return list2;
} else {
return NULL;
}
// Merge the lists
while (list1 && list2) {
if (list1->data <= list2->data) {
tail->next = list1;
list1 = list1->next;
} else {
tail->next = list2;

list2 = list2->next;
}
tail = tail->next;
}
// If one list is longer than the other, append the remaining nodes
if (list1) {
tail->next = list1;
} else if (list2) {
tail->next = list2;
}
return mergedList;
}
// Function to print a linked list
void printList(struct Node* head) {
while (head) {
printf("%d ", head->data);
head = head->next;
}
printf("\n");
}
// Driver program to test the mergeSortedLists function
int main() {
// Create two sorted linked lists
struct Node* list1 = createNode(1);
list1->next = createNode(3);
list1->next->next = createNode(5);
struct Node* list2 = createNode(2);
list2->next = createNode(4);
list2->next->next = createNode(6);
// Print the original lists
printf("List 1: ");
printList(list1);
printf("List 2: ");
printList(list2);
// Merge the lists
struct Node* mergedList = mergeSortedLists(list1, list2);
// Print the merged list
printf("Merged List: ");
printList(mergedList);
// Free allocated memory
free(list1);
free(list2);
return 0;
}
