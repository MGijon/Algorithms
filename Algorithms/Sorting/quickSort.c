/* Quick Sort. O(n^2) in the worst case, usually O(n logn). */
#include <stdio.h>

int choosePivot(int *arr, int l, int r){
	// *arr: pointer to an unordered 1-Dimensional array.
	// l: left index.
	// r: right index.
	int i;
	int p, vp;
	int aux;

	p = l;
	vp = arr[p];
	for (i = l + 1; i <= r; i++){
		if (arr[i] < vp){
			p++;
			aux = arr[i];

			arr[i] = arr[p];
			arr[p] = aux;
		}
	}

	aux = arr[l];
	arr[l] = arr[p];
	arr[p] = aux;
	return p;
}

void quickSort(int *arr, int l, int r){
	// Performs quicksort.
	int p;

	if (l < r){
		p = choosePivot(arr, l, r);
		quickSort(arr, l, p - 1);
		quickSort(arr, p + 1, r);
	}
}


int main(void){
	int arr[] = { 2, 3, 1, 45, 54, 12, 4, 56, 11, 14, 16};
	int n = sizeof(arr) / sizeof(arr[0]);

	printf("Original array: \n");
	for (int i = 0; i < n; i++)
		printf("%d ", arr[i]);
	printf("\n");

	quickSort(arr, 0, n);

	printf("Sorted array:\n", arr);
	for (int i = 0; i < n; i++)
		printf("%d ", arr[i]);
	printf("\n");

	return 0;
}
