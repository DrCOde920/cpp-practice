#include <iostream>
#include <string>

using namespace std;

int main() {
    /* Write a C++ code that will ask for your name and when you enter a name,
    it will display (Your name is __). */

    string name;
    cout << "What is your name? ";
    cin >> name;

    cout << "Your name is " << name;

    return 0;
}