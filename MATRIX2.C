#include <stdio.h>
#include <stdlib.h>

// Function to allocate memory for a matrix
int **allocateMatrix(int rows, int columns) {
    int **matrix = (int **)malloc(rows * sizeof(int *));
    for (int i = 0; i < rows; i++) {
        matrix[i] = (int *)malloc(columns * sizeof(int));
    }
    return matrix;
}

// Function to free memory allocated for a matrix
void freeMatrix(int **matrix, int rows) {
    for (int i = 0; i < rows; i++) {
        free(matrix[i]);
    }
    free(matrix);
}

// Function to read matrix elements from the user
void readMatrix(int **matrix, int rows, int columns) {
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            printf("Element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
}

// Function to display a matrix
void displayMatrix(int **matrix, int rows, int columns) {
    printf("Matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

// Function to find the product of two matrices
void multiplyMatrices(int **matrix1, int rows1, int columns1, int **matrix2, int rows2, int columns2, int **result) {
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < columns2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < columns1; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
}

int main() {
    int rows1, columns1, rows2, columns2;

    // Get the dimensions of the first matrix from the user
    printf("Enter the number of rows for the first matrix: ");
    scanf("%d", &rows1);
    printf("Enter the number of columns for the first matrix: ");
    scanf("%d", &columns1);

    // Get the dimensions of the second matrix from the user
    printf("Enter the number of rows for the second matrix: ");
    scanf("%d", &rows2);
    printf("Enter the number of columns for the second matrix: ");
    scanf("%d", &columns2);

    // Check if matrix multiplication is possible
    if (columns1 != rows2) {
        printf("Matrix multiplication is not possible with the given dimensions.\n");
        return 1; // Exit with an error code
    }

    // Allocate memory for matrices
    int **matrix1 = allocateMatrix(rows1, columns1);
    int **matrix2 = allocateMatrix(rows2, columns2);
    int **result = allocateMatrix(rows1, columns2);

    // Read matrix elements from the user
    printf("For the first matrix:\n");
    readMatrix(matrix1, rows1, columns1);

    printf("For the second matrix:\n");
    readMatrix(matrix2, rows2, columns2);

    // Display the input matrices
    printf("Input matrices:\n");
    displayMatrix(matrix1, rows1, columns1);
    displayMatrix(matrix2, rows2, columns2);

    // Multiply matrices and display the result
    multiplyMatrices(matrix1, rows1, columns1, matrix2, rows2, columns2, result);

    printf("Product of the matrices:\n");
    displayMatrix(result, rows1, columns2);

    // Free allocated memory
    freeMatrix(matrix1, rows1);
    freeMatrix(matrix2, rows2);
    freeMatrix(result, rows1);

    return 0;
}
