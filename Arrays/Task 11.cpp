#include <iostream>
using namespace std;

int main()
{
    char str[49];
    int n;
    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> str[i];
    }
    //acbca
    for(int i = 0; i < n / 2; i++) {
        if(str[i] != str[n - i - 1]) {
            cout << "no" << '\n';
            return 1;
        }
    }

    cout << "yes" << '\n';
    
    return 0;
}