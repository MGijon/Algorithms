#include <stdio.h>
#include <stdlib.h>

struct Node {
	int data;          // data contained in the node
	struct Node* next; // pointer to the next Node element
};

void printList(struct Node* n){
	while (n != NULL){
		printf(" %d ", n->data);
		n = n-> next;
	}
}

int main(){
	struct Node* first = NULL;
	struct Node* second = NULL;
	struct Node* third = NULL;
	
	// Create the space for the 3 nodes in the heap
	first = (struct Node*)malloc(sizeof(struct Node));
	second = (struct Node*)malloc(sizeof(struct Node));
	third = (struct Node*)malloc(sizeof(struct Node));

	first->data = 1; 
	first->next = second;

	second->data = 2;
	second->next = third;

	third->data = 3;
	third->next = NULL;

	// Print the list
	printList(first);

	return 0;
}



