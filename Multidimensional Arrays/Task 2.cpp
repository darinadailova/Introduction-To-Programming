#include <iostream>
#include<vector>
using namespace std;

//Задача Да се състави програма, която намира броя на отрицателните елементи във всеки ред на двумерен масив.

int main()
{
    int row_size, col_size, input;
    cin >> row_size >> col_size;
    vector<vector<int>>vec(row_size);

    for (int row = 0; row < row_size; row++) {
        for (int col = 0; col < col_size; col++) {
            cin >> input;
            vec[row].push_back(input);
        }
    }
    int count = 0;
    for (int row = 0; row < row_size; row++) {
        for (int col = 0; col < col_size; col++) {
            if (vec[row][col] < 0) {
                count++;
            }
        }
        cout << "There are " << count << " negative elements in row " << row + 1 << endl;
        count = 0;
    }

    return 0;
}
