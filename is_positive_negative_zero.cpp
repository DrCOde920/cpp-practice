#include <iostream>
using namespace std;

int main() {
    double num;

    cout << "Verify if number is (positive, negative or zero): ";
    cin >> num;

    if (num < 0) {
        cout << num << " is a negative number";
    } else if (num == 0) {
        cout << num << " is zero";
    } else {
        cout << num << " is a positive number";
    }
    
    return 0;
}