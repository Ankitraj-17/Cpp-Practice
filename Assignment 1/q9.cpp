#include <iostream>
using namespace std;

class Interest {
public:
  float principal;
  float rate;
  float time;

  float calculateSimpleInterest() { return (principal * rate * time) / 100; }
};

int main() {
  Interest i1;

  cout << "Enter Principal Amount: ";
  cin >> i1.principal;
  cout << "Enter Rate of Interest: ";
  cin >> i1.rate;
  cout << "Enter Time Period (years): ";
  cin >> i1.time;

  cout << "\nSimple Interest: " << i1.calculateSimpleInterest() << endl;

  return 0;
}
