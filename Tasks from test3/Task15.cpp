#include <iostream>

int findSumOfTheElementsOnTheMainDiagonal(int arr[4][4], const int N) {
    int sum = 0;
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            if(i == j) {
                sum += arr[i][j];
            }
        }
    }

    return sum;
}

int findSumOfTheElementsOnSecondaryDiagonal(int arr[4][4], const int N) {
    int sum = 0;
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            if(i + j == N - 1) {
                sum += arr[i][j];
            }
        }
    }

    return sum;
}

int findSumOfTheElementsAboveSecondaryDiagonal(int arr[4][4], const int N) {
    int sum = 0;
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N - i - 1; j++) {
            sum += arr[i][j];
        }
    }

    return sum;
}

int findSumOfTheElementsBelowSecondaryDiagonal(int arr[4][4], const int N) {
    int sum = 0;
    for(int i = 1; i < N;i++) {
        for(int j = N - 1; j > N - i - 1; j--) {
            sum += arr[i][j];
        }
    }

    return sum;
}

int findSumOfTheElementsBelowMainDiagonal(int arr[4][4], const int N) {
    int sum = 0;
    for(int i = 1; i < N;i++) {
        for(int j = 0; j < i; j++) {
            sum += arr[i][j];
        }
    }

    return sum;
}

int findSumOfTheElementsAboveMainDiagonal(int arr[4][4], const int N) {
    int sum = 0;
    for(int i = 0; i < N; i++) {
        for(int j = i + 1; j < N; j++) {
            sum += arr[i][j];
        }
    }

    return sum;
}

int main() {

    int N = 4;
    int arr[4][4] = {{1, 2, 3, 4}, //
                    {2, 4, 7, 4}, // 10
                    {4, 6, 2, 5}, // 20 21 
                    {3, 7, 5, 3}};// 30 31 32

    std::cout << findSumOfTheElementsOnTheMainDiagonal(arr, N) << '\n';
    std::cout << findSumOfTheElementsOnSecondaryDiagonal(arr, N) << '\n';
    std::cout << findSumOfTheElementsAboveSecondaryDiagonal(arr, N) << '\n';
    std::cout << findSumOfTheElementsBelowSecondaryDiagonal(arr, N) << '\n';
    std::cout << findSumOfTheElementsBelowMainDiagonal(arr, N) << '\n';
    std::cout << findSumOfTheElementsAboveMainDiagonal(arr, N) << '\n';

    return 0;
}