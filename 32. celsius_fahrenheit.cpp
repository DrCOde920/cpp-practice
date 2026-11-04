#include <iostream>
using namespace std;

int main() {
    double celsius, convert;

    cout << "Enter temperature (in Celsius): ";
    cin >> celsius;

    convert = (celsius * 9.0 / 5.0) + 32;

    cout << celsius << "deg = " << convert << "deg fahrenheit";
    return 0;
}