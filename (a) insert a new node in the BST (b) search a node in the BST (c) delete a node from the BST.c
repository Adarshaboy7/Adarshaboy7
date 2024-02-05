#include <stdio.h>
#include <stdlib.h>
// Node structure for a binary search tree
struct TreeNode {
int data;
struct TreeNode* left;
struct TreeNode* right;
};
// Function to create a new node with given data
struct TreeNode* createNode(int data) {
struct TreeNode* newNode = (struct TreeNode*)malloc(sizeof(struct TreeNode));
newNode->data = data;
newNode->left = NULL;
newNode->right = NULL;
return newNode;
}
// Function to insert a new node in the BST
struct TreeNode* insertNode(struct TreeNode* root, int data) {
if (root == NULL) {
return createNode(data);
}
if (data < root->data) {
root->left = insertNode(root->left, data);
} else if (data > root->data) {
root->right = insertNode(root->right, data);
}
return root;
}
// Function to search for a node in the BST
struct TreeNode* searchNode(struct TreeNode* root, int data) {
if (root == NULL || root->data == data) {
return root;
}
if (data < root->data) {
return searchNode(root->left, data);
} else {
return searchNode(root->right, data);

}
}
// Helper function to find the node with the minimum value in a BST
struct TreeNode* findMinNode(struct TreeNode* node) {
while (node->left != NULL) {
node = node->left;
}
return node;
}
// Function to delete a node from the BST
struct TreeNode* deleteNode(struct TreeNode* root, int data) {
if (root == NULL) {
return root;
}
if (data < root->data) {
root->left = deleteNode(root->left, data);
} else if (data > root->data) {
root->right = deleteNode(root->right, data);
} else {
// Node with only one child or no child
if (root->left == NULL) {
struct TreeNode* temp = root->right;
free(root);
return temp;
} else if (root->right == NULL) {
struct TreeNode* temp = root->left;
free(root);
return temp;
}
// Node with two children: Get the inorder successor (smallest
// in the right subtree) and copy its data to this node
struct TreeNode* temp = findMinNode(root->right);
root->data = temp->data;
// Delete the inorder successor
root->right = deleteNode(root->right, temp->data);
}
return root;
}
// Function to perform in-order traversal of the BST
void inOrderTraversal(struct TreeNode* root) {

if (root != NULL) {
inOrderTraversal(root->left);
printf("%d ", root->data);
inOrderTraversal(root->right);
}
}
int main() {
// Create an empty BST
struct TreeNode* root = NULL;
// Insert nodes into the BST
root = insertNode(root, 50);
insertNode(root, 30);
insertNode(root, 20);
insertNode(root, 40);
insertNode(root, 70);
insertNode(root, 60);
insertNode(root, 80);
// Print the in-order traversal of the BST
printf("In-order traversal of the BST: ");
inOrderTraversal(root);
printf("\n");
// Search for a node in the BST
int searchValue = 40;
struct TreeNode* searchResult = searchNode(root, searchValue);
if (searchResult != NULL) {
printf("Node with value %d found in the BST.\n", searchValue);
} else {
printf("Node with value %d not found in the BST.\n", searchValue);
}
// Delete a node from the BST
int deleteValue = 30;
root = deleteNode(root, deleteValue);
printf("In-order traversal of the BST after deleting node with value %d: ", deleteValue);
inOrderTraversal(root);
printf("\n");
// Free allocated memory
free(root);
return 0;
}
