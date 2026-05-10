#include <iostream>
#include <cstring>
class FileHandler {
    char* filename;
    FILE* fp;
public:
    FileHandler(const char* name) {
        filename = new char[strlen(name) + 1];
        strcpy(filename, name);
        fp = fopen(name, "w");
        if (!fp) {
            std::cout << "Failed to open file: " << name << std::endl;
        }
    }
    ~FileHandler() {
        if (fp) fclose(fp);
        delete[] filename;
    }
    FileHandler(const FileHandler& other) {
        filename = new char[strlen(other.filename) + 1];
        strcpy(filename, other.filename);
        fp = fopen(filename, "w");
        if (!fp) {
            std::cout << "Failed to open file: " << filename << std::endl;
        }
    }
    FileHandler& operator=(const FileHandler& other) {
        if (this != &other) {
            if (fp) fclose(fp);
            delete[] filename;
            filename = new char[strlen(other.filename) + 1];
            strcpy(filename, other.filename);
            fp = fopen(filename, "w");
            if (!fp) {
                std::cerr << "Failed to open file: " << filename << std::endl;
            }
        }
        return *this;
    }
    FileHandler(FileHandler&& other)  
        : filename(other.filename), fp(other.fp) {
        other.filename = nullptr;
        other.fp = nullptr;
    }
    void write(const char* text) { 
        if (fp) fputs(text, fp); 
    }
};
void process(FileHandler fh) { 
    fh.write("data"); 
}
int main() {
    FileHandler f("test.txt");
    process(f);      
    FileHandler g = f; 
    g.write("Muhammad Awais");
    return 0;
}