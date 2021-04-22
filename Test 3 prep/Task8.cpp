#include <iostream>

void reverseNum(int&);

int main() {

    int number = 63485;
    reverseNum(number);
    std::cout << number << '\n';

    return 0;
}

void reverseNum(int& number) {
    
    int reversedNumber = 0;
    int reminder;
    while(number != 0) {
        reminder = number % 10;
        reversedNumber = reversedNumber * 10 + reminder;
        number = number / 10;
    }

    number = reversedNumber;
}