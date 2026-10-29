#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int base, exponent;
    double answer;

    cout << "Enter Base number: ";
    cin >> base;
    cout << "Enter Exponent: ";
    cin >> exponent;

    answer = pow(base, exponent);

    cout << base << " ^ " << exponent << " = " << answer;

    return 0;
}