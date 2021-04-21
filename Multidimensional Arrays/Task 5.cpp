#include <iostream>
#include<vector>
using namespace std;

int main() {
    int row_size, col_size, input;
    cin >> row_size >> col_size;
    vector<vector<int>>vec(row_size);
    int X;
    cin >> X;

    for (int row = 0; row < row_size; row++) {
        for (int col = 0; col < col_size; col++) {
            cin >> input;
            vec[row].push_back(input);
        }
    }
    
    for (int row = 0; row < row_size; row++) {
        for (int col = 0; col < col_size; col++) {
            if (vec[row][col] == X) {
                cout << "Yes" << endl;
                return 1;
            }
        }
    }

    cout << "No" << endl;

    return 0;
}