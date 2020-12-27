#include <iostream>
using namespace std;

int swap(int& a, int& b) {
    int temp = b;
    b = a;
    a = temp;
    return (a, b);
}

int main()
{
    int a, b;
    cin >> a >> b;
    swap(a, b);
    cout << a << " " << b << endl;

    return 0;
}