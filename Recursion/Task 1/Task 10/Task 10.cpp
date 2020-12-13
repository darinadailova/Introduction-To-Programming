#include <iostream>
using namespace std;
//Да се напише рекурсивна функция, която установява, дали в записа на естественото число n се 
//съдържа цифрата k.

bool containsDigit(int n, int k) {
    if (n <= 0) {
        return false;//123
    }
    if (n % 10 == k) {
        return true;
    }
    else {
        containsDigit(n / 10, k);
    }
}

int main()
{
    int n, k;
    cin >> n >> k;
    cout << containsDigit(n, k) << endl;
    
    return 0;
}