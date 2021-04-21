#include <iostream>
#include<vector>
using namespace std;

int main() {
    int k;
    cin >> k;
    vector<vector<double>>A(k);
    double input;

    for (int i = 0; i < k; i++) {
        for (int j = 0; j < k; j++) {
            cin >> input;
            A[i].push_back(input);
        }
    }

    int product = 1;
    for (int i = 0; i < k; i++) {
        for (int j = 0; j < k; j++) {
            if (j != k - i - 1) {
                product *= A[i][j];
            }
        }
    }

    cout << product << endl;

    return 0;
}