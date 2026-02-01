#include <iostream>
using namespace std;

class ATM {
public:
  int balance = 1000;

  void withdraw(int amt) {
    if (amt <= balance) {
      balance = balance - amt;
      cout << "Withdrawn: " << amt << endl;
    } else {
      cout << "Insufficient balance" << endl;
    }
  }

  void showBalance() { cout << "Balance: " << balance << endl; }
};

int main() {
  ATM user;
  user.showBalance();
  user.withdraw(300);
  user.showBalance();
  return 0;
}