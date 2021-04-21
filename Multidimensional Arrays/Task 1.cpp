#include <iostream>
#include<vector>
using namespace std;

int main() {
    int row_size, col_size, input;
    cin >> row_size >> col_size;
    vector<vector<int>>matrix(row_size);

    for (int row = 0; row < row_size; row++) {
        for (int col = 0; col < col_size; col++) {
            cin >> input;
            matrix[row].push_back(input);
        }
    }

    for (int row = 0; row < row_size; row++) {
        int min = matrix[row][0];
        for (int col = 1; col < col_size; col++) {
            if (matrix[row][col] < min) {
                min = matrix[row][col];
            }
        }
        cout << "Min element in row " << row + 1 << " is " << min << endl;
    }

    return 0;
}