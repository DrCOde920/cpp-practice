#include <iostream>
using namespace std;


int main() {
    // For modulus to be true out numbers must be "int" so no need for if conditions haha
    int mod, modulo, modulus;

    cout << "Enter mod: ";
    cin >> mod;
    cout << "Enter modulo: ";
    cin >> modulo;

    modulus = mod % modulo;

    if (mod <= 0) {
        cout << "Error: mod must be greater than 0";
        return 1;
    } else if (modulo <= 0) {
        cout << "Error: modulo must be greater than 0";
        return 2;
    } else if (mod == modulo) {
        cout << "Error: mod and modulo must not be equal";
        return 3;
    } else {
        cout << mod << " mod " << modulo << " = " << modulus << endl;
        return 0;
    }
    return 0;
}