
/**
 * Return an array of arrays.
 * The returned array must be malloced.
 * Note: The caller will free the returned array.
 */
int** transpose(int** matrix, int matrixSize, int* matrixColSize,
                int* returnSize, int** returnColumnSizes) {

    int m = matrixSize;
    int n = matrixColSize[0];

    // Allocate memory for the transposed matrix
    int** result = (int**)malloc(n * sizeof(int*));

    *returnColumnSizes = (int*)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++) {
        result[i] = (int*)malloc(m * sizeof(int));
        (*returnColumnSizes)[i] = m;
    }

    // Transpose: swap row and column positions
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            result[j][i] = matrix[i][j];
        }
    }

    *returnSize = n;

    return result;
}
