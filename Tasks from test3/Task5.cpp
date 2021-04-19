#include <iostream>

int sumOfEvenNumbersInArray(int[], const int&);

int main() {

    int arr1[1] = {3};
    int arr2[3] = {4, 3, 6};
    int arr[50];
    int size;
    std::cin >> size;
    for(int i = 0; i < size; i++) {
        std::cin >> arr[i];
    }
    
    std::cout << sumOfEvenNumbersInArray(arr1, 1) << '\n';
    std::cout << sumOfEvenNumbersInArray(arr2, 3) << '\n';
    std::cout << sumOfEvenNumbersInArray(arr, size) << '\n';
    
    return 0;
}

int sumOfEvenNumbersInArray(int arr[], const int& size) {
    
    int sum = 0;
    for(int i = 0; i < size; i++) {
        if(arr[i] % 2 == 0) {
            sum += arr[i];
        }
    }

    return sum;
}