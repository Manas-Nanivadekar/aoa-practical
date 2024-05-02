# Knapsack Problem Using Greedy Method

## Overview

The Knapsack Problem is a popular combinatorial optimization problem that aims to fit items of given weights and values into a knapsack of fixed capacity to maximize the total value. The greedy approach to this problem involves a strategy of choosing the most valuable or least weighty items first, depending on the formulation of the problem.

## Problem Description

Given:
- A set of `n` items each with a weight `wi` and a value `vi`.
- A knapsack with a weight capacity `W`.

The objective is to maximize the total value `V` of the packed items without exceeding the weight capacity of the knapsack.

## Greedy Strategy

The greedy approach to the Knapsack problem can be applied using several heuristics, such as:
- **Value-Based**: Select items based on the highest value.
- **Weight-Based**: Select items based on the lightest weight.
- **Density-Based**: Select items based on the highest value-to-weight ratio (value density).

### Commonly Used: Value-to-Weight Ratio

1. **Calculate Value Density**: For each item, determine the ratio of value to weight (`vi/wi`).
2. **Sort Items by Density**: Sort the items by decreasing value density.
3. **Select Items**: Starting from the item with the highest density, add items to the knapsack until adding another item would exceed the weight capacity.

### Pseudocode

```plaintext
function greedyKnapsack(items, W)
    // items: array of items, each item is a pair (value, weight)
    // W: maximum capacity of the knapsack

    // Step 1: Calculate value-to-weight ratio and sort items by this ratio
    sort items by (item.value / item.weight) in descending order

    totalValue = 0
    totalWeight = 0

    for each item in items
        if totalWeight + item.weight <= W
            totalValue += item.value
            totalWeight += item.weight
        else
            break

    return totalValue
```
## Time Complexity

- **Sorting Items**: \(O(n \log n)\) - Due to the sorting step.
- **Selecting Items**: \(O(n)\) - For iterating through the sorted list.

Overall, the time complexity of the Greedy Knapsack algorithm is \(O(n \log n)\) due to the sorting step being the bottleneck.

## Space Complexity

- **Overall**: \(O(1)\), assuming the sort is done in-place.

## Advantages

- **Simplicity**: The greedy method is straightforward and easy to implement.
- **Speed**: Efficient for scenarios where an approximate solution is acceptable.

## Disadvantages

- **Not Always Optimal**: The greedy approach does not guarantee an optimal solution for the Knapsack problem.
- **Problem Specific**: The effectiveness of the approach heavily depends on the nature of the items and the capacity relative to their weights and values.

## Use Cases

The Greedy Knapsack is suitable for applications where a near-optimal solution is sufficient and computational resources are limited, such as in real-time systems or large-scale problems where exact solutions are computationally infeasible.

## YouTube Explanation Link

- [Abdul Bari](https://www.youtube.com/watch?v=oTTzNMHM05I)