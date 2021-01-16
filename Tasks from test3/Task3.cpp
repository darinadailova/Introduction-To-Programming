#include <iostream>

double sumOfElementsWithOddIndex(double[], const int&);

int main() {

    double arr1[1] = {2.3};
    double arr2[3] = {4.65, 6.2, 1.33};
    int size1 = 1;
    int size2 = 3;
    double arr[50];

    std::cout << "How many numbers the array will have?\n" << std::endl;
    int size;
    std::cin >> size;
    std::cout << "Please enter the elements of the array: \n";
    for(int i = 0; i < size; i++) {
        std::cin >> arr[i];
    }

    std::cout << sumOfElementsWithOddIndex(arr1, size1) << '\n';    
    std::cout << sumOfElementsWithOddIndex(arr2, size2) << '\n';
    std::cout << sumOfElementsWithOddIndex(arr, size) << '\n';

    return 0;
}

double sumOfElementsWithOddIndex(double arr[], const int& size) {
    double sum = 0;
    for(int i = 1; i < size; i += 2) {
        sum += arr[i];
    }
  
    return sum;
}