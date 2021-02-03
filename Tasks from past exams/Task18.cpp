//Да се напише функция на С++, със сигнатура double calculateMatrix(int** matr, int m), която приема като параметър квадратна матрица 
//с размерност m и връща като резултат сумата на елементите които са по двата и диагонала.
#include <iostream>

double calculateMatrix(int**, int);

int main() {
    int m;
    std::cin >> m;
    int** arr = new int*[m];
    for(int i = 0; i < m; i++) {
        arr[i] = new int[m];
    }

    for(int i = 0; i < m; i++) {
        for(int j = 0; j < m; j++) {
            std::cin >> arr[i][j];
        }
    }

    std::cout << calculateMatrix(arr, m) << '\n';

    for(int i = 0; i < m; i++) {
        delete[] arr[i];
    }

    delete[] arr;

    return 0;
}

double calculateMatrix(int** matr, int m) {
    int sum = 0;
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < m; j++) {
            if(i == j) {
                sum += matr[i][j];
            }
            if(i + j == m - 1) {
                sum += matr[i][j];
            }
        }
    }
    return sum;
}