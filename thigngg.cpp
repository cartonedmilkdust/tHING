#include <iostream>
using namespace std;

int main() {
  
  int x{};
  int y{};

  x = y = 5;

  cout << x << '\n';
  cout << y << '\n';

  y = 3;

  cout << x << '\n';
  cout << y << '\n';
}