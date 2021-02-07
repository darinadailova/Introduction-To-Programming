#include <iostream>

int stringLength(char*);
bool doExist(char*, char*);

int main() {
    char a[] = "hellothere";
    char b[] = "here";
    std::cout << doExist(a, b) << '\n';
    return 0;
}

int stringLength(char* symbols) {
    int count = 0;
    for (int i = 0; symbols[i] != '\0'; i++) {
        count++;
    }
    return count;
}

bool doExist(char* symbols, char* word) {
    int sizeSymbols = stringLength(symbols);
    int sizeWord = stringLength(word);

    for (int i = 0; i < sizeSymbols; i++) {
        if (symbols[i] == word[0]) {
            int count = 1;
            for (int j = 1, k = i + 1; j < sizeWord; j++, k++) {
                if (symbols[k] == word[j]) {
                    count++;
                }
            }

            if (count == sizeWord) {
                return true;
            }
            else {
                count = 0;
            }
        }
    }
    return false;
}