// Exponential Search. O(logn).
class ExponentialSearch{
	public int binarySearch(int arr[], int l, int r, int x){
		// arr: 1-Dimensional array of sorted and unique numbers.
		// l: we start the search from this index.
		// r: we end the search at this index.
		// x: element to be found.

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
		return -1;
	}

	public static int exponentialSearch(int arr[], int n, int x){
		 // arr: 1-Dimensional array of sorted and unique numbers.
		 // n: length of arr.
		 // x: element to be found.
		 
		 if (arr[0] == x){
		 	return 0;
		 }

		int i = 1;
		while ( (i < n) && (arr[i] <= x) ){
			i = i * 2;
		}
		return binarySearch(arr, i / 2, Math.min(i, n - 1), x);
	}

	public static void main(String args[]){
		int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 12, 15, 16, 17, 27, 37};
		int n = arr.length;
		int x = 12;

		int index = exponentialSearch(arr, n, x);

		if (index != -1){
			System.out.println("Element is present at position " + index);
		}
		else{
			System.out.println("The element has not been found.");
		}
	}
}
