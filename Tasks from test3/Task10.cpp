#include <iostream>

void replace(int&, const int&);

int main() {

    int number = 3453;
    int k = 4;
    replace(number, k);
    std::cout << number << '\n';

    return 0;
}

void replace(int& number, const int& k) {
    int count = 0;
    while(number != 0) {
        number = number / 10;
        count++;
    }

    int newNum = 0;
    for(int i = 0; i < count; i++) {
        newNum = newNum * 10 + k;
    }

    number = newNum;
}