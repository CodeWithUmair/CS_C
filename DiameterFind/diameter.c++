#include <iostream>
using namespace std;

int main() {
  
  float radius, diameter, circumference, area;

  cout << "Please enter the radius of a circle";
  cin >> radius;

  diameter = 2 * radius;
  circumference = 2 * 3.14159 * radius;
  area = 3.14159 * radius * radius;

  cout << "The diameter of a circle is : " << diameter;
  cout << "The circumference of a circle is : " << circumference;
  cout << "The area of a circle is : " << area;
}