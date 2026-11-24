# Kth Ancestor of a Tree Node

![Difficulty](https://img.shields.io/badge/Difficulty-Hard-red)

## Problem

You are given a tree with `n` nodes numbered from `0` to `n - 1` in the form of a parent array `parent` where `parent[i]` is the parent of `ith` node. The root of the tree is node `0`. Find the `kth` ancestor of a given node.

The `kth` ancestor of a tree node is the `kth` node in the path from that node to the root node.

Implement the `TreeAncestor` class:

- TreeAncestor(int n, int[] parent) Initializes the object with the number of nodes in the tree and the parent array.
- int getKthAncestor(int node, int k) return the kth ancestor of the given node node. If there is no such ancestor, return -1.

 

 **Example 1:** 

```
Input
["TreeAncestor", "getKthAncestor", "getKthAncestor", "getKthAncestor"]
[[7, [-1, 0, 0, 1, 1, 2, 2]], [3, 1], [5, 2], [6, 3]]
Output
[null, 1, 0, -1]

Explanation
TreeAncestor treeAncestor = new TreeAncestor(7, [-1, 0, 0, 1, 1, 2, 2]);
treeAncestor.getKthAncestor(3, 1); // returns 1 which is the parent of 3
treeAncestor.getKthAncestor(5, 2); // returns 0 which is the grandparent of 5
treeAncestor.getKthAncestor(6, 3); // returns -1 because there is no such ancestor
```

 

 **Constraints:** 

- 1 <= k <= n <= 5 * 104
- parent.length == n
- parent[0] == -1
- 0 <= parent[i] < n for all 0 < i < n
- 0 <= node < n
- There will be at most 5 * 104 queries.

## Solution

**Language:** C  
**Runtime:** 97 ms (beats 12.50%)  
**Memory:** 73.2 MB (beats 62.50%)  
**Submitted:** 2026-11-24T09:37:58.234Z  

```c

#include <stdlib.h>

#define LOG 16

typedef struct {
    int up[50000][LOG];
} TreeAncestor;

TreeAncestor* treeAncestorCreate(int n, int* parent, int parentSize) {
    TreeAncestor* obj = malloc(sizeof(TreeAncestor));

    if (obj == NULL) {
        return NULL;
    }

    // Store the immediate parent of every node
    for (int i = 0; i < n; i++) {
        obj->up[i][0] = parent[i];
    }

    // Build the binary lifting table
    for (int j = 1; j < LOG; j++) {
        for (int i = 0; i < n; i++) {

            int p = obj->up[i][j - 1];

            if (p == -1) {
                obj->up[i][j] = -1;
            } else {
                obj->up[i][j] = obj->up[p][j - 1];
            }
        }
    }

    return obj;
}

int treeAncestorGetKthAncestor(TreeAncestor* obj, int node, int k) {

    for (int j = 0; j < LOG; j++) {

        if (k & (1 << j)) {

            node = obj->up[node][j];

            if (node == -1) {
                return -1;
            }
        }
    }

    return node;
}

void treeAncestorFree(TreeAncestor* obj) {
    free(obj);
}

```

---

[View on LeetCode](https://leetcode.com/problems/kth-ancestor-of-a-tree-node/)