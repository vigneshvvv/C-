#include<iostream>
using namespace std;

class BankAccount
{
    public:
        int accountNumber;
        string customerName;
        double balance;

    void display(){
        cout << "Account Number: " << accountNumber<< endl;
        cout << "customerName: " << customerName<< endl;
        cout << "balance : " << balance << endl;

    }

};


int main(){
    BankAccount customer;
    customer.accountNumber = 101;
    customer.customerName = "Vignesh";
    customer.balance = 25000;

    BankAccount *customer1 = new BankAccount();
    customer1-> accountNumber = 102;
    customer1 -> customerName = "Arun";
    customer1 -> balance = 30000;

    customer1->display();

    delete customer1;

    customer.display();
    return 0;
}