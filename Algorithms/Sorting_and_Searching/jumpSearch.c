/* Jump Search. O(sqrt(n)). 
 * NOTE: compile using -lm flag (gcc jumpSearch.c -o compiled/jumpSearc -lm
 * */

#include <stdio.h>
#include <math.h>
#define MIN(a, b) ( ((a)<(b)) ? (a) : (b) )
#define MAX(a, b) ( ((a)>(b)) ? (a) : (b) )

int jumpSearch(int arr[], int x, int n){
	int step = floor(sqrt(n));
	int prev = 0;

	while(arr[ MIN(step, n) - 1 ] < x){
		prev = step;
		step += step; //floor(sqrt(n));
		if (prev >= n){
			return -1;
		}
	}
	while (arr[prev] < x){
		prev++;
		if (prev == MIN(step, n)){
			return -1;
		}
	}
	if (arr[prev] == x){
		return prev;
	}
	return -1;	
}

int main(void){
	int arr[] = { 1, 2, 4, 5, 6, 7, 8, 9, 10, 23, 40, 50, 60, 69 };
	int x = 23;
	int n = sizeof(arr) / sizeof(arr[0]);

	int index = jumpSearch(arr, x, n);

	if (index == -1){
		printf("The element has not been found.\n");
	}
	else{
		printf("The element is present at index %d\n", index);
	}
}
