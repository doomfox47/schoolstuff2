#include <iostream>

using namespace std;

int main()
{
  int inches;
  cout << "enter inches: ";
  cin >> inches;
  int miles;
  int yards;
  int feet;
  feet = inches / 12;
  inches = inches % 12;
  yards = feet / 3;
  feet = feet % 3;
  miles = yards / 1760;
  yards = yards % 1760;
  cout << "mile(s): " << miles<< endl;
  cout << "yard(s): " << yards<< endl;
  cout << "feet: " << feet<< endl;
  cout << "inch(es): " << inches<< endl;
}
