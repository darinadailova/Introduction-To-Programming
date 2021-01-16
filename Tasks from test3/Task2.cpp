#include<iostream>

void clock (int);

int main() {

    int N;
    std::cout << "Please enter a number between 0 and 86000: " << '\n';
    std::cin >> N;
    clock(N);

    return 0;
}

void clock(int N) {
    
    int hours;
    int minutes;
    
    if (N >= 3600) {
        hours = N / 3600;
        minutes = (N % 3600) / 60;
        if(hours < 10) {
            std::cout << "0" << hours;
            if(minutes < 10) {
                std::cout << ":0" << minutes << '\n';
            } else {
                std::cout << ':' << minutes << '\n';
            }
        } else {
            std::cout << hours;
            if(minutes < 10) {
                std::cout << ":0" << minutes << '\n';
            } else {
                std::cout << ':' << minutes << '\n';
            }
        }
    } 
    else {
        minutes = N / 60;
        if(minutes < 10) {
            std::cout << "00:0" << minutes << '\n';
        }
        else {
            std::cout << "00:" << minutes << '\n';
        }
    }
}