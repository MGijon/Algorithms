"""Binary Search. Theta(logn)."""

def binarySearch(array, start, end, x):
    
    if start > end:
        return -1
    
    middle = (start + end) // 2
    if x == array[middle]:
        return middle

    if x < array[middle]:
        return binarySearch(array, start, middle - 1, x)
    else:
        return binarySearch(array, middle + 1, end, x)

    
if __name__ == '__main__':
    array = [1, 21, 31, 43, 54]
    x = 54
    
    l = 0
    r = len(array) - 1
    result = binarySearch(array, l, r, x)
    
    if result != -1:
        print("Element is present at index ", result)
    else:
        print("Element is not present in the array")


