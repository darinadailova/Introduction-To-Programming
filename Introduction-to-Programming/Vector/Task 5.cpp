#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int>data;
    vector<int>data2;
    int input2;
    int input;
    int n;
    cin >> n;
    vector<int>index;
    int count = 0;
    for (int i = 0; i < n; i++) {
        cin >> input;
        data.push_back(input);
    }
    for (int i = 0; i < n; i++) {
        cin >> input2;
        data2.push_back(input2);
    }

    for (int i = 0; i < n; i++) {
        if (data[i] > data2[i]) {
            index.push_back(i);
            count++;
        }
    }
    for (int i = 0; i < count; i++) {
        cout << index[i] << endl;
    }

    return 0;
}