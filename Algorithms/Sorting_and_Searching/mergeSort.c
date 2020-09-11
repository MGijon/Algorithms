#include <stdio.h>

#define max 10

int a[11] = { 102, 12, 12, 23, 4, 5, 6, 3, 43, 54, 11 };
int b[10];

void merge(int low, int mid, int high)
{
	int l1, l2, i;

	for (l1 = low, l2 = mid + 1, i = low; l1 <= mid && l2 <= high; i++)
	{
		if (a[l1] <= a[l2])
		{
			b[i] = a[l1++];
		}
		else
		{
			b[i] = a[l2++];
		}

		while (l1 <= mid)
		{
			b[i++] = a[l1++];
		}
		while (l2 <= high)
		{
			b[i++] = a[l2++];
		}

		for (i = low; i <= high; i++)
		{
			a[i] = b[i];
		}
	}

}

void mergeSort(int low, int high)
{
	int mid;

	if (low < high)
	{
		mid = (low + high) / 2;
		
		mergeSort(low, mid);
		mergeSort(mid + 1, high);
		
		merge(low, mid, high);
	}
	else
	{
		return;
	}
}

int main()
{
	int i;

	printf("List before sorting\n");

	for (i = 0; i <= max; i++)
	{
		printf("%d ", a[i]);
	}

	mergeSort(0, max);

	printf("\nList after sorging\n");
	
	for (i = 0; i <= max; i++)
	{
		printf("%d ", a[i]);
	}
}
