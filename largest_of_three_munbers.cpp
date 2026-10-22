#include <iostream>
using namespace std;

int main() {
    double num1, num2, num3;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    cout << "Enter third number: ";
    cin >> num3;

    // num1 > num2 && num3
    //num2 > num1 && num3
    //num3 > num1 && num2
    //num1 == num2 == num3

    if (num1 > num2 && num3) {
        cout << num1 << " is greater than " << num2 << " and " << num3;
    } else if (num2 > num1 && num3) {
        cout << num2 <<" is greater than " << num1 << " and " << num3;
    } else if (num3 > num1 && num2) {
        cout << num3 << " is greater than " << num1 << " and " << num2;
    } else {
        cout << num1 << ", " << num2 << " and " << num3 << " are equal";
    }
    return 0;
}