#include<iostream>
#include<climits>

int findMaxNumberInArray(int[], int&);

int main() {

    std::cout << "How many numbers the array will have?" << std::endl;
    int N;
    std::cin >> N;
    std::cout << "Okey. Enter the numbers now: " << std::endl;
    int input;
    int arr[100];

    for(int i = 0; i < N; i++) {
        std::cin >> input;
        while(input <= 0) {
            std::cin >> input;
        }
        arr[i] = input;
    }

    std::cout << "The biggest number in the array is: " << findMaxNumberInArray(arr, N) << '\n';

    return 0;
}

int findMaxNumberInArray(int arr[], int& N) {
    
    int maxNum = INT_MIN;
    for(int i = 0; i < N; i++) {
        if(arr[i] > maxNum) {
            int temp = maxNum;
            maxNum = arr[i];
            arr[i] = temp;
        }
    }

    return maxNum;
}