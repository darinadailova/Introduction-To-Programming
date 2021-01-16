#include <iostream>

int findHowManyTimesADigitisContainedInNum(const int&, int&);

int main() {

    int digit = 5;
    int number = 454643;
    std::cout << findHowManyTimesADigitisContainedInNum(digit, number) << '\n';

    return 0;
}

int findHowManyTimesADigitisContainedInNum(const int& digit, int& number) {
    int count = 0;
    while(number > 0) {
        if(digit == number % 10) {
            count++;
        }
        number = number / 10;
    }

    return count;
}