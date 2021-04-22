#include <iostream>
using namespace std;

bool containsDigit(int n, int k) {
    if (n <= 0) {
        return false;
    }
    if (n % 10 == k) {
        return true;
    }
    else {
        containsDigit(n / 10, k);
    }
}

int main() {
    int n, k;
    cin >> n >> k;
    cout << containsDigit(n, k) << endl;
    
    return 0;
}