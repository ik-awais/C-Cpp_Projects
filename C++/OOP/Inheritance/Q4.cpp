/*Implement a `String` class with a deep-copy 
assignment operator and `+` overload. 
Then identify what's wrong with the default assignment.*/
#include <iostream>
#include <cstring>
class MyStr {
private:
    char* data;
    int len;
public:
    MyStr(const char* s){
        int i = 0;
        len = strlen(s);
        data = new char[len+1];
        strcpy(data, s);
    }
    ~MyStr() { delete[] data; }
    // Implement: operator= (deep copy, handle self-assignment)
    MyStr& operator= (const MyStr& copy){
        if(this != &copy)
        {
            len = copy.len;
            delete[] data;
            data = new char[len+1];
            strcpy(data, copy.data);
        }
        return *this;
    }
    // Implement: operator+ (concatenation, returns new MyStr)
    MyStr operator+ (const MyStr& add){
        char* newData = new char [len+add.len+1];
        strcpy(newData, data);
        int i = len, j = 0;
        for(; i < len+add.len; i++)
        {
            newData[i] = add.data[j];
            j++;
        }
        newData[i] = '\0';
        MyStr concat(newData);
        delete[] newData;
        return concat;
    }
    void print() const { std::cout << data << "\n"; }
};
int main(){
    char str1[] = "Muhammad"; 
    char str2[] = "Awais";
    MyStr Str1(str1);
    MyStr Str2(str2);
    MyStr Str3("");
    Str3 = Str1;
    Str3 = Str1+Str2;
    return 0;
}