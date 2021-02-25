#include <iostream>

int main() {
    int m, n, a;
    std::cin >> m >> n >> a;

    int** matrix = new int* [m];
    for(int i = 0; i < m; i++) {
        matrix[i] = new int[n];
    }

    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            if(i == j) {
                matrix[i][j] = a;
            } 
            else {
                matrix[i][j] = 0;
            }
        }
    }

    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            std::cout << matrix[i][j] << ' ';
        }
        std::cout << '\n';
    }

    for(int i = 0; i < m; i++) {
        delete[] matrix[i];
    }

    delete[] matrix;

    return 0;
}