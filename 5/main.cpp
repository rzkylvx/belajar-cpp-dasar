#include <iostream>

using namespace std;

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