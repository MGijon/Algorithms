// Quick Sort. O(n^2) in the worst case, usually O(nlogn).
#include <iostream>
using namespace std;

int pivot(int *arr, int l, int r){
	// *arr: pointer to an unordered 1-Dimensional array.
	// l: left index.
	// r: right index.
	int p = l; 
	int vp = arr[p]; 
	int i;
	int aux;
 
	for (i = l + 1; i <= r; i++){
		if (arr[i] < vp){
			p++;
			// swap
			aux = arr[i];
			arr[i] = arr[p];
			arr[p] = aux;
		}
	}
	
	// swap
	aux = arr[l];
	arr[l] = arr[p];
	arr[p] = aux;
	
	return p;
}

void quickSort(int *arr, int l, int r){
	// Performs Quick Sort Algorithm.
	// *arr: pointer to an 1-Dimensional array to be sorted.
	// l: left index.
	// r: right index.
	int p;

	if (l < r){
		p = pivot(arr, l, r);
		quickSort(arr, l, p - 1);
		quickSort(arr, p + 1, r);
	}
}

int main(){
	
	int arr[] = { 3, 4, 5, 6, 33, 12, 34, 64, 675, 8, 99 };
	int n = sizeof(arr) / sizeof(arr[0]);

	cout << "Original Array: ";
	for (int i = 0; i < n; i++){
		cout << arr[i] << " ";
	}
	cout << endl;

	quickSort(arr, 0, n);
		
	cout << "Sorted Array: ";
	for (int i = 0; i < n; i++){
		cout << arr[i] << " ";
	}
	cout << endl;

	return 0;
}


