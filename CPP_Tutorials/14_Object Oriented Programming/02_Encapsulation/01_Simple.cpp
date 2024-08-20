#include <iostream>
using namespace std;

class BankAccount
{
private:
    double balance; // Private data member

public:
    // Constructor to initialize balance
    BankAccount(double initialBalance)
    {
        if (initialBalance >= 0)
        {
            balance = initialBalance;
        }
        else
        {
            balance = 0;
            cout << "Initial balance cannot be negative. Setting balance to 0." << endl;
        }
    }

    // Public method to deposit money
    void deposit(double amount)
    {
        if (amount > 0)
        {
            balance += amount;
            cout << "Deposited: $" << amount << endl;
        }
        else
        {
            cout << "Deposit amount must be positive!" << endl;
        }
    }

    // Public method to withdraw money
    void withdraw(double amount)
    {
        if (amount > 0 && amount <= balance)
        {
            balance -= amount;
            cout << "Withdrew: $" << amount << endl;
        }
        else
        {
            cout << "Invalid withdrawal amount!" << endl;
        }
    }

    // Public method to check balance
    double getBalance() const
    {
        return balance;
    }
};

int main()
{
    BankAccount myAccount(100.0); // Create a BankAccount object with an initial balance

    cout << "Current balance: $" << myAccount.getBalance() << endl;

    myAccount.deposit(50.0); // Deposit money
    cout << "Current balance: $" << myAccount.getBalance() << endl;

    myAccount.withdraw(30.0); // Withdraw money
    cout << "Current balance: $" << myAccount.getBalance() << endl;

    myAccount.withdraw(200.0); // Attempt to withdraw more than the balance

    return 0;
}

// output
// Current balance: $100
// Deposited: $50
// Current balance: $150
// Withdrew: $30
// Current balance: $120
// Invalid withdrawal amount!