#include <iostream>
#include <cmath>

int stringLength(const char* const);
bool isNumber(char);
double Solve(const char* const);

int main() {
    const char* const arr = "1*x^2+6*x+5=0";
    std::cout << Solve(arr) << '\n';

    return 0;
}

int stringLength(const char* const input) {
    int count = 0;
    for (int i = 0; input[i] != '\0'; i++) {
        count++;
    }
    return count;
}

bool isNumber(char a) {
    return a > '0' && a <= '9';
}

double Solve(const char* const input) {

    if (stringLength(input) != 13) {
        return 0;
    }

    if (!isNumber(input[0]) || !isNumber(input[6]) || !isNumber(input[10])) {
        return 0;
    }

    if (input[1] != '*' || input[2] != 'x' || input[3] != '^' || input[4] != '2' || input[5] != '+' || input[7] != '*' || input[8] != 'x'
        || input[9] != '+' || input[11] != '=' || input[12] != '0') {
        return 0;
    }

    int a = input[0] - '0';
    int b = input[6] - '0';
    int c = input[10] - '0';
   
    double discr = b * b - 4 * a * c;
    if(discr < 0) {
        return 0;
    }
    return (-b + std::sqrt(discr)) / (2 * a);
}