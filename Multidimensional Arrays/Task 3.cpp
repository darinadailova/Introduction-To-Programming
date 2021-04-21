#include <iostream>
#include<vector>
using namespace std;

int main() {
    int row_size, col_size, input;
    cin >> row_size >> col_size;
    vector<vector<int>>vec(row_size);

    for (int row = 0; row < row_size; row++) {
        for (int col = 0; col < col_size; col++) {
            cin >> input;
            vec[row].push_back(input);
        }
    }

    for (int row = 0; row < row_size; row++) {
        int sum = 0;
        for (int col = 0; col < col_size; col++) {
            sum += vec[row][col];
        }
        cout << sum << ' ';
    }

    return 0;
}