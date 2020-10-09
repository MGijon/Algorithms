/* Implementation of a queue using two stacks structures */
#include <stdio.h>
#include <stdlib.h>

/* Stack */
struct stackNode{
	int data;
	struct stackNode* next;
};

// To push an item to stack
void push(struct stackNode** top_ref, int new_data){
	struct stackNode* new_node = (struct stackNode*)malloc(sizeof(struct stackNode));
	if (new_node == NULL){
		printf("Stack Overflow\n");
		getchar();
		exit(0);
	}
	new_node->data = new_data;
	new_node->next = (*top_ref);
	(*top_ref) = new_node;	
}

// To pop an item from stack
int pop(struct stackNode** top_ref){
	int res;
	struct stackNode* top;

	// error if stack is empty
	if (*top_ref == NULL){
		printf("Stack Underflow\n");
		getchar();
		exit(0);
	} else {
		top = *top_ref;
		res = top->data;
		*top_ref = top->next;
		free(top);
		return res;
	}
}

/* Queue */
struct queue{
	struct stackNode* stack1;
	struct stackNode* stack2;
};

// To  enQueue an item from the queue
void enQueue(struct queue* q, int x){
	push(&q->stack1, x);
}

// To deQueue an itme from queue
int deQueue(struct queue* q){
	int x;
	// raise an error if both stacks are empty
	if (q->stack1 == NULL && q->stack2 == NULL){
		printf("Queue is empty");
		getchar();
		exit(0);
	}

	// if stack2 is empy move elements from stack1 to this one
	if (q->stack2 == NULL){
		while (q->stack1 != NULL){
			x = pop(&q->stack1);
			push(&q->stack2, x);
		}
	}
	x = pop(&q->stack2);
	return x;
}

/* MAIN FUNCTION */
int main(){
	struct queue* q = (struct queue*)malloc(sizeof(struct queue));
	q->stack1 = NULL;
	q->stack2 = NULL;
	enQueue(q, 1);
	enQueue(q, 2);
	enQueue(q, 3);

	printf("%d ", deQueue(q));
	printf("%d ", deQueue(q));
	printf("%d ", deQueue(q));

	return 0;
}



