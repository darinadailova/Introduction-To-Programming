#include<iostream>
using namespace std;

int greatestCommonDivisor(int a, int b) {
    if (a == 0) {
        return b;
    }
    if (b == 0) {
        return a;
    }

    if (a == b) {
        return a;
    }
    if (a > b) {
        return greatestCommonDivisor(a - b, b);
    }
    return greatestCommonDivisor(a, b - a);
}

int main() {
    int num1, num2;
    cin >> num1 >> num2;
    cout << greatestCommonDivisor(num1, num2) << endl;

    return 0;
}