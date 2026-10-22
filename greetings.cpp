#include <iostream>
using namespace std;

int main() {
    string name;
    cout << "What is your name? ";
    //Get the input in the whole line until the user press "Enter"
    getline(cin, name);
    cout << "\nHello " << name << ", welcome to C++ Programming";
    return 0;
}