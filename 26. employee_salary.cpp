#include <iomanip>
#include <iostream>
using namespace std;
int main() {
    double basicSalary{};
    double deductions{};

    cout << "Enter the employee's basic salary: ";
    cin >> basicSalary;
    cout << "Enter total deductions (enter 0 if none): ";
    cin >> deductions;

    if (!cin || basicSalary < 0 || deductions < 0) {
        cerr << "Please enter valid non-negative amounts.\n";
        return 1;
    }

    // Assumption: overtime pay is 2% of the basic salary.
    const double overtimePay = basicSalary * 0.02;
    const double grossSalary = basicSalary + overtimePay;
    const double netSalary = grossSalary - deductions;

    cout << fixed << setprecision(2);
    cout << "Overtime pay: " << overtimePay << '\n';
    cout << "Gross salary: " << grossSalary << '\n';
    cout << "Net salary:   " << netSalary << '\n';
    return 0;
}
