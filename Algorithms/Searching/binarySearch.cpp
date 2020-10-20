// Binary Search. Theta(log(n)).
#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int l, int r, int x){
	if (l <= r){
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
	}
	return -1; // element has not been found
}

int main(void){
	int arr[] = { 2, 3, 4, 6, 7, 12, 34, 75, 89 };
	int x = 12;
	int n = sizeof(arr) / sizeof(arr[0]);

	int index = binarySearch(arr, 0, n - 1, x);

	(index == -1) ? cout << "The element has not been found." 
		      : cout << "The element is present at position " << index;
	
	return 0;
}


