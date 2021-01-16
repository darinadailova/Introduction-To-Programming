#include <iostream>

int sum(const int&, const int&, int[], const int);

int main() {

    int reminder = 3;
    int divider = 6;
    int arr[] = {21, 32, 344, 9, 5, 8};
    std::cout << sum(reminder, divider, arr, 6) << '\n';
   
    return 0;
}

int sum(const int& reminder, const int& divider, int arr[], const int size) {
    
    int sum = 0;
    for(int i = 0; i < size; i++) {
        if(arr[i] % divider == reminder) {
            sum += arr[i];
        }
    }

    return sum;
}