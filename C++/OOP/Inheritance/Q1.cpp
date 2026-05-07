/*Create a base class `Animal` with a protected attribute `name` and a virtual method `speak()`. 
Derive `Dog` and `Cat` classes that override `speak()`. 
Show the constructor chain.*/
#include <iostream>
class Animal{
protected:
    std::string name;
    virtual std::string speak() const = 0;
public:
    Animal(std::string n) : name(n){
        std::cout << "Animal constructor\n";
    }
};
class Dog : public Animal{
public:
    Dog(std::string d) : Animal(d){
        std::cout << "Dog constructor\n";
    }
    std::string speak() const override {return "Woof\n";};
};
class Cat : public Animal{
public:
    Cat(std::string c) : Animal(c){
        std::cout << "Cat constructor\n";
    }
    std::string speak() const override {return "Meow\n";};
};
int main() {
    Dog d("Rex");
    Cat c("Whiskers");
    std::cout << d.speak();   // Rex says: Woof!
    std::cout << c.speak();   // Whiskers says: Meow!
    return 0;
}