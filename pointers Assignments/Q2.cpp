// Q2: Program to print the address of a variable using a pointer
#include <iostream>
using namespace std;

int main() {
  int num = 100;
  int *ptr = &num; // Pointer stores the address of num

  cout << "Address of num using & operator: " << &num << endl;
  cout << "Address of num using pointer: " << ptr << endl;
  cout << "Address of pointer itself: " << &ptr << endl;

  return 0;
}
