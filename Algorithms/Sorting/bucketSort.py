"""Bucket Sort. Average O(n + (n^2)/k + k). Worst case scenario O(n^2)."""
def insertion_sort(b):
    """Sort elements in a bucket using Insertion Sort algorithm.
    :param b: 1-Dimensional array to be sorted.
    :return b: 1-Dimensional sorted array.
    """
    for i in range(1, len(b)):
        aux = b[i]
        j = i - 1
        while ( (j >= 0) and (b[j] > aux) ):
                b[j + 1] = b[j]
                j -= 1
        b[j + 1] = aux
    return b

def bucket_sort(arr):
    """Performs Bucket Sort.
    :param arr: 1-Dimensional array to be sorted.
    :return x: 1-Dimensional sorted array.
    """
    x = []
    
    max_value = max(arr)
    buckets = max_value / len(arr)
    buckets_list = [[] for _ in range(len(arr))]

    # Separate elements in different buckets
    for i in range(len(arr)):
        j = int( arr[i] / buckets )
        if j != len(arr):
            buckets_list[j].append(arr[i])
        else:
            buckets_list[len(arr) - 1].append(arr[i])

    # Sort each individual bucket
    for h in range(len(arr)):
        insertion_sort(buckets_list[h])

    # Concatenate
    for single_bucket in range(len(arr)):
        x = x + buckets_list[single_bucket]

    return x

if __name__ == "__main__":
    
    arr = [1, 32, 12, 31, 13, 4, 6, 7, 9, 10, 21, 35, 54, 99]

    print("Original unsorted array: ", arr)
    
    print("Sorted array: ", bucket_sort(arr))
