#include <iostream>

using namespace std;

/**
 * @brief Demonstrates the use of relational operators in C++.
 *
 * This function initializes two integer variables, `a` and `b`, both set to 2.
 * It then evaluates and prints the results of various relational operations between `a` and `b`:
 * - Equality (==)
 * - Inequality (!=)
 * - Greater than (>)
 * - Less than (<)
 * - Greater than or equal to (>=)
 * - Less than or equal to (<=)
 *
 * The results are displayed using `cout`, showing both the operation and its boolean result.
 *
 * @return int Returns 0 upon successful execution.
 */
int main() {
    int a = 2;
    int b = 2;

    bool result1, result2;

    // equality
    result1 = (a == b);
    cout << a << " == " << b << " : " << result1 << endl;

    // inequality
    result2 = (a != b);
    cout << a << " != " << b << " : " << result2 << endl;

    // greater than
    result1 = (a > b);
    cout << a << " > " << b << " : " << result1 << endl;

    // less than;
    result2 = (a < b);  
    cout << a << " < " << b << " : " << result2 << endl;

    // greater than or equal to
    result1 = (a >= b); 
    cout << a << " >= " << b << " : " << result1 << endl;

    // less than or equal to
    result2 = (a <= b);
    cout << a << " <= " << b << " : " << result2 << endl;

    return 0;
}