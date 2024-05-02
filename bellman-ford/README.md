# Bellman-Ford Algorithm

## Overview

The Bellman-Ford algorithm is a graph search algorithm that computes the shortest paths from a single source vertex to all of the other vertices in a weighted digraph. It is especially useful for graphs that contain negative weight edges, as it can detect negative weight cycles in the graph.

## Algorithm Description

The Bellman-Ford algorithm iteratively relaxes edges, minimizing the distance to each vertex from the source over multiple passes. It makes this possible even when some edges have negative weights, unlike Dijkstra's algorithm, which can fail in such cases.

### Steps

1. **Initialization**: Initialize the distance to the source vertex to 0 and all other vertices to infinity.
2. **Edge Relaxation**: For each vertex, apply relaxation for all edges. Repeat this process \(V - 1\) times where \(V\) is the number of vertices.
3. **Negative Cycle Check**: After \(V - 1\) iterations, perform one additional iteration to check for negative weight cycles. If a value changes, the graph contains a negative weight cycle.

### Pseudocode

```plaintext
function BellmanFord(graph, source)
    // Step 1: Initialize distances from source to all other vertices as INFINITE
    distance[] = {INFINITY, ..., INFINITY}
    distance[source] = 0

    // Step 2: Relax all edges |V| - 1 times.
    for i from 1 to size(graph.vertices) - 1
        for each edge (u, v) with weight w in graph.edges
            if distance[u] + w < distance[v]
                distance[v] = distance[u] + w

    // Step 3: Check for negative-weight cycles.
    for each edge (u, v) with weight w in graph.edges
        if distance[u] + w < distance[v]
            print "Graph contains negative weight cycle"
            return

    return distance
```

## Advantages
- **Flexibility**: Capable of handling graphs with negative weight edges.
- **Cycle Detection**: Can detect negative weight cycles, which can be important for certain applications like financial arbitrage.

## Disadvantages
- **Performance**: Slower compared to Dijkstra's algorithm on graphs without negative weights due to its higher time complexity.
- **Negative Cycles**: While it can detect negative cycles, it cannot provide shortest paths when a negative cycle is reachable from the source.

## Use Cases
The Bellman-Ford algorithm is particularly useful in networking for routing protocols such as those that need to handle changes in the topology and possibly negative edge weights. It is also used in financial applications to detect opportunities for arbitrage.