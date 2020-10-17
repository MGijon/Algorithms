/*Linear Search. O(n).*/
#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int x){
	int i;
	for (i = 0; i < n; i++){
		if (arr[i] == x){
			return i;
		}
	}
	return -1; // just if the the value is not present.
}

int main(void){
	int arr[] = { 2, 4, 5, 6, 7, 32, 53};
	int x = 32;
	int n = sizeof(arr) / sizeof(arr[0]);

	int index = linearSearch(arr, n, x);

	(index == -1)? cout << "The element is not present in the array."
		     : cout << "The element has been found at index " << index;
	
	return 0;
}


