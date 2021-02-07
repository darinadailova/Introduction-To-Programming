#include <iostream>

void revertNum(long&);
int sizeOfNum(long);
int DigitPos(long num, int);

int main() {

    std::cout << DigitPos(253664, 5) << '\n';

    return 0;
}

void revertNum(long& num) {
    long reversedNumber = 0;
    int remainder;
    while(num != 0) {
        remainder = num % 10;
        reversedNumber = reversedNumber * 10 + remainder;
        num /= 10;
    }
    num = reversedNumber;
}

int sizeOfNum(long num) {
    int count = 0;
    while(num != 0) {
        count++;
        num /= 10;
    }
    return count;
}

int DigitPos(long num, int k) {//5844239 -> 8  9324485
    int sizeOfNumber = sizeOfNum(num);
    if(sizeOfNumber < k) {
        return -1;
    }
    
    revertNum(num);
    int count = 0;
    while(num != 0) {
        int remainder = num % 10;
        num /= 10;
        count++;
        if(count == k) {
            return remainder;
        }
    }
}