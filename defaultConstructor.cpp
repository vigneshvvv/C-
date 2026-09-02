#include<iostream>
using namespace std;

class BankAccount{
    public:
        int accountNumber;
        string customerName;
        double balance;

    BankAccount(){
        accountNumber = 0;
        customerName = "No Assigned";
        balance = 0;
    }

    void display(){
        cout << "Account Number: " << accountNumber<< endl;
        cout << "customerName: " << customerName<< endl;
        cout << "balance : " << balance << endl;

    }
};

int main(){
    BankAccount customer;
    customer.balance = 25000;
    customer.display();
    return 0;
}