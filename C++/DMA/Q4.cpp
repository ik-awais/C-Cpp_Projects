// Write a C++ program to find the maximum of two
// numbers using pointers.

#include <iostream>
#include <iomanip>
using namespace std;

int findMax(int num, int num2);

int main(){
    int *ptr1 = new int;
    int *ptr2 = new int;
    *ptr1 = 10, *ptr2 = 15;
    cout << findMax(*ptr1, *ptr2) << endl;
    return 0;
}


int findMax(int num, int num2){
    int max = 0;
    if(num < num2)
    {
        max = num2;
    }
    else
    {
        max = num;
    }
    
    return max;
}