// Jump Search. O(sqrt(n)).
public class JumpSearch{
	public static int jumpSearch(int[] arr, int x){
		int n = arr.lengh;

		int step = (int)Math.floor(Math.sqrt(n));

		// Finding the block where the element is (if it is present)
		int prev = 0;
		while(arr[Math.floor(Math.min(step, n)) - 1] < x){
			prev = Math.floor(step);
			step += (int)Math.floor(Math.sqrt(n));
			if(prev >= n){
				return -1;
			}
		}

		while(arr[prev] < x){
			prev++;

			if(prev == Math.min(step, n)){
				return -1;
			}
		}

		if (arr[prev] == x){
			return prev;
		}

		return -1;
	}

	public static void main(String [] args){
		int arr[] = {0, 1, 2, 3, 5, 6, 8, 86, 97, 98};
		int x = 6;

		int index = jumpSearch(arr, x);
		
		if(index != -1){
			System.out.println("\nNumber " + x + " is at index " + index);
		} else {
			System.out.println("\nNumber " + x + " has not been found.");
		}
	}
}
