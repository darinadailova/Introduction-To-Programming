#include <iostream>
using namespace std;

int numberOfDigits(int number) {
    if (number <= 0) {
        return 0;
    }
    return 1 + numberOfDigits(number / 10);
}

int main() {
    unsigned int number;
    cin >> number;
    cout << numberOfDigits(number) << endl;
    
    return 0;
}
