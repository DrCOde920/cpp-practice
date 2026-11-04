#include <iostream>
#include <cctype>
using namespace std;

int main() {
    char character;
    cout << "Enter a letter: ";
    cin >> character;

    if(!cin) {
        cerr << "Input Error: enter Characters only e.g 'A', 'B' ";
        return 1;
    } else {
        cout << "You typed: " << character;
        return 0;
    }
    return 0;
}