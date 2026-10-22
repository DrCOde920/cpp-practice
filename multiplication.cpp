#include <iostream>
using namespace std;

int main() {
    int num1, num2, multiply;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    multiply = num1 * num2;

    cout << num1 << " x " << num2 << " = " << multiply;
    return 0;
}