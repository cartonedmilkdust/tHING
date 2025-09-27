#include <iostream>
using namespace std;

int main() {
  
  int x{};

  cout << "Enter an integer: ";
  cin >> x;
  cout << "Double " << x << " is: " << x * 2 << '\n';
  cout << "Triple " << x << " is: " << x * 3 << '\n';

  return 0;
}