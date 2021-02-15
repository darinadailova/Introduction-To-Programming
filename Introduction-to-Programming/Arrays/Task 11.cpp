#include <iostream>
using namespace std;

int main()
{
    char arr[49];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < n / 2; i++) {
        if (arr[i] == arr[n - i]) {
            cout << "yes" << endl;
            return 1;
        }
    }
    cout << "no" << endl;

    return 0;
}