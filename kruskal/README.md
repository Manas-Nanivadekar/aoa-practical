# Kruskal's Algorithm

## Overview

Kruskal's Algorithm is a popular minimum spanning tree (MST) algorithm that finds the edge subset of a graph that connects all vertices with the minimal total edge weight. This algorithm belongs to a family of algorithms designed for network design, ensuring that there are no cycles and that the graph remains connected with the minimal possible total weight.

## Algorithm Description

Kruskal's algorithm treats every node as a separate tree and merges these trees, starting with the least expensive edge, ensuring no cycles are formed, to the most expensive one, until all vertices are connected.

### Steps

1. **Sort All Edges**: First, sort all the edges in non-decreasing order of their weight.
2. **Initialize Forest**: Create a forest (a set of trees), where each vertex in the graph is a separate tree.
3. **Merge Trees**: Add edges to the forest, combining two trees into a single tree at each step, until every vertex is connected without any cycles.

### Pseudocode

```plaintext
function Kruskal(G)
    A = ∅
    foreach v ∈ G.V
        MAKE-SET(v)
    foreach (u, v) ∈ G.E ordered by weight(u, v), increasing
        if FIND-SET(u) ≠ FIND-SET(v)
            A = A ∪ {(u, v)}
            UNION(u, v)
    return A
```

## YouTube Explanation Link

- [Abdul Bari](https://www.youtube.com/watch?v=4ZlRH0eK-qQ)