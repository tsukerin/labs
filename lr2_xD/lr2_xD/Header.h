#include<conio.h>
#include<math.h>
#include<stdlib.h>
#include <iostream>
using namespace std;
int** createMatrix(int rows, int columns);
void deleteMatrix(int** matrix, int rows);
void fillMatrix(int** matrix, int rows, int columns);
void printMatrix(int** matrix, int rows, int columns);
int findMaxSum(int** matrix, int n, int m);
int findMinSum(int** matrix, int n, int m);
int** createMatrix(int rows, int columns) {
    int** matrix = new int* [rows];

    for (int i = 0; i < rows; i++) {
        matrix[i] = new int[columns];
    }

    return matrix;
}

void deleteMatrix(int** matrix, int rows) {
    for (int i = 0; i < rows; i++) {
        delete[] matrix[i];
    }

    delete[] matrix;
}

void fillMatrix(int** matrix, int rows, int columns) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cout << "A[" << i + 1 << j + 1 << "]= ";
            cin >> matrix[i][j];
        }
    }
}

void printMatrix(int** matrix, int rows, int columns) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cout << matrix[i][j] << " ";
        }

        cout << endl;
    }
}


