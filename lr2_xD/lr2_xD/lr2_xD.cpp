#include <iostream>
#include "Header.h"
using namespace std;


int main() {

    setlocale(0, "RUS");

    int rows, columns;

    cout << "Введите размерность матрицы через пробел: ";
    cin >> rows >> columns;
    int** matrix = createMatrix(rows, columns);
    cout << "Введите элементы матрицы A:" << endl;
    fillMatrix(matrix, rows, columns);

    
    return 0;
}