// using only two variables

#include <iostream>
using namespace std;

int main() {

  int num1 = 5, num2 = 10;

  cout << "Before swapping." << endl;
  cout << "num1 = " << num1 << ", num2 = " << num2 << endl;

  num1 = num1 + num2;
  num2 = num1 - num2;
  num1 = num1 - num2;

  cout << "\nAfter swapping." << endl;
  cout << "num1 = " << num1 << ", num2 = " << num2 << endl;

  return 0;
}