#include <iostream>

using namespace std;

/**
 * @brief Entry point of the program.
 *
 * Prompts the user to enter an integer, then determines and displays
 * whether the entered number is even or odd.
 *
 * @return int Returns 0 upon successful completion.
 */
int main() {
  int a;

  cout << "Enter a number: ";
  cin >> a;

  if (a % 2 == 0) {
    cout << a << " is even." << endl;
  } else {
    cout << a << " is odd." << endl;
  }

  return 0;
}