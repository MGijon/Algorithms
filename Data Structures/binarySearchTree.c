/* Binary Tree to Binary Search Tree */
#include <stdio.h>
#include <stdlib.h>

// Node of a binary tree
struct node{
	int data;
	struct node* left;
	struct node* right;
};

// Helper functions
void storeInOrder(struct node* node, int ordered[], int* index){
	if (node == NULL)
		return;
	storeInOrder(node->left, ordered, index);

	ordered[*index] = node->data;

	(*index)++;

	storeInOrder(node->right, ordered, index);
}

int countNodes(struct node* root){
	if (root = NULL)
		return 0;

	return countNodes(root->left) + countNodes(root->right) + 1;
}

int compare(const void* a, const void* b){
	return (*(int*)a - *(int*)b);
}

void fromArrayToBinarySearchTree(int* arr, struct node* root, int* index){
	if (root = NULL)
		return;

	fromArrayToBinarySearchTree(arr, root->left, index);

	root->data = arr[*index];
	(*index)++;

	fromArrayToBinarySearchTree(arr, root->right, index);
}

// Convert a Binary Tree to a Binary Search Tree
void binaryTreeToBinarySearchTree(struct node* root){
	// base case
	if (root == NULL)
		return;

	int n = countNodes(root);
	// pass the element to an array
	int arr[n];
	int i = 0;
	storeInOrder(root, arr, &i);
	// sort them
	qsort(arr, n, sizeof(arr[0]), compare);
	// copy back
	i = 0;
	fromArrayToBinarySearchTree(arr, root, &i);
	// free the memory
	free(arr);
}

// New node for the Binary Tree
struct node* newNode(int data){
	struct node* temp = (struct node*)malloc(sizeof(struct node)); //malloc(sizeof(struct node)); //(struct node*)malloc(sizeof(struct node));
	temp->data = data;
	temp->left = NULL;
	temp->right = NULL;
	return temp;
}

// helper
void printInOrder(struct node* node){
	if(node==NULL)
		return;
	printInOrder(node->left);
	printf("%d ", node->data);
	printInOrder(node->right);
}


// Driver function
int main(){
	struct node* root = NULL;
	root=newNode(10);
	root->left=newNode(30);
	root->right=newNode(15);
	root->left->left=newNode(20);
	root->right->right=newNode(5);

	binaryTreeToBinarySearchTree(root);

	printf("Printed in order");

	printInOrder(root);

	return 0;
}
