#include <iostream>
using namespace std;

int main() {
    int leap;
    cout << "Check if the year is a leap year: ";
    cin >> leap;
    
    if(leap % 4 == 0) {
        cout << leap << " is a leap year.";
    } else if(leap % 400 == 0) {
        cout << leap << " is a leap year.";
    } else if(leap % 100 == 0) {
        cout << leap << " is not a leap year.";
    }else {
        cout << leap << " is not a leap year.";
    }
    return 0;
}