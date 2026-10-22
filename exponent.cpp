#include <iostream>
using namespace std;

int main() {
    int base, exponent, answer;

    cout << "Enter Base number: ";
    cin >> base;
    cout << "Enter Exponent: ";
    cin >> exponent;

    answer = base ** exponent;

    cout << base << " ^ " << exponent << " = " << answer;

    return 0;
}