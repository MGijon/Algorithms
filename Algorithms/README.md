# Algorithms

* **Under Construction**.
* Contains several algorithms, click in the link for pseudocode (at the end of this each section).

1. [Searching Algorithms](#SearchiningAlgorithms)
2. [Sorting Algorithms](#SortingAlgorithms)
3. [Algorithms on Graphs](#OnGraphs)
4. [Dynamic Programming](#DynamicProgramming)

---

<a name="SearchingAlgorithms"></a>
## Searching Algorithms

| Algorithm | Complexity | Implementations |
| --- | --- | --- |
| [Linear Search](#LinearSearch) | O(n) | <img src="https://img.shields.io/badge/-Python-blue"> <img src="https://img.shields.io/badge/-C-black"> <img src="https://img.shields.io/badge/-C++-grey"> <img src="https://img.shields.io/badge/-Java-red"> <img src="https://img.shields.io/badge/-PHP-purple"> <img src="https://img.shields.io/badge/-R-blue">8|
| [Binary Search](#BinarySearch) | Theta(logn) | <img src="https://img.shields.io/badge/-Python-blue"> <img src="https://img.shields.io/badge/-C-black"> <img src="https://img.shields.io/badge/-C++-grey"> <img src="https://img.shields.io/badge/-Java-red"> <img src="https://img.shields.io/badge/-PHP-purple">|
| [Ternary Search](#TernarySearch) | Theta(logn) | <img src="https://img.shields.io/badge/-C++-grey"> |
| [Jump Search](#JumpSearch) | O(sqrt(n)) | <img src="https://img.shields.io/badge/-Python-blue"> <img src="https://img.shields.io/badge/-C-black"> <img src="https://img.shields.io/badge/-C++-grey"> <img src="https://img.shields.io/badge/-Java-red"> <img src="https://img.shields.io/badge/-PHP-purple"> |
| [Interpolation Search](#InterpolationSearch) | O(n)| <img src="https://img.shields.io/badge/-Python-blue"> <img src="https://img.shields.io/badge/-C-black"> <img src="https://img.shields.io/badge/-C++-grey"> <img src="https://img.shields.io/badge/-Java-red"> <img src="https://img.shields.io/badge/-PHP-purple"> |
| [Exponential Search](#ExponentialSearhc) | O(logn) | <img src="https://img.shields.io/badge/-Python-blue"> <img src="https://img.shields.io/badge/-C-black"> <img src="https://img.shields.io/badge/-C++-grey"> <img src="https://img.shields.io/badge/-Java-red"> <img src="https://img.shields.io/badge/-PHP-purple"> |

<!-- <img src="https://img.shields.io/badge/-Cooming%20Soon-orange"> -->
<a name="LinearSearch"></a>
### **Linear Search**

* **Pseudocode**:
```
// L = [L_1, L_2, ..., L_(n-1)] List of (non-empty) sorted values.
// Target value is called T.
1: i <- 0
2: If L[i] == T => return i
3: i <- i + 1
4: If i < n: goes to step 2.
   If i == n: The search ends unsuccessfully
```

* **References**: [Wikipedia](https://en.wikipedia.org/wiki/Linear_search), [Geeksforgeeks](https://www.geeksforgeeks.org/linear-search/).

<a name="BinarySearch"></a>
### **Binary Search**

* **Pseudocode**:
```
// L = [L_1, L_2, ..., L_(n-1)] List (non-empty) of sorted values.
// Target value is called T.
1: L, R <- 0
2: if L > R => return -1 // the value has not been found
3: m <- floor( (L + R) / 2 ) // the middle point
4: If L[m] < T => L <- m + 1 => go to step 2
5: If L[m] > T => R <- m - 1 => go to step 2
6: If L[m] == T => return m
```

* **References**: [Wikipedia](https://en.wikipedia.org/wiki/Binary_search_algorithm), [Geeksforgeeks](https://www.geeksforgeeks.org/binary-search/?ref=lbp), [Khanacademy](https://www.khanacademy.org/computing/computer-science/algorithms/binary-search/a/binary-search).

<a name="JumpSearch"></a>
### **Jump Search**

* **Pseudocode**:
```
// L = [L_1, L_2, ..., L_(n-1)] List (non-empty) of sorted values.
// Target value is called T.
1: a <- 0, b <- floor(sqrt(n))
2: while L_[min(a, b)-1] < T:
       - a <- b
       - b <- b + b
       - If a >= b: return nothing
3: while L_[a] < T:
       - a <- a + 1
       - If a == min(b, n): return nothing
4: if L_[a] == T: return a; else: return nothing
```

* **References**: [Wikipedia](https://en.wikipedia.org/wiki/Jump_search), [2Braces](https://www.2braces.com/data-structures/jump-search), [iq.openginius](https://iq.opengenus.org/jump-search-algorithm/), [StudyTonight](https://www.studytonight.com/data-structures/jump-search-algorithm).

<a name="InterpolationSearch"></a>
### **Interpolation Search**

* **Pseudocode**:
```
// L = [L_1, L_2, ..., L_(n-1)] List (non-empty) of sorted values.
// Target value is called T.
1: low <- 0, high <- n - 1
2: while (L[high] != L[low]) and (T >= L[low]) and (T <= L[high]):
       - middle <- low + ( (T - L[low]) * (high - low) / (L[high] - L[low]))
       - if L[mid] < T: low <- middle + 1
       - if T < L[middle]: high <- middle - 1: else: return middle
3: if T == L[middle]: return low; else: return -1 // code that means that the value has not been found        
```

* **References**: [Wikipedia](https://en.wikipedia.org/wiki/Interpolation_search), [Geeksforgeeks](https://www.geeksforgeeks.org/interpolation-search/).


<a name="ExponentialSearch"></a>
**Exponential Search**

* Is also knoen as **Doubling Search, Galloping Search** or **Struzik Search**.

* **Pseudocode**:
```
// L = [L_1, L_2, ..., L_(n-1)] List (non-empty) of sorted values.
// Target value is called T.
1: bound <- 1
2: while (bound < n) and (L[bound] < T): bound <- bound * bound
3: binary_search(L, T, bound / 2, min(bound + 1, n)) // performs a binary search, look above for more info
```

* **References**: [Wikipedia](https://en.wikipedia.org/wiki/Exponential_search), [Geeksforgeeks](https://www.geeksforgeeks.org/exponential-search/).

<a name="TernarySearch"></a>
### **Ternary Search**

* This **is not** an algorithm to search in a array of values, is an algorithm for **finding the minimum or maximum of a unimodal function**.
* Impementation in c++ by [@Nucleoo](https://github.com/Nucleoo).
* **Pseudocode**: (iterative version)
```
// f: unimodal function
// left, right; extremes of the interval
// absolute_precision: level of tolerance
1: while |right - left| >= absolute_precision:
       - left_third <- left + (right - left) / 3
       - right_third <- right + (right - left) / 3
       - if f(left_third) < f(right_third): left <- left_third; else: right <- right_third
2: return (left + right) / 2
```

* **References**: [Wikipedia](https://en.wikipedia.org/wiki/Ternary_search), [Geeksforgeeks](https://www.geeksforgeeks.org/ternary-search/), [CP-Algorithms](https://cp-algorithms.com/num_methods/ternary_search.html).


***
<a name="SortingAlgorithms"></a>
## Sorting Algorithms

| Algorithm | Complexity | Implementations|
| --- | --- | --- |
| [Merge Sort](#MergeSort) | O(nlogn) | <img src="https://img.shields.io/badge/-Python-blue"> <img src="https://img.shields.io/badge/-C-black"> <img src="https://img.shields.io/badge/-C++-grey"> |
| [Quick Sort](#QuickSort) | O(nlogn) [details](#QuickSort) | <img src="https://img.shields.io/badge/-C-black"> <img src="https://img.shields.io/badge/-C++-grey"> |
| [Buble Sort](#BubleSort) | O(n^2) [details](#BubleSort) | <img src="https://img.shields.io/badge/-C-black"> <img src="https://img.shields.io/badge/-C++-grey"> |
| [Bucket Sort](#BucketSort) | O(n + (n^2)/k + k) [details](#BucketSort) | <img src="https://img.shields.io/badge/-Python-blue"> |
| [Heap Sort](#HeapSort) | O(nlogn) [details](#HeapSort) | <img src="https://img.shields.io/badge/-Python-blue"> |
| [Counting Sort](#CountingSort) | O(n) [details](#CountingSort) | <img src="https://img.shields.io/badge/-Python-blue">  |

<a name="MergeSort"></a>
### **Merge Sort**

* **Pseudocode**:
```
// merge function: L[0, ..., k] and R[0, ..., J] are non-empty sublists
1: result <- [] // empty list
2: if L[0] <= R[0]: L[0] added to results and eliminate from L; else: R[0] added to results and eliminate from R
3: while L != []: L[0] appends to results and eliminate from L
4: while R != []: R[0] appends to results and eliminate from R
```

```
// A = [A_1, A_2, ..., A_(n-1)] List (non-empty) of values.
// merge sort: not that the base case is not consider, if len(A) <= 1 the array is sorted by definition, ro return A
1: left, right <- [] // empty lists
2: for i in [0, n - 1]:
       - if i < (n - 1) / 2: add A[i] to left; else: add A[i] to right
3: left <- merge_sort(left) // recursive call
4: right <- merge_sort(right) // recursive_call
```

* **References**: [Wikipedia](https://en.wikipedia.org/wiki/Merge_sort), [Geeksforgeeks](https://www.geeksforgeeks.org/merge-sort/).

<a name="QuickSort"></a>
### **Quick Sort**

* The common case is O(nlogn), but in extreme cases it can be O(n^2).
* **Pseudocode**:
```
// Partition algorithm
// A = [A_1, A_2, ..., A_(n-1)] List (non-empty) of values.
// Takes low and high (integers) as index to perform the algorithm
1: pivot <- A[high], i <- low
2: for j in [low, ..., high]:
       - if A[j] < pivot: swap A[i] with A[j], i <- i + 1
       - swap A[i] with A[high]
3: return i
```

```
// Quick sort algorithm
// A = [A_1, A_2, ..., A_(n-1)] List (non-empty) of values.
// Takes low and high (integers) as index to perform the algorithm
// Suppose low < high, otherwise the algorithm will return an error code (-1 for instance)
1: p <- partition(A, low, high)
2: quicksort(A, low, p - 1) // recursive call
3: quicksort(A, p + 1, high) // recursive call
```

* **References**: [Wikipedia](https://en.wikipedia.org/wiki/Quicksort), [Geeksforgeeks](https://www.geeksforgeeks.org/quick-sort/).


<a name="BubleSort"></a>
### **Buble Sort**

* Average (and worst) case complexity: O(n^2). Worst case is when the array is sorted backwards.
* Best case time complexity is O(n), when the array is already sorted.
* **Pseudocode**:
```
// A = [A_1, A_2, ..., A_(n-1)] List (non-empty) of values.
1: for i in [0, n-1]:
       - if A[i] > A[i + 1]: swap A[i] with A[i + 1]
```

* **References**: [Wikipedia](https://en.wikipedia.org/wiki/Bubble_sort), [Geeksforgeeks](https://www.geeksforgeeks.org/bubble-sort/), [Runestone](https://runestone.academy/runestone/books/published/pythonds/SortSearch/TheBubbleSort.html), [TutorialsPoint](https://www.tutorialspoint.com/data_structures_algorithms/bubble_sort_algorithm.htm).

<a name="BucketSort"></a>
### **Bucket Sort**

* Wort case performance: O(n^2).
* Average performance: O(n + (n^2)/k + k). Where k is the number of buckets. Notes that the average performance is approximate O(n) where n is close to k.
* Worst case space complexity: O(kn). Again k is the number of buckets.
* **Pseudocode**:
```
// A = [A_1, A_2, ..., A_(n-1)] List (non-empty) of values.
// k as parameter, it means the number of buckets
1: buckets <- new array of k empy lists
2: max <- maximun key value in the array
3: for i in [0, ..., n - 1]:
       - A[i] added to buckets[ floor(k * A[i] / max) ]
4: for i in [0, ..., k - 1]:
       - nextSort(buckets[i])  // sort each bucket individually
5: concatenate all buckets in bucket arra and return it as result
```

* **References**: [Wikipedia](https://en.wikipedia.org/wiki/Bucket_sort), [Stackabuse](https://stackabuse.com/bucket-sort-in-python/), [Geeksforgeeks](https://www.geeksforgeeks.org/bucket-sort-2/).

<a name="HeapSort"></a>
### **Heap Sort**

* Average complexity: O(nlogn).
* Worst complexity: O(n).
* **Pseudocode**:
```
// A = [A_0, A_1, ..., A_(n - 1)] List (non-empty) of values.
1: end <- n - 1
2: while end > 0:
       - swap A[end] with A[0]
       - end <- end - 1
       - siftDown(A, 0, end) // Repair the heap whose root element is at index 'start', assuming the heaps rooted at its children are valid, not explained here
```

* **References**: [Wikipedia](https://en.wikipedia.org/wiki/Heapsort), [Programiz](https://www.programiz.com/dsa/heap-sort).


<a name="CountingSort"></a>
### **Counting Sort**

* Worst case performance: O(n + k). k is the range of non-negative numbers.
* Worst case space-complexity performance: O(n + k). k is the range of non-negative numbers.
* **Pseudocode**:
```
// A = [A_0, A_1, ..., A_(n - 1)] List (non-empty) of values.
1: k <- max(A), count <- [0, 0, ..., 0] // array of k 0's
2: total = 0
3: for i in [0, ..., n]:
       - count[A[i]] += 1
4: for i in [0, ..., k]:
       - aux <- count[i]
       - count[i] <- total
       - total <- total + aux
```

* **References**: [Wikipedia](https://en.wikipedia.org/wiki/Counting_sort), [Programiz](https://www.programiz.com/dsa/counting-sort), [Interviewcake](https://www.interviewcake.com/concept/java/counting-sort).

***
<a name="OnGraphs"></a>
## Algorithms on Graphs

| Algorithm | Complexity | Implementations |
| --- | --- | --- |
| [Breadth First Search (BFS)](#BFS) | | <img src="https://img.shields.io/badge/-Cooming%20Soon-orange">  |
| [Depth First Search (DFS)](#DFS) | | <img src="https://img.shields.io/badge/-Cooming%20Soon-orange">  |
| [Dijkstra](#Dijkstra) | | <img src="https://img.shields.io/badge/-Cooming%20Soon-orange"> |
| [Floyd Warshall](#FloydWarshall) | | <img src="https://img.shields.io/badge/-Cooming%20Soon-orange"> |

<a name="BFS"></a>
### **Breadth First Search (BFS)**

<img src="https://img.shields.io/badge/-Cooming%20Soon-orange">

<a name="DFS"></a>
### **Depth First Search (DFS)**

<img src="https://img.shields.io/badge/-Cooming%20Soon-orange">

<a name="Dijkstra"></a>
### **Dijkstra**

<img src="https://img.shields.io/badge/-Cooming%20Soon-orange">

<a name="FloydWarshall"></a>
### **Floyd Warshall**

<img src="https://img.shields.io/badge/-Cooming%20Soon-orange">


***
<a name="DynamicProgramming"></a>
## Dynamic Programming

| Algorithm | Complexity | Implementations |
| --- | --- | --- |
| [Longest Common Subsequence](#LCS) | | <img src="https://img.shields.io/badge/-Cooming%20Soon-orange"> |
| [Longest Increasing Subsequence](#LIS) | | <img src="https://img.shields.io/badge/-Cooming%20Soon-orange"> |
| [Edit Distance](#EditDistance) | | <img src="https://img.shields.io/badge/-Cooming%20Soon-orange"> |
| [Minimun Partition](#MinimunPartition) | | <img src="https://img.shields.io/badge/-Cooming%20Soon-orange"> |
| [Ways to Cover a Distance](#CoverDistance) | | <img src="https://img.shields.io/badge/-Cooming%20Soon-orange"> |
| [Longest Path in Matrix](#LontestPathMatrix) | | <img src="https://img.shields.io/badge/-Cooming%20Soon-orange"> |
| [Subset Sum Problem](#SubsetSumProblem) | | <img src="https://img.shields.io/badge/-TCooming%20Soon-orange"> |

<a name="LCS"></a>
### **Longest Common Subsequence**

<img src="https://img.shields.io/badge/-Cooming%20Soon-orange">

<a name="LIS"></a>
### **Longest Increasing Sequence**

<img src="https://img.shields.io/badge/-Cooming%20Soon-orange">

<a name="EditDistance"></a>
### **Edit Distance**

<img src="https://img.shields.io/badge/-Cooming%20Soon-orange">

<a name="MinimumPartition"></a>
### **Minimun Partition**

<img src="https://img.shields.io/badge/-Cooming%20Soon-orange">

<a name="CoverDistance"></a>
### **Ways to Cover a Distance**

<img src="https://img.shields.io/badge/-Cooming%20Soon-orange">

<a name="LongestPathMatrix"></a>
### **Longest Path in Matrix**

<img src="https://img.shields.io/badge/-Cooming%20Soon-orange">

<a name="SubsetSumProblem"></a>
### **Subset Sum Problem**

<img src="https://img.shields.io/badge/-Cooming%20Soon-orange">

<!--
None yet: <img src="https://img.shields.io/badge/-None%20Yet-orange">
Python: <img src="https://img.shields.io/badge/-Python-blue">
R: <img src="https://img.shields.io/badge/-R-blue">
C: <img src="https://img.shields.io/badge/-C-black">
C++: <img src="https://img.shields.io/badge/-C++-grey">
Go: <img src="https://img.shields.io/badge/-Go-#7FFFD4">  // Aquamarine
Kotlin: <img src="https://img.shields.io/badge/-Kotlin-#FF1493">    // DeepPink
Java: <img src="https://img.shields.io/badge/-Java-red">
PHP: <img src="https://img.shields.io/badge/-PHP-purple">
JavaScript: <img src="https://img.shields.io/badge/-JavaScript-yellow">
Rust: <img src="https://img.shields.io/badge/-Rust-orange">
-->