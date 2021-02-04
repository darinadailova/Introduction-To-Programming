//9. Да се напише функция със сигнатура bool CheckRectangular(const Point&, const Point&, const Point&), където Point е структура,
//която има две член-данни за координати в Декартова координатна система. Функцията да връща true ако трите точки в координатната 
//система образуват правоъгълен триъгълник и false в противен случай.
#include <iostream>

struct Point
{
    int x, y;
};

int secondPower(int number) {
    return number * number;
}

int getSide(const Point& a, const Point& b) {
    return secondPower(a.x - b.x) + secondPower(a.y - b.y);
}

bool CheckRectangular(const Point& side1, const Point& side2, const Point& side3) {
    int a = getSide(side1, side2);
    int b = getSide(side1, side3);
    int c = getSide(side2, side3);

    if(a != 0 && b != 0 && c != 0) {
        if(a == (b + c)) {
            return true;
        }

        if(b = (a + c)) {
            return true;
        }
        
        if(c == (a + b)) {
            return true;
        }
    }
    return false;
}

int main() {
    Point side1 = Point {2, 4};
    Point side2 = Point {2, 0};
    Point side3 = Point {1, 0};
    
    std::cout << CheckRectangular(side1, side2, side3) << '\n';
    
    return 0;
}