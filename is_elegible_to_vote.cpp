#include <iostream>
using namespace std;

int main() {
    string name;
    int age;

    cout << "What is your name? ";
    getline(cin, name);

    cout << "WHat is your age? ";
    cin >> age;

    if (age <= 17) {
        cout << "Dear " << name << ", Your below 18 year, you are not elegible to vote!";
        return 1;
    } else if (age >=60) {
        cout << "Dear " << name << ", you're no longer a citizen of the youth. You are not elegible to vote";
        return 2;
    } else {
        cout << "Dear " << name << ", You are elegible to vote as you are between 17 and 60 years";
        return 0;
    }
    return 0;
}