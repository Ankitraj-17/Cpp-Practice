// Q7: Program to add two numbers using pointers
#include <iostream>
using namespace std;

int main() {
  int num1, num2, sum;
  int *ptr1, *ptr2, *ptrSum;

  cout << "Enter first number: ";
  cin >> num1;
  cout << "Enter second number: ";
  cin >> num2;

  ptr1 = &num1;
  ptr2 = &num2;
  ptrSum = &sum;

  *ptrSum = *ptr1 + *ptr2; // Add using pointers

  cout << "\nSum of " << *ptr1 << " and " << *ptr2 << " = " << *ptrSum << endl;

  return 0;
}
