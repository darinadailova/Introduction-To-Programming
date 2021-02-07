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