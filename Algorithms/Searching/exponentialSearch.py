"""Exponential Search. O(logn)."""
def binarySearch(arr, l, r, x):
    """Binary Search.
    :param arr: 1-Dimensional array of sorted and unique numbers.
    :param l: lower index to start search.
    :param r: higher index to start search.
    :param x: number to be found.
    :return index: index were we can found x.
    """
    if (r >= l):
        m = int(l + (r - l) / 2)

        if (arr[m] == x):
            return m

        if (arr[m] > x):
            return binarySearch(arr, l, m - 1, x)
        if (arr[m] < x):
            return binarySearch(arr, m + 1, r, x)

    return -1 # The element is not present in the array

def exponentialSearch(arr, n, x):
    """Exponential Search.
    :param arr: 1-Dimensional array of sorted and unique numbers.
    :param n: length of arr.
    :param x: number to be found.
    """
    if arr[0] == x:
        return 0

    i = 1
    while ( (i < n) and (arr[i] <= x) ):
        i = i * 2

    return binarySearch(arr, i / 2, min(i, n - 1), x)

if __name__ == "__main__":
    arr = [1, 2, 3, 4, 5, 6, 9, 12, 14, 16, 18, 21, 22, 25, 50]
    n = len(arr)
    x = 21

    index = exponentialSearch(arr, n, x)

    if (index == -1):
        print("The element has not been found.\n")
    else:
        print("The element is present at index ", index)
