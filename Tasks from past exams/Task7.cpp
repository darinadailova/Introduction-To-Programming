//Да се напише функция на С++, със сигнатура void Revert(char []), която преобразува
//подадения като параметър символен низ, като замества всички малки букви от
//латинската азбука с главни и обратно. Да не се използва вградената библиотека
//string.
#include <iostream>

int stringLength(char str[]) {
    int count = 0;
    for(int i = 0; str[i] != '\0'; i++) {
        count++;
    }
    return count;
}

void Revert(char str[]) {
    int size = stringLength(str);

    for(int i = 0; i < size; i++) {
        int temp = 'a' - 'A';
        if(str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - temp;
        }
        else if(str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + temp;
        }
    }
}

int main() {
    char arr[] = "BddB";
    Revert(arr);
    std::cout << arr;

    return 0;
}