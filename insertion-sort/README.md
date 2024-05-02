# Insertion Sort

## Overview

Insertion Sort is a straightforward comparison-based sorting algorithm. It builds the final sorted array incrementally, making it an efficient choice for small datasets or nearly sorted arrays. The concept is similar to sorting playing cards in your hands.

## Algorithm Description

Insertion Sort works by dividing the array into a sorted and an unsorted part. It iteratively takes elements from the unsorted part and places them in their correct position in the sorted part.

### Steps

1. **Initialize**: Start from the second element, considering the first element as the sorted portion.
2. **Compare and Shift**: Compare the current element with the sorted elements and shift all elements that are greater than the current element to the right.
3. **Insert**: Insert the current element at the correct position.
4. **Repeat**: Continue with the next element until the array is sorted.

## Pseudocode

```plaintext
for i from 1 to length(A)
    key = A[i]
    j = i - 1
    while j >= 0 and A[j] > key
        A[j + 1] = A[j]
        j = j - 1
    A[j + 1] = key
```

## Time Complexity

- **Best Case**: \(O(n)\) - The array is already sorted.
- **Average Case**: \(O(n^2)\)
- **Worst Case**: \(O(n^2)\) - The array is sorted in reverse order.

## Space Complexity

- **Overall**: \(O(1)\) - Insertion sort is an in-place algorithm.

## Advantages

- Simple to understand and implement.
- Efficient for small or nearly sorted datasets.
- Stable, as it does not change the relative order of elements with equal keys.
- In-place sorting, requiring minimal additional space.

## Disadvantages

- Not suitable for large datasets as its average and worst-case time complexity is \(O(n^2)\).
- Performance depends significantly on the initial order of the elements.


## YouTube Explanation Link

[GeeksForGeeks](https://www.youtube.com/watch?v=OGzPmgsI-pQ)