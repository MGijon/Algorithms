#include <stdio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node* left;
	struct node* right;
};

/* Function to allocate a new node with the given data and NULL for both lefts. */
struct node* newNode(int data){
	
	struct node* node = (struct node*)malloc(sizeof(struct node));

	node -> data = data;
	node -> left = NULL;
	node ->	right = NULL;
	
	return (node);
}

int main(){
	struct node *root = newNode(1);

	root -> left = newNode(2);
	root -> right = newNode(3);

	root -> left -> left = newNode(4);
	root -> left -> right = newNode(5);

	// and so on...
	
	getchar();
	return 0;
}


