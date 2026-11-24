
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
