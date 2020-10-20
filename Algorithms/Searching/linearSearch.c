/* Linear Search */

#include <stdio.h>

int linearSearch(int array[], int n, int x){
	int i;
	for (i = 0; i < n; i++){
		if (array[i] == x)
			return i;
	}
	return -1;
}

int main(void){
	int array[] = { 5, 6, 56, 66, 13 };
	// element to find in the array
	int x = 13;
	int n = sizeof(array) / sizeof(array[0]);
	// apply the search algorithm
	int result = linearSearch(array, n, x);
	if (result == -1){
		printf("Element is not present in the array\n");
	} else {
		printf("Element is present at index %d\n", result);
	};

	return 0;
}
		
	
