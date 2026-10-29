#include <iostream>
using namespace std;

int main() {
    double length, breadth, area;

    cout << "Enter the length of the rectangle: ";
    cin >> length;

    cout << "Enter the width of the rectangle: ";
    cin >> breadth;

    area = length * breadth;

    cout << "Area = " << area << " cm^2" << endl;
    return 0;
}