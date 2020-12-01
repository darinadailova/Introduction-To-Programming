#include <iostream>
#include<vector>
using namespace std;

//Задача Да се състави програма, която намира и извежда минималният елемент на всеки ред на двумерен масив. На първия ред от стандартния вход да се въведат размерите на масива, а на следващите редове и самият масив.

int main()
{
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
        cout << "The lowest element for row " << row + 1 << " is " << min << endl;
    }

    return 0;
}
