#include <iostream>

int function(int& number, const int& k) {
    int count = 0;
    while(number != 0) {
        int reminder = number % 10;
        number = number / 10;
        if(reminder % k == 0) {
            count++;
        }
    }

    return count;
}

int main() {

    int number = -34554;
    int k = 3;
    std::cout << function(number, k) << '\n';

    return 0;
}