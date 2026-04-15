// Function overloading — Calculator class
// Overload compute() for: two ints, two doubles, three ints, one int + one double
// All defined out-of-line
// Demonstrate implicit type promotion: what does compute(3, 4.5) call?
// Add a const instance of Calculator and call all versions on it — what const-correctness issue arises?
#include <iostream>
using namespace std;
class Calculator{
public:
    int compute(int, int) const;
    double compute(double, double) const;
    int compute(int, int, int) const;
    double compute(int, double) const;
};
int Calculator::compute(int a, int b) const{
    char opr;
    cout << "Enter the operation among 2 integers: ";
    cin >> opr;
    switch (opr)
    {
        case '+':
            return a+b;
        case '-':
            return a-b;
        case '*':
            return a*b;
        case '/':
            return a/b;
        default:
        cout << "No valid operation. Abort!\n";
        return 0;
        break;
    }
}
double Calculator::compute(double a, double b) const{
    char opr;
    cout << "Enter the operation among 2 doubles: ";
    cin >> opr;
    switch (opr)
    {
        case '+':
            return a+b;
        case '-':
            return a-b;
        case '*':
            return a*b;
        case '/':
            return a/b;
        default:
        cout << "No valid operation. Abort!\n";
        return 0;
        break;
    }
}
int Calculator::compute(int a, int b, int c) const{
    char opr;
    cout << "Enter the operation among 3 integers: ";
    cin >> opr;
    switch (opr)
    {
        case '+':
            return a+b+c;
        case '-':
            return a-b-c;
        case '*':
            return a*b*c;
        case '/':
            return (a/b)/c;
        default:
        cout << "No valid operation. Abort!\n";
        return 0;
    }
}
double Calculator::compute(int a, double b) const{
    char opr;
    cout << "Enter the operation among int and double: ";
    cin >> opr;
    switch (opr)
    {
        case '+':
            return a+b;
        case '-':
            return a-b;
        case '*':
            return a*b;
        case '/':
            return a/b;
        default:
        cout << "No valid operation. Abort!\n";
        return 0;
    }
}
int main(){
    const Calculator obj1, obj2, obj3, obj4;
    cout << "===Workflow of 2 integers===\n" << obj1.compute(2, 3) << endl;
    cout <<  "===Workflow of 2 doubles===\n" << obj2.compute(2.1, 3.2) << endl;
    cout << "===Workflow of 3 integers===\n" << obj3.compute(1, 2, 3) << endl;
    cout << "===Workflow of 1 integer and 1 double===\n" << obj4.compute(2, 4.1) << endl;
}