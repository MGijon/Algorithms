/* Interpolation Search. O(n). */
#include <stdio.h>

int interpolationSearch(int arr[],int  l, int  r, int x){
	// arr: 1-Dimensional array of sorted and unique numbers.
	// l: left index to start.
	// r: rigt indext to end.
	// x: value to be found.
	int p;

	if (l < r){
		if ( (x >= arr[l]) && (x  <= arr[r]) ){
			p  = l + ( ( (double)(r - l) / (arr[r] - arr[l]) ) * (x - arr[l]) );
			
			if (arr[p] == x){
				return p;
			}

			if (arr[p] < x){
				return interpolationSearch(arr, p + 1, r, x);
			}

			if (arr[p] > x){
				return interpolationSearch(arr, l, p - 1, x);
			}
		}
	}
	return -1;
}

int main(){
	int arr[] = {1, 2, 3, 4, 5, 6, 7, 11, 12, 13, 15, 16, 39, 40};
	int x = 12;
	int n = sizeof(arr) / sizeof(arr[0]);

	int index = interpolationSearch(arr, 0, n - 1, x);

	if (index != -1){
		printf("Element has been found at index %d", index, "\n");
	}
	else{
		printf("The element has not been found.\n");
	}
}


