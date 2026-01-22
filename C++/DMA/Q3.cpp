#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    //I'll try to use heap/stack concept
    int num = 10, *ptr = new int;
    *ptr = 10;
    cout << *ptr << endl;
    delete ptr;
    return 0;
}