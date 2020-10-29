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
| [Linear Search](#LinearSearch) | O(n) | <img src="https://img.shields.io/badge/-Python-blue"> <img src="https://img.shields.io/badge/-C-black"> <img src="https://img.shields.io/badge/-C++-grey"> <img src="https://img.shields.io/badge/-Java-red"> <img src="https://img.shields.io/badge/-PHP-purple"> |
| [Binary Search](#BinarySearch) | Theta(logn) | <img src="https://img.shields.io/badge/-Python-blue"> <img src="https://img.shields.io/badge/-C-black"> <img src="https://img.shields.io/badge/-C++-grey"> <img src="https://img.shields.io/badge/-Java-red"> <img src="https://img.shields.io/badge/-PHP-purple">|
| [Ternary Search](#TernarySearch) | Theta(logn) | <img src="https://img.shields.io/badge/-C++-grey"> |
| [Jump Search](#JumpSearch) | O(sqrt(n)) | <img src="https://img.shields.io/badge/-Python-blue"> <img src="https://img.shields.io/badge/-C-black"> <img src="https://img.shields.io/badge/-C++-grey"> <img src="https://img.shields.io/badge/-Java-red"> <img src="https://img.shields.io/badge/-PHP-purple"> |
| [Interpolation Search](#InterpolationSearch) | O(n)| <img src="https://img.shields.io/badge/-Python-blue"> <img src="https://img.shields.io/badge/-C-black"> <img src="https://img.shields.io/badge/-C++-grey"> <img src="https://img.shields.io/badge/-Java-red"> <img src="https://img.shields.io/badge/-PHP-purple"> |
| [Exponential Search](#ExponentialSearhc) | O(logn) | <img src="https://img.shields.io/badge/-Python-blue"> <img src="https://img.shields.io/badge/-C-black"> <img src="https://img.shields.io/badge/-C++-grey"> <img src="https://img.shields.io/badge/-Java-red"> <img src="https://img.shields.io/badge/-PHP-purple"> |

<!-- <img src="https://img.shields.io/badge/-Cooming%20Soon-orange"> -->
<a name="LinearSearch"></a>
### **Linear Search**

```
// List of values. Target value is called T
L = [L_1, L_2, ..., L_(n-1)]
i <- 0
while i < n:
  if L[i] == T:
    return i
  i = i + 1
```

* **References**: [Wikipedia](https://en.wikipedia.org/wiki/Linear_search), [Geeksforgeeks](https://www.geeksforgeeks.org/linear-search/).

<a name="BinarySearch"></a>
### **Binary Search**

* **References**: [Wikipedia](https://en.wikipedia.org/wiki/Binary_search_algorithm), [Geeksforgeeks](https://www.geeksforgeeks.org/binary-search/?ref=lbp), [Khanacademy](https://www.khanacademy.org/computing/computer-science/algorithms/binary-search/a/binary-search).

<img src="https://img.shields.io/badge/-Cooming%20Soon-orange">

<a name="TernarySearch"></a>
### **Ternary Search**

<img src="https://img.shields.io/badge/-Cooming%20Soon-orange">

* Impementation in c++ by [@Nucleoo](https://github.com/Nucleoo).
* **References**: [Wikipedia](https://en.wikipedia.org/wiki/Ternary_search), [Geeksforgeeks](https://www.geeksforgeeks.org/ternary-search/), [CP-Algorithms](https://cp-algorithms.com/num_methods/ternary_search.html).

<a name="JumpSearch"></a>
### **Jump Search**

* **References**: [Wikipedia](https://en.wikipedia.org/wiki/Jump_search), [2Braces](https://www.2braces.com/data-structures/jump-search).

<img src="https://img.shields.io/badge/-Cooming%20Soon-orange">

<a name="InterpolationSearch"></a>
### **Interpolation Search**

<img src="https://img.shields.io/badge/-Cooming%20Soon-orange">

<a name="ExponentialSearch"></a>
**Exponential Search**

* Is also knoen as **Doubling Search, Galloping Search** or **Struzik Search**.
* **References**: [Wikipedia](https://en.wikipedia.org/wiki/Exponential_search), [Geeksforgeeks](https://www.geeksforgeeks.org/exponential-search/).

<img src="https://img.shields.io/badge/-Cooming%20Soon-orange">

***
<a name="SortingAlgorithms"></a>
## Sorting Algorithms

| Algorithm | Complexity | Implementations|
| --- | --- | --- |
| [Merge Sort](#MergeSort) | O(nlogn) | <img src="https://img.shields.io/badge/-Python-blue"> <img src="https://img.shields.io/badge/-C-black"> <img src="https://img.shields.io/badge/-C++-grey"> |
| [Quick Sort](#QuickSort) | O(nlogn) [details](#QuickSort) | <img src="https://img.shields.io/badge/-C-black"> |
| [Buble Sort](#BubleSort) | O(n^2) [details](#BubleSort) | <img src="https://img.shields.io/badge/-C-black"> |
| [Bucket Sort](#BucketSort) | O(n + (n^2)/k + k) [details](#BucketSort) | <img src="https://img.shields.io/badge/-Python-blue"> |
| [Heap Sort](#HeapSort) | O(nlogn) [details](#HeapSort) | <img src="https://img.shields.io/badge/-Python-blue"> |
| [Counting Sort](#CountingSort) | O(n) [details](#CountingSort) | <img src="https://img.shields.io/badge/-Python-blue">  |

<a name="MergeSort"></a>
### **Merge Sort**

* **References**: [Wikipedia](https://en.wikipedia.org/wiki/Merge_sort), [Geeksforgeeks](https://www.geeksforgeeks.org/merge-sort/).

<img src="https://img.shields.io/badge/-Cooming%20Soon-orange">

<a name="QuickSort"></a>
### **Quick Sort**

* The common case is O(nlogn), but in extreme cases it can be O(n^2).
* **References**: [Wikipedia](https://en.wikipedia.org/wiki/Quicksort), [Geeksforgeeks](https://www.geeksforgeeks.org/quick-sort/).

<img src="https://img.shields.io/badge/-Cooming%20Soon-orange">

<a name="BubleSort"></a>
### **Buble Sort**

* Average (and worst) case complexity: O(n^2). Worst case is when the array is sorted backwards.
* Best case time complexity is O(n), when the array is already sorted.
* **References**:

<img src="https://img.shields.io/badge/-Cooming%20Soon-orange">

<a name="BucketSort"></a>
### **Bucket Sort**

* Wort case performance: O(n^2).
* Average performance: O(n + (n^2)/k + k). Where k is the number of buckets. Notes that the average performance is approximate O(n) where n is close to k.
* Worst case space complexity: O(kn). Again k is the number of buckets.
* **References**: [Wikipedia](https://en.wikipedia.org/wiki/Bucket_sort), [Stackabuse](https://stackabuse.com/bucket-sort-in-python/).

<img src="https://img.shields.io/badge/-Cooming%20Soon-orange">

<a name="HeapSort"></a>
### **Heap Sort**

* Average complexity: O(nlogn).
* Worst complexity: O(n).
* **References**: [Wikipedia](https://en.wikipedia.org/wiki/Heapsort), [Programiz](https://www.programiz.com/dsa/heap-sort).

<img src="https://img.shields.io/badge/-Cooming%20Soon-orange">

<a name="CountingSort"></a>
### **Counting Sort**

* Worst case performance: O(n + k). k is the range of non-negative numbers.
* Worst case space-complexity performance: O(n + k). k is the range of non-negative numbers.
* **References**: [Wikipedia](https://en.wikipedia.org/wiki/Counting_sort), [Programiz](https://www.programiz.com/dsa/counting-sort), [Interviewcake](https://www.interviewcake.com/concept/java/counting-sort).

<img src="https://img.shields.io/badge/-Cooming%20Soon-orange">

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
