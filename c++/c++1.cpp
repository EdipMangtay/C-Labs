#include <iostream>

class Vector {
private:
    int x, y;

public:
    Vector(int x = 0, int y = 0) : x(x), y(y) {}

    // Overloading the + operator for Vector addition
    Vector operator+(const Vector& other) const {
        return Vector(x + other.x, y + other.y);
    }

    // Overloading the - operator for Vector subtraction
    Vector operator-(const Vector& other) const {
        return Vector(x - other.x, y - other.y);
    }

    // Overloading the * operator for Scalar multiplication
    Vector operator*(int scalar) const {
        return Vector(x * scalar, y * scalar);
    }

    // Overloading the += operator for in-place addition
    Vector& operator+=(const Vector& other) {
        x += other.x;
        y += other.y;
        return *this;
    }

    // Overloading the -= operator for in-place subtraction
    Vector& operator-=(const Vector& other) {
        x -= other.x;
        y -= other.y;
        return *this;
    }

    // Overloading the equality operator
    bool operator==(const Vector& other) const {
        return x == other.x && y == other.y;
    }

    // Overloading the inequality operator
    bool operator!=(const Vector& other) const {
        return !(*this == other);
    }

    // Overloading the stream insertion operator for easy printing
    friend std::ostream& operator<<(std::ostream& os, const Vector& vec) {
        os << "(" << vec.x << ", " << vec.y << ")";
        return os;
    }
};

int main() {
    Vector v1(1, 2);
    Vector v2(3, 4);

    // Adding two vectors
    Vector sum = v1 + v2;
    std::cout << "Sum: " << sum << std::endl;

    // Subtracting two vectors
    Vector diff = v2 - v1;
    std::cout << "Difference: " << diff << std::endl;

    // Scalar multiplication
    Vector scaled = v1 * 2;
    std::cout << "Scaled: " << scaled << std::endl;

    // In-place addition
    v1 += v2;
    std::cout << "v1 after in-place addition: " << v1 << std::endl;

    // Equality check
    if (v1 == v2)
        std::cout << "v1 is equal to v2\n";
    else
        std::cout << "v1 is not equal to v2\n";

    return 0;
}
