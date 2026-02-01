// Q6: Program to pass a pointer to a function
#include <iostream>
using namespace std;

void modifyValue(int *ptr) {
  cout << "Inside function - Original value: " << *ptr << endl;
  *ptr = *ptr * 2; // Modify the value
  cout << "Inside function - Modified value: " << *ptr << endl;
}

int main() {
  int num;

  cout << "Enter a number: ";
  cin >> num;

  cout << "\nBefore function call: " << num << endl;

  modifyValue(&num); // Pass address of num

  cout << "\nAfter function call: " << num << endl;

  return 0;
}
