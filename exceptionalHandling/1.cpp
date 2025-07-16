#include <iostream>
#include <exception>
#include <vector>

class Rectangle {
    int width, height;
public:
    Rectangle(int w, int h) {
        if (w <= 0 || h <= 0) {
            throw std::invalid_argument("Width and height must be positive integers.");
        }
        width = w;
        height = h;
    }
    int area() const {
        return width * height;
    }
};

int main() {
    try {
        Rectangle rect(10, 5);
        std::cout << "Area: " << rect.area() << std::endl;

        // Example of exception
        Rectangle badRect(-3, 4);
        std::cout << "Area: " << badRect.area() << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }
    return 0;
}
