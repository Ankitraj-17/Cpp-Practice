// Q1: Program to declare a pointer and print the value of a variable using it
#include <iostream>
using namespace std;

int main() {
  int num = 42;
  int *ptr = &num; // Pointer declaration and initialization

  cout << "Value of num: " << num << endl;
  cout << "Value of num using pointer: " << *ptr << endl;

  return 0;
}
