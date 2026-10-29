#include <iostream>
using namespace std;

int main() {
    int number;

    cout << "Check if number is Even or Odd: ";
    cin >> number;
    

    if (number % 2 == 0) {
        cout << number << " is an Even number";
        return 0;
    } else {
        cout << number << " is an Odd number";
        return 0;
    }
}