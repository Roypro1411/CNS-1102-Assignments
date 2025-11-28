#include <iostream>
#include <cmath>

using namespace std;

// Function to calculate the roots of a quadratic equation
void findRoots(double a, double b, double c) {
    double discriminant = b * b - 4 * a * c;
    
    if (discriminant > 0) {
        double root1 = (-b + sqrt(discriminant)) / (2 * a);
        double root2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "Roots are real and distinct." << endl;
        cout << "Root 1: " << root1 << endl;
        cout << "Root 2: " << root2 << endl;
    } else if (discriminant == 0) {
        double root = -b / (2 * a);
        cout << "Roots are real and equal." << endl;
        cout << "Root: " << root << endl;
    } else {
        double realPart = -b / (2 * a);
        double imaginaryPart = sqrt(-discriminant) / (2 * a);
        cout << "Roots are complex and distinct." << endl;
        cout << "Root 1: " << realPart << " + " << imaginaryPart << "i" << endl;
        cout << "Root 2: " << realPart << " - " << imaginaryPart << "i" << endl;
    }
}

int main() {
    double a, b, c;
    
    // Input coefficients
    cout << "Enter coefficients a, b, c: ";
    cin >> a >> b >> c;
    
    // Check if it's a quadratic equation
    if (a == 0) {
        cout << "Not a quadratic equation (a = 0)." << endl;
    } else {
        // Call function to find roots
        findRoots(a, b, c);
    }
    
    return 0;
}
