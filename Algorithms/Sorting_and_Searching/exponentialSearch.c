/* Exponential Search. O(logn). */
#include <stdio.h>
#define MIN(a, b) ( ((a)<(b)) ? (a) : (b) )

int binarySearch(int arr[], int l, int r, int x){
	// arr: 1-Dimensional array of sorted and unique numbers.
	// l: index where starting the searching from.
	// r: index where the search ends.
	// x: number to be found.
	if (r >= l){
		int m = l + (r - l) / 2;

		if (arr[m] == x){
			return m;
		}
		if (arr[m] > x){
			return binarySearch(arr, l, m - 1, x);
		}
		return binarySearch(arr, m + 1, r, x);
	}
	return -1; // the number has not been found
}

int exponentialSearch(int arr[], int n, int x){
	// arr: 1-Dimensional array of sorted and unique numbers.
	// n: length arr.
	// x: number to be found.
	if (arr[0] == x){
		return 0;
	}

	int i = 1;
	while ( (i < n) && (arr[i] <= x) ){
		i = i * 2;
	}

	return binarySearch(arr, i / 2, MIN(i, n - 1), x);
}

int main(void){
	int arr[] = { 1, 2, 5, 6, 7, 8, 9, 10, 13, 16, 18, 23 };
	int n = sizeof(arr) / sizeof(arr[0]);
	int x = 13;

	int index = exponentialSearch(arr, n, x);

	if (index == -1){
		printf("The element has not been found.\n");
	}
	else{
		printf("The element has been found at position %d.", index);
	}
}

