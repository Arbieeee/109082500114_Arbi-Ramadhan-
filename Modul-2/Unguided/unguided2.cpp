#include <iostream>
using namespace std;

void tukar(int &x, int &y, int &z) {
    int temp;
    
    temp = x;
    x = z;
    z = y;
    y = temp;
}

int main() {
    int a = 10, b = 20, c = 30;

    cout << "Sebelum ditukar :" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;

    tukar(a, b, c);

    cout << "\nSetelah ditukar :" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;

    return 0;
}