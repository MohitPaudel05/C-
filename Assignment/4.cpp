#include <iostream>
#include <stdexcept>
#include <string>

using namespace std;

// Class with a method that throws different types of exceptions
class ExceptionType {
public:
    void DifferentException(int input) {
        if (input == 1) {
            throw runtime_error("Integer error occurred");
        } else if (input == 2) {
            throw 420.29; // double exception
        } else if (input == 3) {
            throw string("String error");
        } else {
            cout << "No Exception Thrown" << endl;
        }
    }
};

int main() {
    ExceptionType obj;

    try {
        try {
            int input;
            cout << "Enter a number: ";
            cin >> input;
            obj.DifferentException(input);
        }
        catch (runtime_error& e) {
            cout << "Error Type " << e.what() << endl;
            throw; // Rethrow to outer catch
        }
        catch (double e) {
            cout << "Double exception: " << e << endl;
            throw; // Rethrow
        }
        catch (string& e) {
            cout << "String exception: " << e << endl;
            throw; // Rethrow
        }
    }
    catch (...) {
        cout << "Caught exception at a higher level" << endl;
    }

    return 0;
}
