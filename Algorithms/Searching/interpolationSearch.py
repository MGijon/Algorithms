"""Interpolation Search. O(n)."""
def interpolationSearch(arr, l, h, x):
    """Function to apply Interpolation Search algorithm.
    :param arr: 1-Dimensional array of sorted (and unique) numbers.
    :param l: left index (first considered value).
    :param h: right index (last considered value).
    :param x: number to be found.
    :return index: index where this value is present in the array, -1 if this is not been found.
    """ 
    if (l <= h):
        if (x >= arr[l]) and (x <= arr[h]):

            p = l + ( (h - l) // (arr[h] - arr[l]) * (x - arr[l]) )

            if (arr[p] == x):
                return p

            if (arr[p] < x):
                return interpolationSearch(arr, p + 1, h, x)

            if (arr[p] > x):
                return interpolationSearch(arr, l, p - 1, x)

    return -1

if __name__ == "__main__":
    arr = [1, 2, 3, 4, 5, 7, 8, 9, 10, 22, 23, 28, 50, 52, 55, 68]
    x = 22
    n = len(arr)

    index = interpolationSearch(arr, 0, n - 1, x)

    if (index != 1):
        print("Element has been found at position ", index)
    else:
        print("The element has not been found at given array.")
