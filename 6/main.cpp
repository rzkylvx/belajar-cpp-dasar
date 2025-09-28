#include <iostream>

using namespace std;

/**
 * @brief Demonstrates the use of logical operators in C++.
 *
 * This function initializes two integer variables, x and y, and uses logical NOT (!),
 * AND (&&), and OR (||) operators to evaluate and print the results of various logical expressions.
 * The results are displayed using cout.
 *
 * Logical operations demonstrated:
 * - NOT: Checks if x is not equal to y.
 * - AND: Checks if x is less than y AND x is not equal to y.
 * - OR: Checks if x is greater than y OR x is not equal to y.
 *
 * @return int Returns 0 upon successful execution.
 */
int main() {
    int x = 10;
    int y = 20;

    bool result;

    // not
    result = !(x == y);
    cout << "!(" << x << " == " << y << ") : " << result << endl;

    // and
    result = (x < y) && (x != y);
    cout << "(" << x << " < " << y << ") && (" << x << " != " << y << ") : " << result << endl;

    // or
    result = (x > y) || (x != y);
    cout << "(" << x << " > " << y << ") || (" << x << " != " << y << ") : " << result << endl;

    return 0;
}