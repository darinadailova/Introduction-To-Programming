#include <iostream>

int* sortArray(int[], int[], const int&, const int&);

int main() {

    int arr1[] = {1, 4, 6, 8, 9, 44, 99, 100};
    int arr2[] = {2, 3, 4, 6, 12, 17, 18};
    
    int size1 = sizeof(arr1) / sizeof(int);
    int size2 = sizeof(arr2) / sizeof(int);

    int* arr = sortArray(arr1, arr2, size1, size2);
    
    for(int i = 0; i < size1 + size2; i++) {
        std::cout << arr[i] << ' ';
    }

    delete[] arr;
    

    return 0;
}

int* sortArray(int arr1[], int arr2[], const int& size1, const int& size2) {

    const int size = size1 + size2;
    int* arr = new int[size];
    int k = 0;
    //push all elemnts from arr1 to arr
    for(int i = 0; i < size1; i++) {
        arr[k] = arr1[i];
        k++;
    }
    //push all elements from arr2 to arr
    for(int i = 0; i < size2; i++) {
        arr[k] = arr2[i];
        k++;
    }
    //sort arr
    for(int i = 0; i < size - 1; i++) {
        for(int j = i + 1; j < size; j++) {
            if(arr[i] > arr[j]) {
            int temp = arr[j];
            arr[j] = arr[i];
            arr[i] = temp;
            }
        }
    }
      
    return arr;
}