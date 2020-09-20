#include <stdio.h>
#include <stdlib.h>

// Stack node
struct stackNode {
	int data;
	struct stackNode* next;
};

void push(struct stackNode** top_ref, int new_data);
int pop(struct stackNode** top_ref);

// Structure of queue having two stacks
struct queue {
	struct stackNode* stack1;
	struct stackNode* stack2;
};

/* Function to enqueue an item to queue */
void enQueue(struct queue* q, int x){
	push(&q -> stack1, x);
}

/* Function to dequeue an item from queue */
int deQueue(struct queue* q){
	int x;

	// If both stacks are empty then error 
	if (q->stack1 == NULL && q->stack2 == NULL){
		printf("Q is empty");
		getchar();
		exit(0);
	}
	// Move elements from stack1 to stack2 only if stack2 is empty
	if (q->stack2 == NULL){
		while (q->stack1 != NULL){
			x = pop(&q->stack1);
			push(&q->stack2, x);
		}
	}

	x = pop(&q->stack2);
	return x;
}

/* Function to push an itme to stack */
void push(struct stackNode** top_ref, int new_data){
	// allocate stackNode
	struct stackNode* new_node = (struct stackNode*)malloc(sizeof(struct stackNode));
	if (new_node == NULL){
		printf("Stack overflow \n");
		getchar();
		exit(0);
	}

	new_node->data = new_data;
	new_node->next = (*top_ref);
	// move the head to point to the new node
	(*top_ref) = new_node;
}

/* Function to pop an item from stack */
int pop(struct stackNode** top_ref){
	int res;
	struct stackNode* top;

	// if stack is empty then error
	if (*top_ref == NULL){
		printf("Stack overflow \n");
		getchar();
		exit(0);
	} else {
		top = *top_ref;
		res = top -> data;
		free(top);
		return res;
	}
}

int main(){
	// create a queue with items 1 2 3
	struct queue* q = (struct queue*)malloc(sizeof(struct queue));
	q -> stack1 = NULL;
	q -> stack2 = NULL;
	enQueue(q, 1);
	enQueue(q, 2);
	enQueue(q, 3);
	// dequeue elements
	printf("%d ", deQueue(q));
	printf("%d ", deQueue(q));
	printf("%d ", deQueue(q));

	return 0;
}





