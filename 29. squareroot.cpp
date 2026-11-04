#include <iostream>
using namespace std;
 int main() {
    double number, square_root;
    cout << "Enter a number to find the Square root: ";
    cin >> number;

    if(!cin) {
        cerr << "Input Error: Enter numbers only";
        return 1;
    } else {
        square_root = number * number;
        cout << number << " ^ " << "2 = " << square_root;
        return 0;
    }
    return 0;
 }