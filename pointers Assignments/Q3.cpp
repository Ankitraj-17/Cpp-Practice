// Q3: Program to change the value of a variable using a pointer
#include <iostream>
using namespace std;

int main() {
  int num = 50;
  int *ptr = &num;

  cout << "Original value: " << num << endl;

  *ptr = 200; // Changing value using pointer

  cout << "Modified value: " << num << endl;
  cout << "Value through pointer: " << *ptr << endl;

  return 0;
}
