// Interpolation Search. O(n).
import java.util.*;
class InterpolationSearch{
	public static int interpolationSearch(int arr[], int l, int r, int x){
		// arr: 1-Dimensional array of sorted and unique numbers.
		// l: left index to start the search.
		// r: right index to start the search.
		// x: number to be found.
		int p;
		if (l < r){
			if ((x <= arr[r]) && (x >= arr[l])){
				p = l + ( ( (r - l) / (arr[r] - arr[l])) * (x - arr[l]));

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
			return -1;
		}
		return -1;
	}


	public static void main(Strings[] args){
		int arr[] = { 1, 3, 4, 5, 6, 7, 8, 10, 11, 24, 25, 26, 50 };
		int n = arr.length;
		int x = 24;

		int index = interpolationSearch(arr, 0, n - 1, x);

		if (index != -1){
			System.out.println("Element has been found at index " + index);
		}
		else{
			System.out.println("The element has not been found.\n");
		}
	}
}
