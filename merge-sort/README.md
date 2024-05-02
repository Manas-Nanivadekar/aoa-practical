# Merge Sort

## Overview

Merge Sort is a highly efficient sorting technique and a classic example of the divide-and-conquer strategy. This algorithm divides the unsorted list into \(N\) sublists, each containing one element (a list of one element is considered sorted), then repeatedly merges these sublists to produce new sorted sublists until there is only one sublist remaining.

## Algorithm Description

Merge Sort recursively splits the list into two halves until it can no more be divided. Then, it merges those smaller lists into larger ones while ensuring the resulting list is sorted.

### Steps

1. **Divide**: Split the array into two halves.
2. **Conquer**: Recursively sort each half.
3. **Combine**: Merge the two halves to make a sorted array.

### Pseudocode

```plaintext
function mergeSort(arr[], l, r)
    if l < r
        // Same as (l+r)/2, but avoids overflow for large l and r
        m = l + (r - l) / 2

        // Sort first and second halves
        mergeSort(arr, l, m)
        mergeSort(arr, m + 1, r)

        merge(arr, l, m, r)

function merge(arr[], l, m, r)
    var n1 = m - l + 1
    var n2 = r - m

    // Create temp arrays
    var L = new array of size n1
    var R = new array of size n2

    // Copy data to temp arrays L[] and R[]
    for i = 0 to n1-1
        L[i] = arr[l + i]
    for j = 0 to n2-1
        R[j] = arr[m + 1 + j]

    // Merge the temp arrays back into arr[l..r]
    var i = 0 // Initial index of first subarray
    var j = 0 // Initial index of second subarray
    var k = l // Initial index of merged subarray

    while i < n1 and j < n2
        if L[i] <= R[j]
            arr[k] = L[i]
            i++
        else
            arr[k] = R[j]
            j++
        k++

    // Copy the remaining elements of L[], if there are any
    while i < n1
        arr[k] = L[i]
        i++
        k++

    // Copy the remaining elements of R[], if there are any
    while j < n2
        arr[k] = R[j]
        j++
        k++
```
## Time Complexity

- **Best Case**: \(O(n \log n)\) - The array is always divided in half, and the merge operations take linear time.
- **Average Case**: \(O(n \log n)\)
- **Worst Case**: \(O(n \log n)\) - Consistent performance due to the methodical divide and conquer approach.

Merge Sort always divides the array in half and takes linear time to merge two halves.

## Space Complexity

- **Overall**: \(O(n)\) - Requires additional space proportional to the array size for the temporary arrays.

## Advantages

- **Efficient for Large Data Sets**: Generally performs well on big data sets, making it suitable for sorting large databases.
- **Stable**: Does not change the relative order of elements with equal keys, which is important in certain applications like sorting linked lists.
- **Parallelizable**: Particularly well-suited to modern computing architectures where parallel processing can be utilized to speed up sorting.

## Disadvantages

- **Space Requirement**: Requires additional memory for the temporary arrays, which can be a limitation in environments with limited memory.
- **Slower Compared to Other Sorts**: On smaller arrays, other algorithms like Quick Sort may be faster due to lower overhead.

## Use Cases

Merge Sort is particularly useful in scenarios where quicksort is not practical, such as when auxiliary memory space is more available than time efficiency or when stability is required. It's ideal for applications like external sorting, where data does not fit into RAM and must be sorted in chunks.

## YouTube Explanation Link

- [Abdul Bari - 1](https://www.youtube.com/watch?v=mB5HXBb_HY8)
- [Abdul Bari - 2](https://www.youtube.com/watch?v=ak-pz7tS5DE)