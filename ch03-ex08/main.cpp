#include <iostream>
using namespace std;

int main() {
  int n;

  cout << "Enter an integer: ";
  cin >> n;

  if ( n % 2 == 0)
    cout << "The value " << n << " is an even number.";
  else
    cout << "The value " << n << " is an odd number.";

  return 0;
}