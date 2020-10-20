/* Binary Search - O(logn) */
#include <stdio.h>

int binarySearch(int array[], int l, int r, int x){
	if (r >= l){
		int m = l + (r - l) / 2;
		
		if (array[m] == x){
			return m;
		}

		if (array[m] > x){
			return binarySearch(array, l, m - 1, x);
		} else {
			return binarySearch(array, m + 1, r, x);
		}

	}	
	return -1; // if the element is not present
};


int main(void){
	int array[] = { 1, 23, 42, 52, 72, 123, 327 };
	int n = sizeof(array) / sizeof(array[0]);
	
	int x = 72;
	int result = binarySearch(array, 0, n - 1, x); 
	if (result == -1){
		printf("The element is not present in the array\n");
	} else {
		printf("The element is present in the position %d\n", result);
	}

	return 0;
}
