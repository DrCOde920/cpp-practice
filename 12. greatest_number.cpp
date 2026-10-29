#include <iostream> 
using namespace std;


int main() {
    double a, b;

    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter second number: ";
    cin >> b;

    if (a > b) {
        cout << a << " is greater than " << b;
    } else if (a < b) {
        cout << b << " is greater than " << a;
    } else {
        cout << a << " and " << b << " are equal.";
    }
    return 0;
}