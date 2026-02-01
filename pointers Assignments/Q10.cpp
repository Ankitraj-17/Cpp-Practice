// Q10: Program to check leap year using pointers
#include <iostream>
using namespace std;

int main() {
  int year;
  int *ptrYear;
  bool isLeap;
  bool *ptrIsLeap;

  cout << "Enter a year: ";
  cin >> year;

  ptrYear = &year;
  ptrIsLeap = &isLeap;

  // Check leap year condition using pointer
  if ((*ptrYear % 4 == 0 && *ptrYear % 100 != 0) || (*ptrYear % 400 == 0)) {
    *ptrIsLeap = true;
  } else {
    *ptrIsLeap = false;
  }

  if (*ptrIsLeap) {
    cout << "\n" << *ptrYear << " is a leap year." << endl;
  } else {
    cout << "\n" << *ptrYear << " is not a leap year." << endl;
  }

  return 0;
}
