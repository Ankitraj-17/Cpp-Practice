// Q5: Program to demonstrate pointer to pointer
#include <iostream>
using namespace std;

int main() {
  int num = 75;
  int *ptr = &num;   // Pointer to int
  int **pptr = &ptr; // Pointer to pointer

  cout << "Value of num: " << num << endl;
  cout << "Value using pointer: " << *ptr << endl;
  cout << "Value using pointer to pointer: " << **pptr << endl;

  cout << "\nAddress of num: " << &num << endl;
  cout << "Value of ptr (address of num): " << ptr << endl;
  cout << "Value of pptr (address of ptr): " << pptr << endl;

  return 0;
}
