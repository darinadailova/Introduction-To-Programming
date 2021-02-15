#include <iostream>

int sumOfElementsAboveMainDiagonal(int&, int**);

int main() {

    int N;
    std::cin >> N;

    int** arr = new int*[N];
    for(int i = 0; i < N; i++) {
        arr[i] = new int[N];
    }

    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            std::cin >> arr[i][j];
        }
    }

    std::cout << sumOfElementsAboveMainDiagonal(N, arr) << '\n';
    
    for(int i = 0; i < N; i++) {
        delete[] arr[i];
    }
 
    delete[] arr;

    return 0;
}

int sumOfElementsAboveMainDiagonal(int& N, int** arr) {
    
    int sum = 0;
    for(int i = 0; i < N - 1; i++) {
        for(int j = i + 1; j < N; j++) {
            sum += arr[i][j];
        }
    }

    return sum;
}