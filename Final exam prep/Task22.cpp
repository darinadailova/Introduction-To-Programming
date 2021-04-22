#include <iostream>

bool AnalyzeArr(int[], int);

int main() {
    int arr[] = {0, 1, 6, 6};
    std::cout << AnalyzeArr(arr, 5) << '\n';

    return 0;
}

bool AnalyzeArr(int arr[], int length) {
    int count = 0;
    for(int i = 0; i < length; i++) {
        if(arr[i] == i) {
            count++;
        }
    }
    if(count >= 2) {
        return true;
    }
    return false;
}