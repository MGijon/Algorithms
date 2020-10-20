/* Jump Search. O(sqrt(n)).*/
#include <bits/stdc++.h>
using namespace std;

int jumpSearch(int arr[], int x, int n){
	// Function to perform Jump Search.
	// arr: sorted array.
	// x: number to look for.
	// n: lenght of the array.
	
	int step = sqrt(n);
	int prev = 0;
	// looking for the block where it is (if it is)
	while(arr[ min(step, n) - 1] < x){
		prev = step;
		step += sqrt(n);
		if (prev >= n){
			return -1;
		}
	}
	// perform a linear search inside this block
	while(arr[prev] < x){
		prev++;
		if (prev == min(step, n)){
			return -1;
		}
	}
	// If element is present 
	if (arr[prev] == x){
		return prev;
	}
	return -1;
}

int main(){
	int arr[] = {0, 2, 4, 5, 6, 8, 12, 15, 45, 56, 98};
	int x = 8;
	int n = sizeof(arr) / sizeof(arr[0]);

	int index = jumpSearch(arr, x, n);

	if (index != -1){
		cout << "\nNumber " << x << " is at index " << index;
	} else {
		cout << "\nNumber is not present in the array (at least not found)";
	}
	return 0;
}
