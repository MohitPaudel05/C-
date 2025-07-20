/*Create a custom exception class called InvalidAgeException.
Write a program that asks the user for their age and throws an InvalidAgeException if the age is less than 0 or greater than 150.
Catch the exception and display a meaningful error message.
*/


#include <iostream>
#include <stdexcept> 
using namespace std;

// Custom exception class
class InvalidAgeException : public exception {
public:
    const char* what() const noexcept override{
        return "Invalid age entered! Age must be between 0 and 150.";
    }
};

// Person class to handle input and output
class Person {
private:
    int age;
public:
    Person() {
        cout << "Enter your age: ";
        cin >> age;

        if (age < 0 || age > 150) {
            throw InvalidAgeException();
        }
    }

    void display() {
        cout << "Your age is: " << age << endl;
    }
};

int main() {
    try {
        Person p;
        p.display();
    } catch (const InvalidAgeException& e) {
        cout << "Error: " << e.what() << endl;
    }

    return 0;
}
