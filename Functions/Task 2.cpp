#include<iostream>

bool isEven(const int num) {
    if (num % 2 == 0) {
        return true;
    }

    return false;
}

int main(){
    int num;
    std::cin >> num;
    std::cout << isEven(num) << '\n';
    
    return 0;
}
