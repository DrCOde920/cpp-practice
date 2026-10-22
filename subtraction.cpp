#include <iostream>
using namespace std;


int main() {
    int firstnumber, secondnumber, sub;
    cout << "Enter first number: ";
    cin >> firstnumber;
    cout << "Enter second number: ";
    cin >> secondnumber;

    sub = firstnumber - secondnumber;

    cout << firstnumber << " - " << secondnumber << " = " << sub;
    return 0;
}