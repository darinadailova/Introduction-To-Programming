#include <iostream>

int main() {
    int N;
    std::cin >> N;
    int* arr = new int[N];

    for(int i = 0; i < N; i++) {
        int temp;
        std::cin >> temp;
        arr[i] = temp;
    }
    
    for(int i = 0; i < N; i++) {
        std::cout << arr[i];
        if(i != N - 1) {
            std::cout << ", ";
        }
    }
    
    delete[] arr;

    return 0;
}