#include <iostream>
#include <string>
using namespace std;

class Student {
public:
  string name;
  int rollNumber;
  float marks;

  void inputDetails() {
    cout << "Enter student name: ";
    cin >> name;
    cout << "Enter roll number: ";
    cin >> rollNumber;
    cout << "Enter marks: ";
    cin >> marks;
  }

  void displayDetails() {
    cout << "\n--- Student Details ---" << endl;
    cout << "Name: " << name << endl;
    cout << "Roll Number: " << rollNumber << endl;
    cout << "Marks: " << marks << endl;
  }
};

int main() {
  Student s1;
  s1.inputDetails();
  s1.displayDetails();
  return 0;
}
