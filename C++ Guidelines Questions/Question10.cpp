// Create a Triangle class. Add exception handling statements to ensure the following
// conditions: all sides are greater than 0 and sum of any two sides are greater than the
// third side. The class should also have overloaded functions for calculating the area of
// a right angled triangle as well as using Heron's formula to calculate the area of any type
// of triangle.


#include <iostream>
#include <cmath>
#include <stdexcept>
using namespace std;

class Triangle {
private:
    double a, b, c;

public:
    // Constructor
    Triangle(double side1, double side2, double side3) {
        if (side1 <= 0 || side2 <= 0 || side3 <= 0)
            throw invalid_argument("All sides must be greater than 0.");

        if ((side1 + side2 <= side3) ||
            (side1 + side3 <= side2) ||
            (side2 + side3 <= side1))
            throw invalid_argument("Sum of any two sides must be greater than the third side.");

        a = side1;
        b = side2;
        c = side3;
    }

    // Function to display sides
    void displaySides() const {
        cout << "Sides: a = " << a << ", b = " << b << ", c = " << c << endl;
    }

    // Overloaded function to calculate area using Heron's formula
    double area() const {
        double s = (a + b + c) / 2.0;
        return sqrt(s * (s - a) * (s - b) * (s - c));
    }

    // Overloaded function to calculate area of right-angled triangle
    double area(double base, double height) const {
        if (base <= 0 || height <= 0)
            throw invalid_argument("Base and height must be greater than 0.");
        return 0.5 * base * height;
    }
};

// ------------------ MAIN FUNCTION ------------------
int main() {
    try {
        // Creating a general triangle (e.g., 7, 10, 5)
        Triangle t1(7, 10, 5);
        t1.displaySides();
        cout << "Area using Heron's formula: " << t1.area() << endl;

        // Area of a right-angled triangle (e.g., base=3, height=4)
        cout << "\nArea of right-angled triangle (base=3, height=4): ";
        cout << t1.area(3, 4) << endl;

        // Uncomment to test invalid triangle (will throw exception)
        // Triangle t2(1, 2, 10);  // Invalid triangle

    } catch (const exception& e) {
        cerr << "Exception: " << e.what() << endl;
    }

    return 0;
}
