#include <iostream>

void printRectangle(int, int, char);

int main() {
    int N = 5;
    int M = 8;
    char toPrint = '*';
    printRectangle(N, M, toPrint);

    return 0;
}

void printRectangle(int N, int M, char toPrint) {
    const int NMAX = 25;
    const int MMAX = 80;

    for(int i = 0; i < (NMAX - N) / 2; i++) {
        std::cout << '\n';
    }

    for(int i = 0; i < N; i++) {
        for(int j = 1; j < (MMAX - M) / 2; j++) {
            std::cout << ' ';
        }

        for(int j = 0; j < M; j++) {
            std::cout << toPrint;
        }
        std::cout << '\n';
    }

    for(int i = 0; i < (NMAX - N) / 2; i++) {
        std::cout << '\n';
    }
}