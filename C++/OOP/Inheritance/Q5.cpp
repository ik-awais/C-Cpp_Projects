/*Demonstrate the diamond problem and fix it 
with virtual inheritance. Trace constructor order
 with and without virtual.*/
#include <iostream>
class A {
public:
    A() { std::cout << "A ctor\n"; }
    virtual void hello() const { std::cout << "A::hello\n"; }
};
class B : virtual public A { 
public: B(){
    std::cout<<"B ctor\n";
    }
};
class C : virtual public A { public: C(){std::cout<<"C ctor\n";} };
class D : public B, public C { public: D(){std::cout<<"D ctor\n";} };
int main() {
    D d;
    d.hello(); // Resolved Diamond Problem in 2 steps
    /*  1. Virtual inheritance (class B : virtual public A) ensures only one copy
        of A is shared by B and C
        2. Virtual function (virtual void hello()) isn't strictly required to solve
        the diamond problem — it's for polymorphism. The ambiguity is resolved 
        by virtual inheritance alone.*/
    return 0;
}