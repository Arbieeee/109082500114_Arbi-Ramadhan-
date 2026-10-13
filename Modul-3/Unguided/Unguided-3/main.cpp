#include <iostream>
#include "array.h"

using namespace std;

int main() {
    int arrayA[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int arrayB[3][3] = {
        {11, 22, 33},
        {44, 55, 66},
        {77, 88, 99}
    };

    cout << "Array A sebelum ditukar:" << endl;
    tampilkanArray(arrayA);
    cout << "\nArray B sebelum ditukar:" << endl;
    tampilkanArray(arrayB);

    tukarElemenArray(arrayA, arrayB, 0, 0, 1, 1);

    cout << "\nArray A setelah ditukar:" << endl;
    tampilkanArray(arrayA);
    cout << "\nArray B setelah ditukar:" << endl;
    tampilkanArray(arrayB);

    int x = 20;
    int y = 30;

    cout << "\nSebelum pointer ditukar:" << endl;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;

    tukarPointer(&x, &y);

    cout << "\nSetelah pointer ditukar:" << endl;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;

    return 0;
}