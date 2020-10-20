// Exponential Search. O(logn).
#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int l, int r, int x){
	// Binary Search.
	// arr: 1-Dimensinal array of sorted and unique numbers.
	// l: left index to start searching.
	// r: right index to end searching.
	// x: number to be found.
	if (r >= l){
		int m = l + (r - l) / 2;

		if (arr[m] == x){
			return m;
		}

		if (arr[m] > x){
			return binarySearch(arr, l, m - 1, x);
		}
		if (arr[m] < x){
			return binarySearch(arr, m + 1, r, x);
		}

		return -1;
	}
	return -1;
}

int exponentialSearch(int arr[], int n, int x){
	// arr: 1-Dimensional array of sorted and unique numbers.
	// n: length of arr.
	// x: number to be found.
	if (arr[0] == x){
		return 0;
	}

	int i = 1;
	while ( (i < n) && (arr[i] <= x) ){
		i = i * 2;
	}

	return binarySearch(arr, i / 2, min(i, n - 1), x);
}

int main(void){
	int arr[] = {1, 2, 3, 4, 5, 6, 8, 9, 10, 14, 15, 16, 17, 20};
	int n = sizeof(arr) / sizeof(arr[0]);
	int x = 9;

	int index = exponentialSearch(arr, n, x);

	(index != -1)? printf("Element has been found at index %d", index)
		     : printf("The element has not been found.\n");
}
