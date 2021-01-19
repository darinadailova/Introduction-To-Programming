#include <iostream>

int stringLenght(char[]);
char* reverseArray(char[], int);

int main() {

    char arr[] = {"+23-3*\0"};
    int size = stringLenght(arr);
    char* output;
    output = reverseArray(arr, size);
    for(int i = 0; i < size; i++) {
        std::cout << output[i] << ' ';
    }
       
    delete[] output;

    return 0;
}

int stringLenght(char arr[]) {
    int count = 0;
    for(int i = 0; arr[i] != '\0'; i++) {
        count++;
    }

    return count;
}

char* reverseArray(char arr[], int size) {
    char* output = new char[size];
    for(int i = 0; i < size; i++) {
        output[i] = arr[size - 1 - i];
    }

    return output;
}