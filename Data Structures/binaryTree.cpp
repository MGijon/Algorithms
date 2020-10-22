// Binary Tree implementation.
#include <bits/stdc++.h>
using namespace std;

struct Node{
	int data;
	struct Node* left;
	struct Node* right;

	Node (int val){
		data = val;
		left = NULL;
		right = NULL;
	}
};

void printTree(struct Node* node){
	// Helper function to print the data contained in the tree
	if (node == NULL){
		return;
	}

	printTree(node->left);
	cout << node->data;
	printTree(node->right);
}

int main(){

	struct Node* root = new Node(1);

	root->left = new Node(2);
	root->right = new Node(3);

	root->left->left = new Node(4);
	// and so on...
	
	printTree(root);
	
	return 0;
}


