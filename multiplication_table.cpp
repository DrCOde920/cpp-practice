#include <iostream>
using namespace std;

int main() {
    int number;

    cout << "Enter the number for the times table: ";
    cin >> number;

    for (int i = 1; i<=12; i++) {
        cout << number << " x " << i << " = " << i * number << "\n";
    }
    return 0;
}