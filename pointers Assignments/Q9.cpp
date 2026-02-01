// Q9: Program to find cube of a number using pointer
#include <iostream>
using namespace std;

int main() {
  int num, cube;
  int *ptr, *ptrCube;

  cout << "Enter a number: ";
  cin >> num;

  ptr = &num;
  ptrCube = &cube;

  *ptrCube = (*ptr) * (*ptr) * (*ptr); // Calculate cube using pointer

  cout << "\nCube of " << *ptr << " = " << *ptrCube << endl;

  return 0;
}
