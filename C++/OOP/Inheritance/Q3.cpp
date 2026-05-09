#include <iostream>
class Base{
public:
    Base(){std::cout << "Base cstr\n";};
    ~Base(){std::cout << "Base dstr\n";};
};
class Derived : public Base{
public:
    Derived(){std::cout << "Derived cstr\n";};
    ~Derived(){std::cout << "Derived dstr\n";};
};
int main(){
    Base b;
    Derived d;
    return 0;
}