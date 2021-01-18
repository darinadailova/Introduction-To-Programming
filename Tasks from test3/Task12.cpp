#include <iostream>

int sum(int& number, const int& k) {
    int sum = 0;
    int count = 0;
    while(number != 0) {
    
        int reminder = number % 10;//the last digit of the number
        sum += reminder;
        number = number / 10;//removes the last digit of a number
        count++;

        if(count == k) {
            return sum;
        }
    }
    //if the function returns -1 => k > count
    return -1;
}

int main() {

    int number = 45634;
    int k = 2;
    std::cout << sum(number, k) << '\n';

    return 0;
}