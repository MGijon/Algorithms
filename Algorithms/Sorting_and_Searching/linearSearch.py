"""Linear Search"""

def linearSearch(array, n, x):
    for i in range(n):
        if (array[i] == x):
            return i
    return -1

if __name__ == "__main__":
    array = [1, 21, 1, 342, 12, 32, 213, ]
    x = 32
    n = len(array)
    # Apply the algorithm
    result = linearSearch(array, n, x)
    if (result == -1):
        print("Element is not present in the array\n")
    else:
        print("Element is present at index ", result, "\n")


