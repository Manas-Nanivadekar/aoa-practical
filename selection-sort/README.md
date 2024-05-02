# Selection Sort

## Overview

Selection Sort is a simple, intuitive comparison-based sorting algorithm. It divides the input list into two parts: a sorted sublist built up from left to right at the front of the list, and a sublist of the remaining unsorted items that occupy the rest of the list. During each pass, the algorithm selects the smallest (or largest, depending on sorting order) item from the unsorted sublist and moves it to the end of the sorted sublist.

## Algorithm Description

The algorithm works as follows:

1. **Find the Minimum**: Start by assuming the first element is the minimum.
2. **Compare**: Go through the rest of the list, and if a smaller element is found, designate it as the new minimum.
3. **Swap**: Swap the minimum element found with the first unsorted position.
4. **Repeat**: Move the sublist boundaries one element to the right, and repeat until the entire array is sorted.

## Pseudocode

```plaintext
procedure selectionSort( A : array of items )
   n = length(A)
   for i = 0 to n - 1
   {
       /* set current element as minimum*/
       min = i    
      
       /* check the element to be minimum */
       for j = i+1 to n 
       {
           if A[j] < A[min] then
               min = j;
       }

       /* swap the minimum element with the current element*/
       if indexMin != i  then
           swap A[min] and A[i]
   end for
end procedure
```

## Time Complexity

- **Best Case**: \(O(n^2)\) - Occurs when the minimum element is always at the beginning during each iteration.
- **Average Case**: \(O(n^2)\)
- **Worst Case**: \(O(n^2)\) - Occurs when the minimum element is always at the end during each iteration.

Selection Sort's time complexity is quadratic for all cases because it always scans the entire remaining sublist to find the minimum element, regardless of the initial order of the elements.

## Space Complexity

- **Overall**: \(O(1)\)

Selection Sort is an in-place sorting algorithm, which means it does not require any additional storage aside from temporary variables for swapping.

## Advantages

- **Simplicity**: Easy to understand and implement.
- **Memory Efficiency**: Since it's an in-place sort, it requires no additional storage.
- **Performance**: Performs well on small lists.

## Disadvantages

- **Inefficient on Large Lists**: Due to its \(O(n^2)\) time complexity, it becomes inefficient for larger lists compared to more advanced algorithms like quicksort, mergesort, or heapsort.
- **Not Stable**: Does not maintain the relative order of items with equal keys.
- **Not Adaptive**: The run time is the same whether the input array is already sorted or in the worst possible arrangement.

Selection Sort is particularly noted for its simplicity and has performance advantages over more complicated algorithms in certain scenarios, especially where auxiliary memory is limited.

## YouTube Explanation Link

[GeeksForGeeks](https://www.youtube.com/watch?v=xWBP4lzkoyM)