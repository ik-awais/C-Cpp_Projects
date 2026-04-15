// 2×2 matrix stored as double[2][2] private data member
// Define setValues() inline inside the class
// Define display() and add(Matrix2x2) out-of-line (below class, using :: operator)
// add() returns a new Matrix2x2 object by value
// Default constructor initialises all elements to 0
#include <iostream>
using namespace std;
class Matrix{
    double matrix[2][2];
public:
    Matrix();
    void setValues(){
        cout << "Enter 4 values of Matrix: ";
        for(int i = 0; i < 2; i++)
        {
            for(int j = 0; j < 2; j++)
            {
                cin >> matrix[i][j];
            }
        }
    }
    void display() const;
    Matrix add(Matrix);
};
Matrix::Matrix(){
    for(int i = 0; i < 2; i++)
        {
            for(int j = 0; j < 2; j++)
            {
                matrix[i][j] = 0;
            }
        }
}
Matrix Matrix::add(Matrix m){
    Matrix objMatrix = m;
    return objMatrix;
}
void Matrix::display() const{
    cout << "Entries of matrix are: ";
    for(int i = 0; i < 2; i++)
        {
            for(int j = 0; j < 2; j++)
            {
                cout << matrix[i][j];
            }
        }
}
int main(){
    Matrix obj1;
    obj1.add(obj1).display();
    obj1.display();
    return 0;
}