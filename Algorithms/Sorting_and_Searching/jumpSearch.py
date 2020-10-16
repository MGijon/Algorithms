"""Jump Search. O(sqrt(n))."""
import math 

def jumpSearch(arr, x, n):
    """Implements Jump Search algorighm to find a value in a ordered array.
    :param arr: array of numbers (1-Dimensional).
    :param x: value to be found.
    :param n: size of arr.
    :return index: index where x can be found (-1 if not).
    """
    index = -1

    step = math.sqrt(n) # step to jump
    prev = 0
    
    # Finding the block where the elemnent it is (if it is)
    while arr[math.floor( min(step, n) - 1 )] < x:
        prev = math.floor(step)
        step +=math.floor( math.sqrt(n)) # take another step
        # check if we are out of the maximun size
        if prev >= n: 
            index = -1
    
    # Linear search in that block
    while arr[int(prev)] < x:
        prev += 1

        if prev == min(step, n):
            index = -1

    if arr[int(prev)] == x:
        index =  prev
    else:
        index = -1
   
    return index

if __name__ == "__main__":
    
    arr = [1, 3, 4, 5, 6, 8,  54, 342, 500, 4003,]
    x = 342
    n = len(arr) 

    index = jumpSearch(arr, x, n)

    if index != -1:
        print("The number ", str(x), " is present at position ", str(index))
    else:
        print("The number ", str(x), " is not present in the array.")
