int getSide(const Point& a, const Point& b) {
    return secondPower(a.x - b.x) + secondPower(a.y - b.y);
}