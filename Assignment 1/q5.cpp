#include <iostream>
#include <string>
using namespace std;

class BankAccount {
public:
  int accountNumber;
  string accountHolderName;
  float balance;

  void deposit(float amount) {
    balance += amount;
    cout << "Deposited: " << amount << endl;
  }

  void withdraw(float amount) {
    if (amount <= balance) {
      balance -= amount;
      cout << "Withdrawn: " << amount << endl;
    } else {
      cout << "Insufficient balance!" << endl;
    }
  }

  void displayBalance() {
    cout << "\n--- Account Details ---" << endl;
    cout << "Account Number: " << accountNumber << endl;
    cout << "Account Holder: " << accountHolderName << endl;
    cout << "Balance: " << balance << endl;
  }
};

int main() {
  BankAccount account;

  cout << "Enter Account Number: ";
  cin >> account.accountNumber;
  cout << "Enter Account Holder Name: ";
  cin >> account.accountHolderName;
  cout << "Enter Initial Balance: ";
  cin >> account.balance;

  account.deposit(500);
  account.withdraw(200);
  account.displayBalance();

  return 0;
}
