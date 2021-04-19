#include <iostream>

int main() {
    //There are several ways to qualify pointers using const

    //1. Pointers to constants (example: const int* ptr)
    int num1 = 10, num2 = 20;
    const int* ptr = &num1;
    //The data pointed to by the pointers is constant and cannot be changed.
    *ptr = 30; // error
    //The pointer itself can change and point somewhere else.
    ptr = &num2; //correct

    //2. Constant pointers (example: int* const ptr)
    int* const ptr2 = &num1;
    //The data pointed to by the pointers can be changed.
    *ptr2 = 30; // correct
    //The pointer itself cannot change and point somewhere else.
    ptr2 = &num2; //error


    //3. Constant pointers to constants (example: const int *const ptr)
    const int* const ptr3 = &num1;
    //The data pointed to by the pointer is constant and cannot be changed.
    *ptr3 = 30; // error
    // The pointer itself cannot change and point somewhere else.
    ptr3 = &num2;

    return 0;
}
