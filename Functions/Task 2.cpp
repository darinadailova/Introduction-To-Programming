//Задача Да се напише функция isEven(const int num), която връща дали дадено число е четно или не.

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