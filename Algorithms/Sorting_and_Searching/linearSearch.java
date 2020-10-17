// Linear Search. O(n).

class LinearSearch{
	public static int linearSearch(int arr[], int x){
		int n = arr.length;
		for (int i = 0; i < n; i++){
			if (arr[i] == x){
				return i;
			}
		return -1; // if the element has not been found
	}

	public static void main(String args[]){
		int arr[] = {3, 4, 5, 6, 14, 15, 24, 45, 60};
		int x = 24;

		int index = linearSearch(arr, x);
		
		if (index == -1){
			System.out.println("Element has not been found");
		} else {
			System.out.println("The element has been found at index " + index);
		}
	}
}

