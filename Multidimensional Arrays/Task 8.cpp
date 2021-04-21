#include <iostream>
#include<vector>
using namespace std;

int main() {
    int k;
    cin >> k;
    vector<vector<int>>vec(k);
    int input;
    int s;
    cin >> s;

    for (int i = 0; i < k; i++) {
        for (int j = 0; j < k; j++) {
            cin >> input;
            vec[i].push_back(input);
        }
    }

    int sum = 0;
    for (int i = 0; i < k; i++) {
        for (int j = 0; j < k; j++) {
            if (i + j == s) {
                sum += vec[i][j];
            }
        }
    }
    
    cout << sum << endl;

    return 0;
}