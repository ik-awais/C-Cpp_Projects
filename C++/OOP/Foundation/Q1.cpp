// BankAccount class with strict encapsulation
// Private data members: accountNo (int), holderName (char*, dynamic), balance (double)
// Public parameterized constructor — allocates holderName on heap
// Destructor — properly deallocates holderName
// deposit(double) and withdraw(double) — validate inputs (no negatives, no overdraft)
// Getters only — no setters (balance must not be directly modifiable)
// displayInfo() marked const
#include <iostream>
#include <string.h>
using namespace std;
class BankAccount{
private:
    int accountNo;
    char* holderName;
    double balance;
public:
    // Constructor & Destructor
    BankAccount(int, const char*, double);
    ~BankAccount();
    // Getters and Member Functions
    void deposit(double);
    void withdraw(double);
    void getAccountNo() const{ cout << "Account Number: " << accountNo << ". \n"; }
    const char* getHolderName() const{ return holderName; };
    void getBalance() const{cout << "Account Balance: " << balance << "\n"; };
    void display() const{ getAccountNo(); cout << "Account Holder Name: " << getHolderName() << "\n";
         getBalance(); };
};
BankAccount::BankAccount(int accountNo, const char* holderName, double balance){
    this->accountNo = accountNo;
    this->holderName = new char[strlen(holderName) + 1];
    strcpy(this->holderName, holderName);
    this->balance = balance;
};
BankAccount::~BankAccount(){
    delete[] holderName;
};
void BankAccount::deposit(double amount){
    if(amount < 0)
    {
        cout << "Invalid Amount!\n";
        return;
    }
    this->balance += amount;     
}
void BankAccount::withdraw(double amount){
    if(amount > this->balance || amount < 0)
    {
        cout << "Invalid amount!\n";
        return;
    }
    this->balance -= amount;
}
int main(){
    BankAccount A1(3771, "Awais", 14000000.32);
    A1.deposit(300.16);
    A1.withdraw(150.75);
    A1.display();
    return 0;
}