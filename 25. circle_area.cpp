#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    double radius{};
    cout << "Enter the circle's radius: ";
    cin >> radius;

    if (!cin || radius < 0) {
        cerr << "Please enter a non-negative radius.\n";
        return 1;
    }

    constexpr double pi = 3.141592653589793;
    const double area = pi * radius * radius;

    cout << fixed << setprecision(2) << "Area of the circle: " << area << '\n';
    return 0;
}
