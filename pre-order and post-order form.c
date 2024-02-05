#include <stdio.h>
#include <stdlib.h>
// Node structure for a binary tree
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
// Function to traverse the binary tree in pre-order
void preOrderTraversal(struct TreeNode* root) {
if (root != NULL) {
printf("%d ", root->data);
preOrderTraversal(root->left);
preOrderTraversal(root->right);
}
}
// Function to traverse the binary tree in post-order
void postOrderTraversal(struct TreeNode* root) {
if (root != NULL) {
postOrderTraversal(root->left);

postOrderTraversal(root->right);
printf("%d ", root->data);
}
}
int main() {
// Create a binary tree
struct TreeNode* root = createNode(1);
root->left = createNode(2);
root->right = createNode(3);
root->left->left = createNode(4);
root->left->right = createNode(5);
root->right->left = createNode(6);
root->right->right = createNode(7);
// Traverse and print the binary tree in pre-order
printf("Pre-order traversal: ");
preOrderTraversal(root);
printf("\n");
// Traverse and print the binary tree in post-order
printf("Post-order traversal: ");
postOrderTraversal(root);
printf("\n");
// Free allocated memory
free(root->left->left);
free(root->left->right);
free(root->right->left);
free(root->right->right);
free(root->left);
free(root->right);
free(root);
return 0;
}
