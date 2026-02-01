#include <iostream>
using namespace std;

class Circle {
public:
  float radius;

  float calculateArea() { return 3.14 * radius * radius; }

  float calculateCircumference() { return 2 * 3.14 * radius; }
};

int main() {
  Circle c1;

  cout << "Enter Radius: ";
  cin >> c1.radius;

  cout << "\nArea: " << c1.calculateArea() << endl;
  cout << "Circumference: " << c1.calculateCircumference() << endl;

  return 0;
}
