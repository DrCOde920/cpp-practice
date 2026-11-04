#include <cctype>
#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    char tvType{};
    int screenSize{};
    double sellingPrice{};
    double discountPercent{};

    cout << "TV type: enter B for black and white or C for colored: ";
    cin >> tvType;
    tvType = static_cast<char>(toupper(static_cast<unsigned char>(tvType)));

    cout << "Enter the selling price: ";
    cin >> sellingPrice;
    if (!cin || sellingPrice < 0) {
        cerr << "Please enter a valid non-negative selling price.\n";
        return 1;
    }

    if (tvType == 'B') {
        discountPercent = 5;
    } else if (tvType == 'C') {
        cout << "Enter the colored TV screen size (14 or 21 inches): ";
        cin >> screenSize;
        if (!cin) {
            cerr << "Please enter a valid screen size.\n";
            return 1;
        }

        if (screenSize == 14) {
            discountPercent = 8;
        } else if (screenSize == 21) {
            discountPercent = 10;
        } else {
            cerr << "For a colored TV, screen size must be 14 or 21 inches.\n";
            return 1;
        }
    } else {
        cerr << "TV type must be B or C.\n";
        return 1;
    }

    const double discountAmount = sellingPrice * discountPercent / 100.0;
    const double finalPrice = sellingPrice - discountAmount;

    cout << fixed << setprecision(2);
    cout << "Discount: " << discountPercent << "%\n";
    cout << "Discount amount: " << discountAmount << '\n';
    cout << "Price after discount: " << finalPrice << '\n';
    return 0;
}
