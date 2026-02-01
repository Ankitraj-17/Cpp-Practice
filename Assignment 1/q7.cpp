#include <iostream>
#include <string>
using namespace std;

class Car {
public:
  string brand;
  string model;
  int year;

  void displayDetails() {
    cout << "\n--- Car Details ---" << endl;
    cout << "Brand: " << brand << endl;
    cout << "Model: " << model << endl;
    cout << "Year: " << year << endl;
  }
};

int main() {
  Car c1;

  cout << "Enter Brand Name: ";
  cin >> c1.brand;
  cout << "Enter Model: ";
  cin >> c1.model;
  cout << "Enter Year: ";
  cin >> c1.year;

  c1.displayDetails();
  return 0;
}
