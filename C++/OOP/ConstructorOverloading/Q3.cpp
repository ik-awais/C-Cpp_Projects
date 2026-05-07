/*Overload the `+` operator for a `Vector2D` class to add two vectors.
Implement as a member function.
*/
#include <iostream>
class Vector2D {
    double x, y;
public:
    Vector2D(double x, double y) : x(x), y(y) {}
    // overload + here
    Vector2D operator+ (const Vector2D& add){
        return Vector2D(this->x+add.x, this->y+add.y);
    }
    void print() const {
        std::cout << "(" << x << ", " << y << ")\n";
    }
};
int main() {
    Vector2D v1(1.0, 2.0), v2(3.0, 4.0);
    Vector2D v3 = v1 + v2;
    v3.print(); // (4, 6)
}