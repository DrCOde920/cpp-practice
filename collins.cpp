#include <iostream>
#include <string>
using namespace std ;

int main(){

    string maleName;
    cout << "Enter you name: ";
    cin >> maleName; 

    string isMale[4] = {"Lemuel", "Douglas", "Stanislaus", "Derrick"};

    for (int i = 0; i <=4; i++) {
        cout << isMale[i] << "\n";
        cout << maleName << "\n";
    }
    return 0;
}