// Student class — constructor overloading chain
// Private: name (char*, dynamic), rollNo (int), cgpa (float)
// Default constructor: name='Unknown', rollNo=0, cgpa=0.0
// Parameterized constructor: takes all three arguments
// Copy constructor: perform deep copy of name
// Destructor: delete[] name
// Overload display() for both const and non-const object
#include <iostream>
#include <string.h>
using namespace std;
class Student{
    char* name;
    int rollNo;
    float cgpa;
public:
    Student();
    Student(const char*, int, float);
    Student(const Student&);
    ~Student();
    void display();
    void display() const;
};
Student::Student(){
    name = new char[10];
    strcpy(this->name, "Unknown");
    rollNo = 0;
    cgpa = 0.0;
}
Student::Student(const char* name, int rollNo, float cgpa){
    this->name = new char[strlen(name) + 1];
    strcpy(this->name, name);
    this->rollNo = rollNo;
    this->cgpa = cgpa; 
}
Student::Student(const Student& copy){
    this->name = new char[strlen(copy.name) + 1];
    strcpy(this->name, copy.name);
    this->rollNo = copy.rollNo;
    this->cgpa = copy.cgpa;
}
Student::~Student(){
    delete[] name;
}
void Student::display(){
    cout << "Name: " << name << "\nRollNo: " << rollNo << endl;
    cout << "CGPA: " << cgpa << endl;
}
void Student::display() const{
    cout << "Name: " << name << "\nRollNo: " << rollNo << endl;
    cout << "CGPA: " << cgpa << endl;
}
int main(){
    Student s1;
    const Student s2("Awais", 11, 2.6);
    s1.display(); s2.display();
}