#include <iostream>
#include<vector>
using namespace std;

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