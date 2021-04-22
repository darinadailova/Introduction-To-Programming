#include <iostream>

int sumOfDigitsInNumber(int);

int main() {

    int num1 = 3;
    int num2 = 45;
    int num3 = 765;

    std::cout << sumOfDigitsInNumber(num1) << '\n';
    std::cout << sumOfDigitsInNumber(num2) << '\n';
    std::cout << sumOfDigitsInNumber(num3) << '\n';

    return 0;
}

int sumOfDigitsInNumber(int number) {
    
    int sum = 0;
    while(number > 0) {
        sum += number % 10;
        number = number / 10;
    }

    return sum;
}