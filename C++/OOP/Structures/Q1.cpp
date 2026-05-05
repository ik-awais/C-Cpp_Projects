// Define a struct `Student` with fields: name (string), id (int/string), gpa (double). Then:
// - Create an array of 3 students
// - Use a pointer to struct to print the student with highest GPA
#include <iostream>
struct Student
{
    std::string name, ID;
    double GPA;
};
int main(){
    Student arr[3] = {
        {"Hasnain", "25P-3015", 2.98},
        {"Talha", "25P-0027", 1.8},
        {"Awais", "25P-0011", 2.6}
    };
    Student* ptr = arr;
    Student* highestGPA = ptr;
    for(int i = 1; i < 3; i++)
    {
        if(highestGPA->GPA < ptr[i].GPA)
            highestGPA = &ptr[i];
    }
    std::cout << highestGPA->name << " " << highestGPA->ID
    << " " << highestGPA->GPA << "\n";
    return 0;
}