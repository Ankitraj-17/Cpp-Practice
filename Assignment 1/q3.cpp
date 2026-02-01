#include <iostream>
using namespace std;

class Calculator {
public:
  int num1;
  int num2;

  int addition() { return num1 + num2; }

  int subtraction() { return num1 - num2; }

  int multiplication() { return num1 * num2; }

  float division() {
    if (num2 != 0) {
      return (float)num1 / num2;
    } else {
      cout << "Error: Division by zero!" << endl;
      return 0;
    }
  }
};

int main() {
  Calculator calc;

  cout << "Enter first number: ";
  cin >> calc.num1;
  cout << "Enter second number: ";
  cin >> calc.num2;

  cout << "\n--- Results ---" << endl;
  cout << "Addition: " << calc.addition() << endl;
  cout << "Subtraction: " << calc.subtraction() << endl;
  cout << "Multiplication: " << calc.multiplication() << endl;
  cout << "Division: " << calc.division() << endl;

  return 0;
}
