#include <stdio.h>

// Function to input matrix elements
void inputMatrix(int matrix[][100], int rows, int cols) {
    printf("Enter matrix elements:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Enter element at position (%d, %d): ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
}

// Function to print matrix elements
void printMatrix(int matrix[][100], int rows, int cols) {
    printf("Matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

// Function to add two matrices
void addMatrices(int A[][100], int B[][100], int result[][100], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = A[i][j] + B[i][j];
        }
    }
}

// Function to subtract one matrix from another
void subtractMatrices(int A[][100], int B[][100], int result[][100], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = A[i][j] - B[i][j];
        }
    }
}

int main() {
    int rowsA, colsA, rowsB, colsB;

    // Input dimensions of the first matrix
    printf("Enter dimensions of matrix A (rows and columns): ");
    scanf("%d %d", &rowsA, &colsA);

    // Input dimensions of the second matrix
    printf("Enter dimensions of matrix B (rows and columns): ");
    scanf("%d %d", &rowsB, &colsB);

    // Verify dimensions
    if (rowsA != rowsB || colsA != colsB) {
        printf("Matrices are not of the same dimensions. Addition and subtraction are not possible.\n");
        return 1; // Exit with an error code
    }

    int matrixA[100][100], matrixB[100][100], resultAdd[100][100], resultSub[100][100];

    // Input elements of the matrices
    inputMatrix(matrixA, rowsA, colsA);
    inputMatrix(matrixB, rowsB, colsB);

    // Display matrices
    printMatrix(matrixA, rowsA, colsA);
    printf("\n");
    printMatrix(matrixB, rowsB, colsB);
    printf("\n");

    // Add matrices
    addMatrices(matrixA, matrixB, resultAdd, rowsA, colsA);

    // Subtract matrices
    subtractMatrices(matrixA, matrixB, resultSub, rowsA, colsA);

    // Display results
    printf("Addition of matrices:\n");
    printMatrix(resultAdd, rowsA, colsA);
    printf("\n");

    printf("Subtraction of matrices:\n");
    printMatrix(resultSub, rowsA, colsA);

    return 0; // Exit successfully
}
