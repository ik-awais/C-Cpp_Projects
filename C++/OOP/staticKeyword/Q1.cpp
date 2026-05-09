#include <iostream>
class Counter {
    static int count;
    int id;
public:
    Counter() { count++; id = count; }
    static int getCount() { return count; }
    Counter& increment() { id++; return *this; }
    void print() const { std::cout << "id=" << id << "\n"; }
};
int Counter::count = 0;
int main() {
    Counter a, b, c;
    std::cout << Counter::getCount() << "\n"; // ???
    a.increment().increment().print();    // ???
}