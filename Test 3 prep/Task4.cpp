#include <iostream>

void sumOfDigitsInNumber(int&);

int main() {

    int num;
    std::cin >> num;
    while(num <= 0) {
        std::cin >> num;
    }

    int num1 = 1;
    int num2 = 24;

    sumOfDigitsInNumber(num);
    sumOfDigitsInNumber(num1);
    sumOfDigitsInNumber(num2);

    std::cout << num1 << '\n';
    std::cout << num2 << '\n';
    std::cout << num << '\n';
    
    return 0;
}

void sumOfDigitsInNumber(int& num) {
    int sum = 0;
    int count = 0;
    while(num > 0) {
        sum += num % 10;
        num = num / 10;
        //with count we can find out how many digits are in the number
        count++;
    }

    num = sum/count;
}