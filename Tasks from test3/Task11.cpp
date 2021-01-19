#include <iostream>

int findSumOfKDigits(int&, const int&);

int main() {

    int number = 386;
    int k = 2;
    std::cout << findSumOfKDigits(number, k) << '\n';

    return 0;
}

int findSumOfKDigits(int& number, const int& k) {
    int count = 0;
    int number1 = number;
    //finds out how many digits the number has
    while(number != 0) {
        number = number / 10;
        count++;
    }
    //if there are less digits then k (how many digits we have to sum) return -1
    if(count < k) {
        return -1;
    }

    int sum = 0;
    while(number1 != 0) {
        int reminder = number1 % 10;
        number1 = number1 / 10;
        
        //if count == k we have reached the first  digits from the sum
        if(count == k) {
            sum += reminder;
        } 
        else {
            count--;
        }
    }
    
    return sum;
}