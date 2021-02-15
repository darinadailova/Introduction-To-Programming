#include <iostream>

int AnalyzeArray(int[], int);

int main() {
    int arr[] = {1, 3, 0, 0, 4};
    std::cout << AnalyzeArray(arr, 5) << '\n';

    return 0;
}

int AnalyzeArray(int arr[], int l) {
    int half = l / 2;
    int sum1 = 0;
    int sum2 = 0;
    
    for(int i = 0; i < half; i++) {
        sum1 += arr[i];
    }
    for(int i = l - 1; i > half; i--) {
        sum2 += arr[i];
    }

    if(sum1 == sum2) {
        return 1;
    }
    return 0;
}