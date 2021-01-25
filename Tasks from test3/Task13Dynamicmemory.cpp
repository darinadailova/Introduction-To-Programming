#include <iostream>

int stringLength(char[]);
char* reverseArray(char[], int);

int main() {

    char arr[] = "+23-3*";
    int size = stringLength(arr);
    char* array;
    array = reverseArray(arr, size);
    std::cout << array;
       
    delete[] array;

    return 0;
}

char* reverseArray(char arr[], int size) {
    char* output = new char[size];
    for(int i = 0; i < size; i++) {
        output[i] = arr[size - 1 - i];
    }
    output[size] = '\0';
    
    return output;
}

int stringLength(char arr[]) {
    int count = 0;
    for(int i = 0; arr[i] != '\0'; i++) {
        count++;
    }

    return count;
}
