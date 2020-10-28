"""Heap Sort. O(nlonn)."""
def max_value(arr, n, i):
    """Find the largest value among root and childrens.
    :param arr: 1-Dimensional unsorted array.
    :param n: lenght of the array.
    :param i: candidate to be the largest value.
    :return candidate: largest found value.
    """
    candidate = i
    left = 2 * i + 1
    right = 2 * i + 2
    
    # Update the cadidate value
    if ( (left < n) and (arr[i] < arr[left]) ):
        candidate = left
    
    if ( (right < n) and (arr[candidate] < arr[right]) ):
        candidate = right

    # If root is not the largest swap with the candidate one and continue
    if candidate != i:
        auxiliar = arr[i]
        arr[i] = arr[candidate]
        arr[candidate] = auxiliar
        max_value(arr, n, candidate)

def heap_sort(arr):
    """Performs Heap Sort.
    :param arr: 1-Dimensional unsorted array.
    :return arr: 1-Dimensional sorted array.
    """
    n = len(arr)
    
    # Build max heap 
    for i in range(n // 2, -1, -1):
        max_value(arr, n, i)

    for i in range(n-1, 0, -1):
        auxiliar = arr[i]
        arr[i] = arr[0]
        arr[0] = auxiliar

        max_value(arr, i, 0)

    return arr

if __name__ == "__main__":
    arr = [12, 11, 121, 33, 32, 3, 1, 5, 6, 7, 8, 9, 10, 324]
    
    print("Original array: ", arr)
    print("Sorted array: ", heap_sort(arr))


