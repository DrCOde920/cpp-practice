#include <iostream>
#include <windows.h>
#include <cmath>
using namespace std;

int main() {
    int option;


    cout << "==================[ SIMPLE CALCULATOR ]==================\n";

    cout << "\n>>>> [BASIC ARITHMETICS] <<<<\n";
    cout << "[1] Addition " << "\n";
    cout << "[2] Subtraction " << "\n";
    cout << "[3] Multiplication " << "\n";
    cout << "[4] Division " << "\n";
    cout << "[5] Modulus " << "\n";
    cout << "[6] Exponent " << "\n";
    cout << "[7] Difference " << "\n";
    // cout << "[8] " << "\n";
    // cout << "[9] " << "\n";
    // cout << "[10] " << "\n";
    // cout << "[11] " << "\n";
    // cout << "[12] " << "\n";
    // cout << "[13] " << "\n";
    // cout << "[14] " << "\n";
    // cout << "[15] " << "\n";
    // cout << "[16] " << "\n";
    // cout << "[17] " << "\n";
    // cout << "[18] " << "\n";
    // cout << "[19] " << "\n";
    // cout << "[20] " << "\n";
    // cout << "[21] " << "\n";
    // cout << "[22] " << "\n";
    // cout << "[23] " << "\n";
    // cout << "[24] " << "\n";
    // cout << "[25] " << "\n";
    // cout << "[26] " << "\n";
    // cout << "[27] " << "\n";

    cout << "\nChoose calculation you want to execute [1 - 7]: ";
    cin >> option;

    switch (option) {
    case 1:
            double a, b, sum;
            cout << "==> Enter a first number: ";
            cin >> a;
            cout << "==> Enter a second number: ";
            cin >> b;
            
            sum = a + b;

            cout << a << " + " << b << " = " << sum;
            return 0;
        break;
    case 2:
        double firstnumber, secondnumber, sub;
        cout << "==> Enter first number: ";
        cin >> firstnumber;
        cout << "==> Enter second number: ";
        cin >> secondnumber;

        sub = firstnumber - secondnumber;

        cout << firstnumber << " - " << secondnumber << " = " << sub;
        return 0;
        break;
    case 3:
        double num1, num2, multiply;
        cout << "==> Enter first number: ";
        cin >> num1;
        cout << "==> Enter second number: ";
        cin >> num2;

        multiply = num1 * num2;

        cout << num1 << " x " << num2 << " = " << multiply;
        return 0;
        break;
    case 4:
        SetConsoleOutputCP(CP_UTF8); //To help us use the division sign
        double number1, number2, divide;
        cout << "==> Enter first number: ";
        cin >> number1;
        cout << "==> Enter second number: ";
        cin >> number2;

        if (number2 == 0) {
            cerr << "Error: cannot divide by zero";
            return 1;
        }

        divide = number1 / number2;
        cout << number1 << " ÷ " << number2 << " = " << divide;
        return 0;
        break;
    case 5:
        int mod, modulo, modulus;

        cout << "==> Enter mod: ";
        cin >> mod;
        cout << "==>Enter modulo: ";
        cin >> modulo;

        modulus = mod % modulo;

        if (mod <= 0) {
            cerr << "Error: mod must be greater than 0";
            return 1;
        } else if (modulo <= 0) {
            cerr << "Error: modulo must be greater than 0";
            return 2;
        } else if (mod == modulo) {
            cerr << "Error: mod and modulo must not be equal";
            return 3;
        } else {
            cout << mod << " mod " << modulo << " = " << modulus << endl;
            return 0;
        }
        return 0;
        break;
    case 6:
        int base, exponent;
        double answer;

        cout << "==> Enter Base number: ";
        cin >> base;
        cout << "==> Enter Exponent: ";
        cin >> exponent;

        answer = pow(base, exponent);

        cout << base << " ^ " << exponent << " = " << answer;

        return 0;
        break;
    case 7:
        double first_num, second_num, difference;

        cout << "==> Enter first number: ";
        cin >> first_num;

        cout << "==> Enter second number: ";
        cin >> second_num;

        difference = first_num - second_num;

        cout << "The diference between " << first_num << " and " << second_num << " is " << difference;
        return 0;
        break;
    default:
        cerr << "Input Error: enter numbers between [1 - 7]";
        return 1;
        break;
    }
    return 0;
}