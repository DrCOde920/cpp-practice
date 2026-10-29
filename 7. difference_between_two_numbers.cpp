#include <iostream>
using namespace std;

int main() {
    double first_num, second_num, difference;

    cout << "Enter first number: ";
    cin >> first_num;

    cout << "Enter second number: ";
    cin >> second_num;

    difference = first_num - second_num;

    cout << "The diference between " << first_num << " and " << second_num << " is " << difference;
    return 0;
}