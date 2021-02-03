//10. Да се напише функция на С++, със сигнатура char* CheckStr(char[]), която връща масив, който съдържа всички повтарящи се символи във 
//входящия масив.
//например: CheckStr("aif8sLtt8f") = f8t
#include <iostream>

int stringLenght(char[]);
char* CheckStr(char[]);

int main() {
    char str[] = "aiff8q8wi";
    char* result = CheckStr(str);
    std::cout << result << '\n';

    delete[] result;

    return 0;
}

int stringLenght(char str[]) {
    int counter  = 0;
    for(int i = 0; str[i] != '\0'; i++) {
        counter++;
    }
    return counter;
}

char* CheckStr(char str[]) {
    int size = stringLenght(str);
    char* duplicate = new char[size];
    int counter = 0;
    
    for(int i = 0, k = 0; i < size; i++) {
        for(int j = i + 1; j < size; j++) {
            if(str[i] == str[j]) {
                duplicate[k] = str[i];
                k++;
                counter++;
            }
        }
    }

    counter++;
    duplicate[counter] = '\0';

    return duplicate;
}