#include <iostream>
using namespace std;

class BankAccount{
    private:
        double balance;

    public:
        BankAccount(double amount){
            balance = amount;
    }

    void withdraw(double amount){
        if (amount > balance){
            throw "Insufficient fund";
        }

        balance -= amount;
        cout << "withdrawal successful" << endl;
        cout << "Remaining Balance: " << balance << endl;
    }

};

int main(){
    BankAccount account(10000);

    try{
        account.withdraw(12000);
    }
    catch(const char* message){
        cout << "Transaction failed: "<< message <<endl;
    }
    return 0;
}