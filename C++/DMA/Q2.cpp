// Write a C++ program to add two integer numbers using
// pointers and display the sum.

#include <iostream>
#include <iomanip>
using namespace std;

int main (){
    int *ptr1 = new int;
    int *ptr2 = new int;
    *ptr1 = 12, *ptr2 = 13;
    cout << *ptr1 + *ptr2 << endl;
    delete ptr1, delete ptr2; 
    return 0;
}