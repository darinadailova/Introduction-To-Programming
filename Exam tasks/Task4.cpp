#include <iostream>

int sumOfElementsAboveMainDiagonal(const int& N, int arr[][100]) {
    
    int sum = 0;
    for(int i = 0; i < N - 1; i++) {
        for(int j = i + 1; j < N; j++) {
            sum += arr[i][j];
        }
    }

    return sum;
}

int main() {

    const int N = 5;
    int arr[N][100] = {{1, 2, 3, 4, 5}, {1, 2, 3, 4, 5}, {1, 2, 3, 4, 5}, {1, 2, 3, 4, 5}, {1, 2, 3, 4, 5}};

    std::cout << sumOfElementsAboveMainDiagonal(N, arr) << '\n';

    return 0;
}