#include<iostream>
#include<climits>

int main() {
    int N;
    std::cin >> N;
    int arr[50];
    for(int i = 0; i < N; i++) {
        std::cin >> arr[i];
    }

    int maxNum = INT_MIN;
    for(int i = 0; i < N; i++) {
        if(arr[i] > maxNum) {
            int temp = maxNum;
            maxNum = arr[i];
            arr[i] = temp;
        }
    }

    std::cout << "The address of " << maxNum << " is " << &maxNum << '\n';

    return 0;
}