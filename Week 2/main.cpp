#include <iostream>
using namespace std;    

int main() {
    int a;
    cin >> a;
    cout << "You enterred:" << a << endl;

    if (a > 0) {
        cout << "The number is positive." << endl;
    } else if (a < 0) {
        cout << "The number is nefative." << endl;
    } else {
        cout << "The number is zero." << endl;
    }
    return 0;
    }