#include <iostream>

int main() {
    int N, M;
    std::cin >> N >> M;
    int** matrix = new int*[N];
    for(int  i = 0; i < N; i++) {
        matrix[i] = new int[M];
    }

    for(int  i = 0; i < N; i++) {
        for(int j = 0; j < M; j++) {
            std::cin >> matrix[i][j];
        }
    }
    //get the last digit of the number 
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < M; j++) {
            std::cout << matrix[i][j] % 10 << ' ';
        }
        std::cout << '\n';
    }

    for(int i = 0; i < N; i++) {
        delete[] matrix[i];
    }

    delete[] matrix;

    return 0;
}