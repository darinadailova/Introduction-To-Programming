#include <iostream>

int* function() {
    static int a[3];
    a[0] = 0;
    const int f = 9;
    a[1] = f;
    a[2] = 4;
    return a;
}

int main() {
    int* p = function();
    for(int i = 0; i < 3; i++) {
        std::cout << p[i] << ' ';
    }

    return 0;
}