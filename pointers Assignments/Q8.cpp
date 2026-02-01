// Q8: Program to find the smallest of two numbers using pointers
#include <iostream>
using namespace std;

int main() {
  int num1, num2;
  int *ptr1, *ptr2;

  cout << "Enter first number: ";
  cin >> num1;
  cout << "Enter second number: ";
  cin >> num2;

  ptr1 = &num1;
  ptr2 = &num2;

  if (*ptr1 < *ptr2) {
    cout << "\nSmallest number is: " << *ptr1 << endl;
  } else {
    cout << "\nSmallest number is: " << *ptr2 << endl;
  }

  return 0;
}
