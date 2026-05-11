/*Full design question. Build a `SmartArray` that wraps a dynamic int array, supports deep copy, operator[] access, operator+ (concatenate two arrays), and prints element count via a static member.
// Requirements:
// - private: int* data, int size, static int totalArrays
// - constructor(int n): allocates, zero-fills
// - destructor: frees, decrements totalArrays
// - copy constructor + operator= (deep copy)
// - int& operator[](int i) — bounds-checked access
// - SmartArray operator+(const SmartArray& o) const — concatenation
// - static int getTotal() — returns totalArrays
// - void print() const
*/
#include <iostream>
class SmartArray{
private:
    int* data;
    int size;
    static int totalArrays;
public:
    SmartArray(int n) : size(n){
        data = new int[size];
    }
    SmartArray& operator+(SmartArray& add){};
    SmartArray& operator[](int access){};
    static int getTotal(){return SmartArray::totalArrays;}
    void print()const{};
};
int main() {
    SmartArray a(3), b(2);
    a[0]=1; a[1]=2; a[2]=3;
    b[0]=4; b[1]=5;
    SmartArray c = a + b;
    c.print();                        // 1 2 3 4 5
    std::cout << SmartArray::getTotal();   // 3
}