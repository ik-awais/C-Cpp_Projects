#include <iostream>
class Plugin {
public:
    virtual void initialize() = 0;
    virtual void execute() = 0;
    virtual std::string getData() const = 0;
    virtual ~Plugin() {};
};
class LoggerPlugin : public Plugin {
    std::string file;
public:
    LoggerPlugin(const char* f) : file(f) {};    
    void initialize() override {
        std::cout << "Logger: initialized (" << file << ")\n";
    }    
    void execute() override {
        std::cout << "Logger: executing...\n";
    }    
    std::string getData() const override {
        return "Logger";
    }
};
class EncryptPlugin : public Plugin {
    std::string encrypt;
public:
    EncryptPlugin(const char* a) : encrypt(a) {};    
    void initialize() override {
        std::cout << "Encrypt: initialized (" << encrypt << ")\n";
    }    
    void execute() override {
        std::cout << "Encrypt: executing...\n";
    }    
    std::string getData() const override {
        return "Encrypt";
    }
};
void run_all(Plugin* plugins[], int count) {
    for (int i = 0; i < count; i++) {
        plugins[i]->initialize();
        plugins[i]->execute();
    }
}
void cleanup(Plugin* plugins[], int count) {
    for (int i = 0; i < count; i++) {
        delete plugins[i];
    }
}
int main() {
    Plugin* plugins[] = {
        new LoggerPlugin("app.log"),
        new EncryptPlugin("AES-256")
    };
    run_all(plugins, 2);
    cleanup(plugins, 2);
    return 0;
}