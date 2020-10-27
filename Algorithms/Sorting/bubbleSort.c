/* Buble Sort. O(n^2) average and worst case, O(n) when the array is already sorted.*/
#include <stdio.h>

void swapPositions(int *a, int *b){
	// Helper function to swap positions. 
	int temp = *a;
	*a = *b;
	*b = temp;
}

void bubbleSort(int arr[], int n){
	// Performs Bubble Sort algorithm.
	for (int i = 0; i < n - 1; i++){
		for (int j = 0; j < n - i - 1; j++){
			if (arr[j] > arr[j + 1]){
				swapPositions(&arr[j], &arr[j + 1]);
			}
		}
	}
}

int main(void){
	int arr[] = { 10, 32, 23, 31, 1, 34, 4, 6, 7, 8, 12, 35, 93 };
	int n = sizeof(arr) / sizeof(arr[0]);

	printf("Original array:\n");
	for (int i = 0; i < n; i++){
		printf("%d ", arr[i]);
	}
	
	bubbleSort(arr, n);

	printf("\nSorted array:\n");
	for (int i = 0; i < n; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");

	return 0;
}

