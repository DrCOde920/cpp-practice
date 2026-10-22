#include <iostream>
using namespace std;

int main() {

    // Simple Interest = Principal x Annual Interest Rate x time
    // I = P x r x t

    double interest, principal, rate, time, decimal_rate;

    cout << "Enter the Principal (money borrowed / invested): ";
    cin >> principal;

    cout << "Enter the Annual Rate (e.g. 5%): ";
    cin >> rate;



    cout << "Enter the Time (years): ";
    cin >> time;

    if (rate > 100) {
        cout << "Rate cannot be more than 100%";
    }

    decimal_rate = rate / 100;

    interest = principal * decimal_rate * time;

    cout << "Simple Interest = " << interest;

    return 0;
}