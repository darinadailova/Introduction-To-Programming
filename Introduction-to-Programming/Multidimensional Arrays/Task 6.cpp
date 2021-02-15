#include <iostream>
#include<vector>
using namespace std;

//Задача Дадена е квадратна реална матрица А с размерност kxk. Да се състави програма, която намира и извежда неотрицателните елементи върху главния диагонал.

int main()
{
    int size, input;
    cin >> size;
    vector<vector<int>>vec(size);

    for (int row = 0; row < size; row++) {
        for (int col = 0; col < size; col++) {
            cin >> input;
            vec[row].push_back(input);
        }
    }
    for (int row = 0; row < size; row++) {
        for (int col = 0; col < size; col++) {
            if (col == row && vec[row][col] >= 0) {
                cout << vec[row][col] << endl;
            }
        }
    }

    return 0;
}
