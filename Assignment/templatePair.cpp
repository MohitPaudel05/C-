// Write a class template Pair<T1, T2> that stores a pair of values of possibly different types. Include a method to display both values. Demonstrate the use of this class with combinations like Pair<int, double> and Pair<string, char>


#include <iostream>
#include <string>
using namespace std;

// Class Template with two type parameters
template <typename T1, typename T2>
class Pair {
// private:
//     T1 first;
//     T2 second;
public:
    // Constructor
    T1 first;
    T1 second;
    Pair(T1 a, T2 b) {
        first = a;
        second = b;
    }

    // Method to display the values
    void display() {
        cout << "First: " << first << ", Second: " << second << endl;
    }
};

int main() {
    // Pair of int and double
    Pair<int, double> pair1(10, 3.14);
    cout << "Pair<int, double>: ";
    pair1.display();

    // Pair of string and char
    Pair<string, char> pair2("Ram", 'C');
    cout << "Pair<string, char>: ";
    pair2.display();

    return 0;
}
