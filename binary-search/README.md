# Binary Search Using Divide and Conquer

## Overview

Binary Search is a highly efficient search algorithm used for finding an element's position in a sorted array. By repeatedly dividing the search interval in half, this algorithm minimizes the number of comparisons needed to locate the target value, operating with a time complexity of \(O(\log n)\).

## Algorithm Description

Binary Search involves the following steps:

1. **Initialize**: Start with the entire array as your search range.
2. **Divide**: Determine the middle index of the current range. If the middle element matches the search key, the search is complete.
3. **Conquer**: If the key is less than the middle element, narrow the search to the left half of the array. If the key is greater, narrow it to the right half.
4. **Repeat**: Repeat the process with the new half until the key is found or the subarray is reduced to zero size.
5. **Terminate**: If no elements are left to check, the key is not in the array.

### Pseudocode

```plaintext
function binarySearch(arr, left, right, key)
    if right >= left
        mid = left + (right - left) / 2

        // Check if the key is present at mid
        if arr[mid] == key
            return mid

        // If key is smaller than mid, then it is in the left subarray
        if arr[mid] > key
            return binarySearch(arr, left, mid - 1, key)

        // Else the key can only be in the right subarray
        return binarySearch(arr, mid + 1, right, key)

    // Element is not present in the array
    return -1
```
## Time Complexity

- **Best Case**: \(O(1)\) - Occurs when the middle element of the array is the desired key.
- **Average and Worst Case**: \(O(\log n)\) - Each iteration approximately halves the number of elements, leading to a logarithmic number of steps.

## Space Complexity

- **Iterative Implementation**: \(O(1)\)
- **Recursive Implementation**: \(O(\log n)\) - Due to recursion stack.

## Advantages

- **Efficient**: Significantly faster than linear search, especially for large datasets.
- **Minimal Reads**: Minimizes the number of reads from the array, which can be beneficial if reads are expensive operations.

## Disadvantages

- **Sorted Array Required**: Only works effectively on sorted arrays.
- **Handling Duplicates**: Extra steps may be required to handle duplicates or return all indices of a repeated value.
- **Overhead of Sorting**: If the dataset is not already sorted, the required initial sorting can introduce significant overhead.

## Use Cases

Binary Search is particularly effective for "read-heavy" applications where the data remains static, making it ideal for lookup operations in database indexing, searching in configuration files, or internal operations in other algorithms that require sorted arrays.

## YouTube Explanation Link

- [Abdul Bari - 1](https://www.youtube.com/watch?v=C2apEw9pgtw)
- [Abdul Bari - 2](https://www.youtube.com/watch?v=uEUXGcc2VXM)