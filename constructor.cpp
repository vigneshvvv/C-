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

    void display(){
        cout << "Account Number: " << accountNumber<< endl;
        cout << "customerName: " << customerName<< endl;
        cout << "balance : " << balance << endl;

    }
};


int main(){
    BankAccount customer(101, "Vignesh", 25000);
    customer.display();
    return 0;
}