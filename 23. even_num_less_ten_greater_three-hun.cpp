#include <iostream> 
using namespace std;

int main() {
    for(int i = 11; i < 300; i++)  {
        if(i % 2 == 0) {
            cout << i << "\n";
        }
    }
    return 0;
}