// Bubble Sort. O(n^2) average and worst case, O(n) with is already sorted.
#include <iostream>
using namespace std;

void swapPositions(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

void bubbleSort(int arr[], int n){
	// Performs bubble sort algorighm.
	// arr: 1-Dimensional array to be sorted.
	// n: lenght of the array.
	for (int i = 0;i < n - 1; i ++){
		for (int j = 0; j < n - i - 1; j++){
			if (arr[j] > arr[j + 1]){
				swapPositions(&arr[j], &arr[j+1]);
			}
		}
	}
}

int main(){

	int arr[] = { 1, 23, 3, 435, 53, 4, 12, 564, 7, 45, 24, 5, 99};
	int n = sizeof(arr) / sizeof(arr[0]);

	cout << "Original Array: ";
 	for (int i = 0; i < n; i++){
		cout << arr[i] << " ";
	}
	cout << endl;


	bubbleSort(arr, n);
	
	cout << "Sorted Array: ";
	for (int i = 0; i < n; i++){
		cout << arr[i] << " ";
	}
	cout << endl;

	return 0;
}
