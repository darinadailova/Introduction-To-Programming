//������ �� �� ������ ������� isEven(const int num), ����� ����� ���� ������ ����� � ����� ��� ��.

#include<iostream>

void isEven(const int num) {
    if (num % 2 == 0) {
        std::cout << "Yes" << '\n';
    }else{
    std::cout << "No" << '\n';
    }
}

int main(){
    int num;
    std::cin >> num;
    isEven(num);
    
    return 0;
}