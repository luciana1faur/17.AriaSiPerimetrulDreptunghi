#include <iostream>
#include <cmath>
using namespace std;

int main() {
  double latimea;
  double lungimea;
  float aria;
  float perimetru;

  cout << "Introduceti latimea dreptunghiului: ";
  cin >> latimea;
  cout << "Introduceti lungimea dreptunghiului: ";
  cin >> lungimea;

  aria = latimea * lungimea;
  perimetru = 2 * latimea + 2 * lungimea;

  cout << "Aria este: " << aria << endl;
  cout << "Perimetrul este: " << perimetru << endl;

  return 0; 
  
}
//Write a program in C++ to find the Area and Perimeter of a Rectangle.