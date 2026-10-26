#include <iostream>
using namespace std;

int main() {
    double num1, num2, avg;

    cout << "Enter first number: ";
    cin >> num1;

    cout  << "Enter second number: ";
    cin >> num2;

    avg = (num1 + num2) / 2;

    cout << "The average of " << num1 << " and " << num2 << " = " << avg;
    
    return 0;
}