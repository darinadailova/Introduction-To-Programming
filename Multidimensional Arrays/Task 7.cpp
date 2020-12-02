#include <iostream>
#include<vector>
using namespace std;

//Задача Дадена е квадратна реална матрица А с размерност nxn . Да се състави програма, която намира сумата от елементите под главния диагонал (включително главният диагонал).

int main()
{
    int size;
    cin >> size;
    vector<vector<double>>vec(size);
    double input;

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cin >> input;
            vec[i].push_back(input);

        }
    }
    double sum = 0;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j <= i; j++) {
            sum += vec[i][j];
        }
    }
    cout << sum << endl;

    return 0;
}