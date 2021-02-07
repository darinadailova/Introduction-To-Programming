#include <iostream>

long ConvertNum(long&);

int main() {
    long num = 1234;
    std::cout << ConvertNum(num) << '\n';

    return 0;
}

long ConvertNum(long& num) {
    long reversedNumber = 0;
    while(num != 0) {
        long remainder = num % 10;
        reversedNumber = reversedNumber * 10 +  remainder;
        num /= 10;
    }
    num = reversedNumber;
    return num;
}