#include <iostream>
using namespace std;

int main()
{
    int arr[49];
    int x;
    cin >> x;
    int count = 0;
    for (int i = 0; i < 48; ++i) {
        cin >> arr[i];
    }
    for (int i = 0; i < 48; i++) {
        if (arr[i] == x) {
            count += 1;
        }
    }
    cout << count << endl;

    return 0;
}