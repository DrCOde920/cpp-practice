#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    a = 5;
    b = 10;

    c = a;
    a = b;
    b = c;
    
    cout << "a = " << a << " and " << " b = " << b;
    return 0;
}