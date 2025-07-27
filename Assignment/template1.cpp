// Write a function template in C++ named findMax that takes two arguments of any data type and returns the maximum of the two. Demonstrate this function with integers, floats, and strings in main()

#include <iostream>
#include <string>
using namespace std;

// Function Template to find the maximum of two values
template <typename T>
T findMax(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    // Integer example
    int int1 = 10, int2 = 20;
    cout << "Max of " << int1 << " and " << int2 << " is: " << findMax(int1, int2) << endl;

    // Float example
    float float1 = 5.75, float2 = 3.14;
    cout << "Max of " << float1 << " and " << float2 << " is: " << findMax(float1, float2) << endl;

    // String example
    string str1 = "apple", str2 = "banana";
    cout << "Max of \"" << str1 << "\" and \"" << str2 << "\" is: \"" << findMax(str1, str2) << "\"" << endl;

    return 0;
}
