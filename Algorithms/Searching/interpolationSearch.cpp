// Interpolation Search. O(n).
#include <iostream>
using namespace std;

int interpolationSearch(int arr[], int l, int r, int x){
	// arr: 1-Dimensional array of sorted and unique numbers.
	// l: left index to start searching.
	// r: right index to finish searchin.
	// x: number to be found.
	int p;

	if (l < r){
		if ( (x >= arr[l]) && (x <= arr[r]) ){
			p = l + ( ( (double)(r - l) / (arr[r] - arr[l])) * (x - arr[l]) );
			
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
	return -1; // the element has not been found 
}

int main(){

	int arr[] = { 1, 3, 4, 5, 6, 7, 9, 20, 35, 36, 37, 38 };
	int x = 36;
	int n = sizeof(arr) / sizeof(arr[0]);

	int index = interpolationSearch(arr, 0, n - 1, x);

	(index != -1)? cout << "Element has been found at index " << index << "\n" 
	             : cout << "The element has not been found.\n";	
}
