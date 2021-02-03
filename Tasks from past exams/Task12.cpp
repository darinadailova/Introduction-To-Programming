//12.	Да се напише функция на С++, със сигнатура int NumCalc(long num, int k, int l), която връща като резултат сумата на k-тата и 
//l-тата цифра на num, или -1 при некоректни входни данни.
#include <iostream>

long ConvertNum(long&);
int NumCalc(long, int, int);

int main() {
    std::cout << NumCalc(1234, 2, 3) << '\n';
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

int NumCalc(long num, int k, int l) {
    long temp = num;
    ConvertNum(temp);
    int count = 0;
    int sum = 0;
    while(temp != 0) {
        int remainder = temp % 10;
        count++;
        if(count == k || count == l) {
            sum += remainder;
        }
        temp /= 10;
    }
    return sum;
}