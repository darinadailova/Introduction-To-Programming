#include <iostream>
using namespace std;

int main()
{
    int arr[3];
    int maxNumber = INT_MIN;
    int nummberInTheArray;
    for (int i = 0; i < 3; ++i) {
        cin >> arr[i];
    }
    for (int i = 0; i < 3; i++) {
        if (arr[i] > maxNumber) {
            maxNumber = arr[i];
            nummberInTheArray = i;
        }
    }

    cout << maxNumber << endl;
    cout << nummberInTheArray << endl;
}