// Write a C++ program to declare an integer variable 
// and a pointer.
// Store the address of the variable in the pointer and
// display the value of the variable, its address, and
// the value accessed through the pointer

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int num = 10, *ptr = &num;
    cout << *ptr << endl << ptr << endl;
    return 0;
}