#include <iostream>
#include <vector>

int main() {
    //the pointer and the variable should be of the same type (for example right now they are int)
    int num = 10;
    int* ptr = &num;

    //to get the value of the variable that the pointer point to you have use * (dereferencing a pointer)
    std::cout << *ptr << '\n';//10

    //when the value of num changes the value of *ptr has to change too and vice versa
    num = 20;
    std::cout << *ptr << ' ' << num << '\n';//20

    *ptr = 30;
    std::cout << num << ' ' << *ptr << '\n';//30

    std::vector<std::string> data = {"Darina", "Dailova"};
    std::vector<std::string>* ptr2 = &data;

    //there are two ways to get the value of an element in vector from a pointer to the vector
    std::cout << ptr2->at(0) << ' ' << (*ptr2).at(1) << '\n';

    return 0;
}