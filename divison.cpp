#include <iostream> 
#include <windows.h> // this library helps me bring in characters like utf-8 char and don't get anything weird

using namespace std;

int main() {
    /*Taking user input and diving them
    the user enters any two numbers of their choice
    and ther program does it's part*/


    // Windows Terminal to display UTF-8 symbols like '÷' correctly
    SetConsoleOutputCP(CP_UTF8);


    /*Initially I used "int" and realised users can decide to enter whole numbers and my result
    will be a "decimal but the compiler will convert the answer to an inter which we don't want "*/ 

    double number1, number2, divide;
    cout << "Enter first number: ";
    cin >> number1;
    cout << "Enter second number: ";
    cin >> number2;

    if (number2 == 0) {
        cout << "Error: cannot divide by zero";
        return 1;
    }

    divide = number1 / number2;
    cout << number1 << " ÷ " << number2 << " = " << divide;

    return 0;
}