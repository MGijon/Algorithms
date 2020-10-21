// Merge Sort. O(nlogn).
#include <iostream>
using namespace std;

void merge(int arr[], int l, int m, int r){
	// merge two subarrays, arr[l..m] and arr[m+1..r]
	int n1 = m - l + 1;
       	int n2 = r - m;

	int left[n1], right[n2]; // temporal arrays and copy the data
	for (int i = 0; i < n1; i++){
		left[i] = arr[l + i];
	}
	for (int j = 0; j < n2; j++){
		right[j] = arr[m + 1 + j];
	}

	int i = 0;
	int j = 0;
	
	// merging and copy remaining elements if there are any
	int k = l;
	while ( (i < n1) && (j < n2) ){
		if (left[i] <= right[j]){
			arr[k] = left[i];
			i++;
		}
		else{
			arr[k] = right[j];
			j++;
		}
		k++;
	}

	while (i < n1){
		arr[k] = left[i];
		i++;
		k++;
	}
	while (j < n2){
		arr[k] = right[j];
		j++;
		k++;
	}
}

void mergeSort(int arr[], int l, int r){
	// arr: 1-Dimensional array.
	// l: left index.
	// r: right index.
	if (l < r){
		int m = l + (r - l) / 2;

		mergeSort(arr, l, m);
		mergeSort(arr, m + 1, r);

		merge(arr, l, m, r);
	}
}

int main(){
	int arr[] = {12, 14, 1, 3, 5, 16, 19, 39, 50, 40};
	int n = sizeof(arr) / sizeof(arr[0]);
	
	cout << "Array unsorted is: \n";
	for (int i = 0; i < n; i++){
		cout << arr[i] << " ";
	}
	
	mergeSort(arr, 0, n - 1);
	cout << "\nSorted array: \n";
	for (int j = 0; j < n; j++){
		cout << arr[j] << " ";
	}	

	return 0;
}

