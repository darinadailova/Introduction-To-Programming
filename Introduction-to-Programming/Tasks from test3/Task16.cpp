#include <iostream>

int** function(const int& size) {
    int** a = new int*[size];
    for(int i = 0; i < size; i++) {
        a[i] = new int[size];
    }
    for(int i = 0; i < size; i++) {
        for(int j = 0; j < size; j++) {
            a[i][j] = 2;
        }
    }

    return a;
}

int main() {
    int** arr;
    arr = function(2);
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            std::cout << arr[i][j] << ' ';
        }
        std::cout << '\n';
    }

    for(int i = 0; i < 2; i++) {
        delete[] arr[i];
    }
 
    delete[] arr;

    return 0;
}