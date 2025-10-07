#include <iostream>

using namespace std;

/**
 * @brief Entry point of the program.
 *
 * Prompts the user to enter an integer, then checks if the entered number is even.
 * If the number is even, it outputs a message indicating so.
 *
 * @return int Returns 0 upon successful execution.
 */
int main() {
  int a;

  cout << "Enter a number: ";
  cin >> a;

  if (a % 2 == 0) {
    cout << a << " is even." << endl;
  }

  return 0;
}