#include <iostream>
#include<string>
using namespace std;

bool isPalindrome(string str) {

    if (str.size() <= 1) {
        return true;
    }
    if (str.front() != str.back()) {
        return false;
    }
    str.pop_back();
    str.erase(0);

    return isPalindrome(str);
}

int main()
{
    string str;
    cin >> str;
    cout << isPalindrome(str) << endl;

    return 0;
}