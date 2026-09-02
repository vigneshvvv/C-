#include<iostream>
#include<exception>
using namespace std;

class InsufficientFundException : public exception{
    public:
        const char* what() const noexcept override{
            return "Insufficient balance in account";
        }
};

class BankAccount{
    private:
        double balance;
    public:
        BankAccount(double initialBalance){
            balance = initialBalance;
        }

        void withdraw(double amount){
            if (amount > balance){
                throw InsufficientFundException();
            }

            if (amount <= 0){
                throw invalid_argument("Withdraw amount must be grater that 0");
            }

            balance -= amount;

            cout << "withdraw successful" << endl;
            cout << "Remaining balance"<< balance << endl;

        };

};

int main(){
    BankAccount bank(10000);

    try{
        cout << "Trying to withdraw 15000..." << endl;
        bank.withdraw(15000);
    }
    catch(const InsufficientFundException& e ){
        cout << "Transaction Failed" << endl;
        cout << "Reason: " << e.what()<< endl;
    }
    catch(const exception& e){
        cout <<"other Error: "<< e.what() << endl;
    }

    return 0;

}
