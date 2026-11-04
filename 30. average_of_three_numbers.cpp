#include <iostream>
using namespace std;

int main() {
    double num1, num2, num3, average;
    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;

    if(!cin) {
        cerr << "Input Error: Input numbers only";
        return 1;
    } else {
        average = (num1 + num2 + num3) / 3;
        cout << "The average of " << num1 << ", " << num2 << ", and " << num3 << " is " << average;
        return 0;
    }
    return 0;
}