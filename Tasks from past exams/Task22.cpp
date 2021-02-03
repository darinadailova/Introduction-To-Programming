//22.	В даден масив от цели числа, фиксиран се нарича такъв елемент, стойността на който е равна на индекса му. Да се напише функция 
//на С++, със сигнатура bool AnalyzeArr(int arr[], int length), която проверява дали в масива arr съществуват поне два фиксирани елемента. 
//Функцията да връща false също и при некоректни данни.
#include <iostream>

bool AnalyzeArr(int[], int);

int main() {
    int arr[] = {0, 1, 6, 6};
    std::cout << AnalyzeArr(arr, 5) << '\n';

    return 0;
}

bool AnalyzeArr(int arr[], int length) {
    int count = 0;
    for(int i = 0; i < length; i++) {
        if(arr[i] == i) {
            count++;
        }
    }
    if(count >= 2) {
        return true;
    }
    return false;
}