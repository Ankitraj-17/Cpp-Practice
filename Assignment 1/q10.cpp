#include <iostream>
#include <string>
using namespace std;

class Result {
public:
  string name;
  float marks1;
  float marks2;
  float marks3;

  float calculateTotal() { return marks1 + marks2 + marks3; }

  float calculateAverage() { return calculateTotal() / 3; }
};

int main() {
  Result r1;

  cout << "Enter Student Name: ";
  cin >> r1.name;
  cout << "Enter Marks in Subject 1: ";
  cin >> r1.marks1;
  cout << "Enter Marks in Subject 2: ";
  cin >> r1.marks2;
  cout << "Enter Marks in Subject 3: ";
  cin >> r1.marks3;

  cout << "\n--- Result ---" << endl;
  cout << "Name: " << r1.name << endl;
  cout << "Total Marks: " << r1.calculateTotal() << endl;
  cout << "Average Marks: " << r1.calculateAverage() << endl;

  return 0;
}
