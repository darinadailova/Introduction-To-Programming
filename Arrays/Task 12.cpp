#include <iostream>
using namespace std;

int main() {
    int arr[50];
    for (int i = 0; i < 49; ++i) {
        cin >> arr[i];
    }

    for (int i = 0; i < 49; i++) {
        if (arr[i] == 0 && arr[i + 1] == 0) {
            cout << "There are two 0's in a row." << endl;
            break;   
        }
    }

    return 0;
}