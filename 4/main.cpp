#include <iostream>

using namespace std;

/**
 * @brief Demonstrates basic arithmetic operations in C++.
 *
 * This function initializes two integers, `a` and `b`, and performs
 * addition, subtraction, multiplication, division, and modulus operations
 * on them. The results of each operation are printed to the standard output.
 *
 * @return int Returns 0 upon successful execution.
 */
int main() {
    int a = 6;
    int b = 7;

    int result;

    // addition
    result = a + b;
    cout << a << " + " << b << " = " << result << endl;

    // subtraction
    result = a - b;
    cout << a << " - " << b << " = " << result << endl;

    // multiplication
    result = a * b;
    cout << a << " * " << b << " = " << result << endl;

    // division
    result = a / b;
    cout << a << " / " << b << " = " << result << endl;

    // modulus
    result = a % b;
    cout << a << " % " << b << " = " << result << endl;

    return 0;
}