"""Counting Sort. O(n)."""
def counting_sort(arr):
    """Performs Counting Sort algorithm.
    :param arr: 1-Dimensional unsorted array.
    :return output: 1-Dimensional sorted array.
    """
    n = len(arr)
    output = [0 for _ in range(n)]
    auxiliar = [0 for _ in range(max(arr) + 1)]

    # Store the count of each element in auxiliar vector
    for i in range(n):
        auxiliar[arr[i]] += 1

    for i in range(1, max(arr) + 1):
        auxiliar[i] += auxiliar[i - 1]

    i = n - 1
    while (i >= 0):
        output[ auxiliar[arr[i]] - 1] = arr[i]
        auxiliar[arr[i]] -= 1
        i -= 1

    return output

if __name__ == "__main__":
    arr = [2, 3, 5, 1, 43, 53, 56, 24, 26, 27, 28, 48, 32]
    print("Original array: ", arr)
    print("Sorted array: ", counting_sort(arr))
