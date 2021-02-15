#include <iostream>

int** transposedMatrix(int&, int**);

int main() {
    
    int N;
    std::cin >> N;

    int** A = new int*[N];
    for(int i = 0; i < N; i++) {
        A[i] = new int[N];
    }

    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            std::cin >> A[i][j];
        }
    }

    A = transposedMatrix(N, A);

    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            std::cout << A[i][j] << ' ';
        }
        std::cout << '\n';
    }

    for(int i = 0; i < N; i++) {
        delete[] A[i];
    }
 
    delete[] A;

    return 0;
}

int** transposedMatrix(int& N, int** matrix) {
    int** At = new int*[N];
    for(int i = 0; i < N; i++) {
        At[i] = new int[N];
    }
    //transpose matrix
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            At[j][i] = matrix[i][j];
        }
    }

    return At;
}