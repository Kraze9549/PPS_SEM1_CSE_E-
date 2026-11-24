
#include <stdlib.h>

int** matrixReshape(int** mat, int matSize, int* matColSize,
                    int r, int c, int* returnSize,
                    int** returnColumnSizes) {

    int m = matSize;
    int n = matColSize[0];

    // Check whether reshaping is possible
    if (m * n != r * c) {
        *returnSize = m;
        *returnColumnSizes = (int*)malloc(m * sizeof(int));

        for (int i = 0; i < m; i++) {
            (*returnColumnSizes)[i] = n;
        }

        return mat;
    }

    // Allocate the reshaped matrix
    int** result = (int**)malloc(r * sizeof(int*));
    *returnColumnSizes = (int*)malloc(r * sizeof(int));

    for (int i = 0; i < r; i++) {
        result[i] = (int*)malloc(c * sizeof(int));
        (*returnColumnSizes)[i] = c;
    }

    // Copy elements in row-traversing order
    for (int i = 0; i < m * n; i++) {
        int oldRow = i / n;
        int oldCol = i % n;

        int newRow = i / c;
        int newCol = i % c;

        result[newRow][newCol] = mat[oldRow][oldCol];
    }

    *returnSize = r;
    return result;
}
