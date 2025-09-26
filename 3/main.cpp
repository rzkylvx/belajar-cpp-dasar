#include <iostream>

using namespace std;

/**
 * @brief Demonstrates usage of various fundamental data types in C++.
 *
 * This function declares and initializes variables of different types:
 * - unsigned int, long, short (integer types)
 * - float, double (floating-point types)
 * - char (character type)
 * - bool (boolean type)
 *
 * It then prints the value of the unsigned int variable, its size in bytes,
 * and its maximum and minimum possible values using std::numeric_limits.
 *
 * @return int Returns 0 upon successful execution.
 */
int main() {
    // integer
    unsigned int a = 5; // 32-bit
    long b = 6;
    short c = 7;

    // decimal
    float d = 1.5;
    double e = 2.5;

    // character
    char f = 'f';

    // boolean
    bool g = false;

    cout << a << endl;
    cout << sizeof(a) << endl;
    cout << numeric_limits<unsigned int>::max() << endl;
    cout << numeric_limits<unsigned int>::min() << endl;

    return 0;
}
