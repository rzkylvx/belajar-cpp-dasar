#include <iostream>

using namespace std;

/**
 * @brief Entry point of the program.
 *
 * This function demonstrates basic input and output operations in C++.
 * It initializes an integer variable 'a' with the value 7 and prints it.
 * Then, it prompts the user to enter a value, reads the input into variable 'b',
 * and prints the entered value.
 *
 * @return int Returns 0 upon successful execution.
 */
int main() {
  int a;
  a = 7;
  cout << a << endl;

  int b;
  cout << "Enter a value: ";
  cin >> b;
  cout << "You entered: " << b << endl;

  return 0;
}