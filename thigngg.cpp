#include <iostream>
using namespace std;

int main() {
  int x{};
  int y{};

  cout << "Enter an integer: ";
  cin >> x;
  cout << "Enter another integer: ";
  cin >> y;

  cout << x << " + " << y << " is " << x + y << ".\n";
  cout << x << " - " << y << " is " << x - y << ".\n";

  return 0;
}