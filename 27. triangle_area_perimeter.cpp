#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    double base{};
    double height{};
    double side1{};
    double side2{};
    double side3{};

    cout << "Enter the triangle's base: ";
    cin >> base;
    cout << "Enter the perpendicular height for that base: ";
    cin >> height;
    cout << "Enter the lengths of the three sides: ";
    cin >> side1 >> side2 >> side3;

    if (!cin || base <= 0 || height <= 0 || side1 <= 0 || side2 <= 0 || side3 <= 0) {
        cerr << "Please enter positive numbers.\n";
        return 1;
    }

    if (side1 + side2 <= side3 || side1 + side3 <= side2 || side2 + side3 <= side1) {
        cerr << "Those side lengths cannot form a triangle.\n";
        return 1;
    }

    const double area = (base * height) / 2.0;
    const double perimeter = side1 + side2 + side3;

    cout << fixed << setprecision(2);
    cout << "Area of the triangle: " << area << '\n';
    cout << "Perimeter of the triangle: " << perimeter << '\n';
    return 0;
}
