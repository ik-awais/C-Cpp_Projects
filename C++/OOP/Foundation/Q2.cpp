// Rectangle class — stale data trap
// Store length and width as private doubles
// Version 1: store area as a data member, update in setters — demonstrate stale data bug
// Version 2: compute area() as a const member function (no stored area)
// Parameterized constructor + default constructor (length=width=1)
// Out-of-line definition for all functions
#include <iostream>
using namespace std;
// // Version 1:
// class Rectangle{
//     double length, width;
// public:
//     double area;
//     // Setters & Getters
//     void setArea(double, double);
//     double getArea(){ return area; };
// };
// void Rectangle::setArea(double length, double width){
//     this->length = length;
//     this->width = width;
//     area = length*width;
// }
// int main(){
//     Rectangle obj1;
//     obj1.setArea(12.5, 5.6);
//     cout << "Area of rectangle is: " << obj1.getArea() << endl;
// }
// Version 2:
class Rectangle{
    double length, width;
public:
    Rectangle();
    Rectangle(double, double);
    double getArea() const;
};
Rectangle::Rectangle() : length(1), width(1) {}
Rectangle::Rectangle(double length, double width){
    this->length = length;
    this->width = width;
}
double Rectangle::getArea() const{ return length*width; };
int main(){
    Rectangle obj1(12.5,5.6);
    cout << "Area of Rectangle is: " << obj1.getArea() << endl;
}