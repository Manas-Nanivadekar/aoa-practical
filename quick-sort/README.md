# Quick Sort Using Divide and Conquer

## Overview

Quick Sort is a highly efficient sorting algorithm famous for its utilization of the divide-and-conquer strategy. This algorithm achieves high performance by partitioning the array into smaller subarrays based on a pivot element, which is then placed in its sorted position. The algorithm recursively sorts the subarrays on either side of the pivot.

## Algorithm Description

Quick Sort operates by selecting a 'pivot' element from the array and partitioning the other elements into two subarrays, according to whether they are less than or greater than the pivot. This can be done through various methods, such as selecting the first, middle, or last element, or even choosing a random element as the pivot.

### Steps

1. **Choose a Pivot**: Typically, the pivot can be the first element, the last element, the middle element, or a random element.
2. **Partitioning**: Rearrange the array so that all elements with values less than the pivot come before it and all elements with values greater than the pivot come after it. The pivot is then in its final position.
3. **Recursive Sort**: Recursively apply the above steps to the sub-array of elements with smaller values and the sub-array of elements with greater values.

### Pseudocode

```plaintext
function quickSort(arr, low, high)
    if low < high
        pi = partition(arr, low, high)
        quickSort(arr, low, pi - 1)  // Recursively sort elements before partition
        quickSort(arr, pi + 1, high) // Recursively sort elements after partition
function partition(arr, low, high)
    pivot = arr[high]  // choosing the last element as pivot
    i = (low - 1)       // Index of smaller element

    for j = low to high-1
        if arr[j] <= pivot
            i++
            swap arr[i] with arr[j]

    swap arr[i + 1] with arr[high]
    return (i + 1)
```
## Time Complexity

- **Best Case**: \(O(n \log n)\) - Occurs when the pivot divides the list into two equal halves.
- **Average Case**: \(O(n \log n)\)
- **Worst Case**: \(O(n^2)\) - Occurs when the pivot ends up being the smallest or largest element every time, leading to unbalanced partitions.

## Space Complexity

- **Overall**: \(O(\log n)\) - Quick Sort is a recursive algorithm, and this space complexity accounts for the stack space used in recursion.

## Advantages

- **Efficient**: On average, it performs better than other \(O(n^2)\) algorithms like Bubble Sort and Selection Sort.
- **In-Place Sorting**: Requires minimal additional memory as it sorts the array in place.

## Disadvantages

- **Unpredictable**: The choice of the pivot affects the efficiency of the sorting, and poor pivot choice can lead to significantly increased time complexity.
- **Not Stable**: It does not preserve the order of equivalent elements as it might change their relative positions during partitioning.

## Use Cases

Quick Sort is ideally used in systems where quick sorting is favored and space is not a constraint for stack operations. It is particularly useful in high-performance tasks where average case efficiency is more critical than the worst-case performance.


## YouTube Explanation Link

- [Abdul Bari - 1](https://www.youtube.com/watch?v=7h1s2SojIRw)
- [Abdul Bari - 2](https://www.youtube.com/watch?v=-qOVVRIZzao)