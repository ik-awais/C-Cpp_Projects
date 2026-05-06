#include <iostream>
using namespace std;
int main (){
    int v = 10;
    int &p = v; //&p used the concept of Aliasing
    cout << v << endl << p << endl;
    return 0;
}