#include <iostream>
using namespace std;

class BankManager;

class BankAccount{
    private:
        int accountNumber;
        double balance;

    public:
        BankAccount(int number, double amount){
            accountNumber = number;
            balance = amount;
        }
        friend class BankManager;
    
};

class BankManager{
    public:
        void displayAccount(BankAccount account){
            cout << "Account Number: "<< account.accountNumber << endl;
            cout << "Balance: " << account.balance << endl;
        }

        void updateBalance(BankAccount &account, double amount){
            account.balance = amount;
        }
};

int main(){
    BankAccount account(101, 20000);
    BankManager manager;
    manager.displayAccount(account);
    manager.updateBalance(account, 30000);

    cout << endl;
    manager.displayAccount(account);
    return 0;
}