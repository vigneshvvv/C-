#include<iostream>
using namespace std;

class BankAccount{
    public:
        int accountNumber;
        string customerName;
        double balance;

    BankAccount(int accNo, string customerN, double bal){
        accountNumber = accNo;
        customerName = customerN;
        balance = bal;
    }

    BankAccount(const BankAccount &obj){
        accountNumber = obj.accountNumber;
        customerName = obj.customerName;
        balance = obj.balance;
    }

    void display(){
        cout << "Account Number: " << accountNumber<< endl;
        cout << "customerName: " << customerName<< endl;
        cout << "balance : " << balance << endl;

    }
};

int main(){
    BankAccount customer(101, "Vignesh", 25000);
    BankAccount customer1 = customer;
    customer1.display();
    return 0;
}