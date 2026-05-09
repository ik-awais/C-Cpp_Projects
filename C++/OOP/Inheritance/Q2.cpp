// Design a shape system. 
// The `totalArea()` function must work for any mix of 
// shapes without modification.
// Make this work:
#include <iostream>
class Shape{
public:
    virtual double totalArea() const = 0;
    virtual ~Shape() {};
};
class Circle : public Shape{
private:
    int radius;
public:
    Circle(int r) : radius(r) {};
    double totalArea()const override {return 3.142*radius*radius;};
};
class Rectangle : public Shape{
private:
    int len, width;
public:
    Rectangle(int l, int w) : len(l), width(w) {};
    double totalArea() const override {return len*width;}
};
class Triangle : public Shape {
private:
    int base, height;
public:
    Triangle(int b, int h) : base(b), height(h) {};
    double totalArea() const override {return (0.5)*base*height;}
};
    double totalArea(Shape** shapes, int size){
        double TotalArea = 0;
        for(int i = 0; i < 3; i++)
        {
            TotalArea += shapes[i]->totalArea();
        }
        return TotalArea;
    }
int main() {
    Shape* shapes[3];
    shapes[0] = new Circle(5);
    shapes[1] = new Rectangle(4, 6);
    shapes[2] = new Triangle(3, 8);
    std::cout << totalArea(shapes, 3); // ~109.5
    // cleanup...
    for(int i = 0; i < 3; i++)
    {
        delete shapes[i];
    }
}