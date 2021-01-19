#include <iostream>

int stringLenght(char[]);
void reverseArray(char[], const int&);

int main() {

    char arr[] = {"45-*sd\0"};
    const int size = stringLenght(arr);
    reverseArray(arr, size);
    std::cout << arr;

    return 0;
}

int stringLenght(char arr[]) {
    int count = 0;
    //the \0 is the end of char arrays
    for(int i = 0; arr[i] != '\0'; i++) {
        count++;
    }

    return count;
}

void reverseArray(char arr[], const int& size) {
    //The end condition is size/2 because we don't want to swap the elements twice. If we do that the array will be the same as in the beginning
    for(int i = 0; i < size / 2; i++) {
        //swapping the i element with the last element - i
        char temp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = temp;
    }
}