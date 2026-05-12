/*Full design question. 
Build a `SmartArray` that wraps a dynamic int array, 
supports deep copy, operator[] access, operator+ (concatenate two arrays), 
and prints element count via a static member.
Requirements:
- private: int* data, int size, static int totalArrays
- constructor(int n): allocates, zero-fills
- destructor: frees, decrements totalArrays
- copy constructor + operator= (deep copy)
- int& operator[](int i) — bounds-checked access
- SmartArray operator+(const SmartArray& o) const — concatenation
- static int getTotal() — returns totalArrays
- void print() const*/
#include <iostream>
class SmartArray {
private:
    int* data;          
    int size;           
    static int totalArrays;  
public:
    SmartArray(int n) : size(n) {
        data = new int[size]();
        totalArrays++;
        std::cout << "Created array of size " << size 
                  << " | Total arrays: " << totalArrays << "\n";
    }   
    ~SmartArray() {
        delete[] data;
        totalArrays--;
        std::cout << "Destroyed array of size " << size 
                  << " | Total arrays: " << totalArrays << "\n";
    }
    SmartArray(const SmartArray& other) : size(other.size) {
        data = new int[size];
        for (int i = 0; i < size; i++) {
            data[i] = other.data[i];
        }
        totalArrays++;
        std::cout << "Copied array of size " << size 
                  << " | Total arrays: " << totalArrays << "\n";
    }    
    SmartArray& operator=(const SmartArray& other) {
        if (this != &other) { 
            delete[] data;       
            size = other.size;
            data = new int[size];
            for (int i = 0; i < size; i++) {
                data[i] = other.data[i];
            }
        }
        return *this;
    }
    int& operator[](int index) {
        if (index < 0 || index >= size) {
            std::cout << "Index out of bounds\n";
        }
        return data[index];
    }
    const int& operator[](int index) const {
        if (index < 0 || index >= size) {
            throw std::out_of_range("Index out of bounds");
        }
        return data[index];
    }
    SmartArray operator+(const SmartArray& other) const {
        int newSize = size + other.size;
        SmartArray result(newSize);
        for (int i = 0; i < size; i++) {
            result.data[i] = data[i];
        }
        for (int i = 0; i < other.size; i++) {
            result.data[size + i] = other.data[i];
        }
        return result;
    }
    static int getTotal() {
        return totalArrays;
    }
    void print() const {
        for (int i = 0; i < size; i++) {
            std::cout << data[i] << " ";
        }
        std::cout << "\n";
    }
};
int SmartArray::totalArrays = 0;
int main() {
    std::cout << "=== Creating a(3) ===\n";
    SmartArray a(3);
    a[0] = 1;
    a[1] = 2;
    a[2] = 3;
    a.print();  // 1 2 3
    std::cout << "\n=== Creating b(2) ===\n";
    SmartArray b(2);
    b[0] = 4;
    b[1] = 5;
    b.print();  // 4 5
    std::cout << "\n=== Concatenating c = a + b ===\n";
    SmartArray c = a + b;
    c.print();  // 1 2 3 4 5
    std::cout << "\n=== Total arrays: " << SmartArray::getTotal() << " ===\n";
    std::cout << "\n=== Testing bounds checking ===\n";
    a[5] = 99;
    return 0;
}