#include <iostream>
using namespace std;

int main() {
    int num1, num2, init;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;
    
    init = num1;
    num1 = num2;

    num2 = init;

    cout << "\nThe Initial numbers are: "; 
    cout<< "\nFirst number: " << init;
    cout << "\nSecond number: " <<  num1;


    cout << "\n\nAfter swapping: ";
    cout << "\nFirst number: " << num1 << "\n";
    cout << "Second number: " << num2;
    return 0;
}