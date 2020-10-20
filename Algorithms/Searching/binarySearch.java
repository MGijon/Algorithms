// Binary Search. Theta(log(n))
class BinarySearch{
	int binarySearch(int arr[], int l, int r, int x){
		if(r >= l){
			int middle = l + (r - l) / 2;

			if (arr[middle] == x){
				return middle;
			}

			if (arr[middle] > x){
				return binarySearch(arr, l, middle - 1, x);
			}

			return binarySearch(arr, middle + 1, l, x);
		}

		return -1;
	}

	public static void main(String argsp[]){
		BinarySearch bs = new BinarySearch();

		int arr[] = { 3, 4, 6, 7, 10, 12, 15, 46 };
		int n = arr.length;
		int x = 12;

		int index = bs.binarySearch(arr, 0, n - 1, x);

		if (index == -1){
			System.out.println("Element has not been found.");
		}
		else{
			System.out.println("Element has been found at index " + index);
		}
	}
}


