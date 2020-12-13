#include <iostream>
using namespace std;

int sum(int num) {
    if (num == 0) {
        return num;
    }
    return (num += sum(num - 1));
}

int main()
{
    int num;
    cin >> num;
    cout << sum(num) << endl;

    return 0;
}