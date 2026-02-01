// Q4: Program to swap two numbers using pointers
#include <iostream>
using namespace std;

void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

int main() {
  int num1, num2;

  cout << "Enter first number: ";
  cin >> num1;
  cout << "Enter second number: ";
  cin >> num2;

  cout << "\nBefore swapping:" << endl;
  cout << "num1 = " << num1 << ", num2 = " << num2 << endl;

  swap(&num1, &num2);

  cout << "\nAfter swapping:" << endl;
  cout << "num1 = " << num1 << ", num2 = " << num2 << endl;

  return 0;
}
