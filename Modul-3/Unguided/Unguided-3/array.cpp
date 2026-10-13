#include "array.h"
#include <iostream>

using namespace std;

void tampilkanArray(int arr[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
}

void tukarElemenArray(int (*arrA)[3], int (*arrB)[3], int barisA, int kolomA, int barisB, int kolomB) {
    int *ptrA = (*(arrA + barisA) + kolomA);
    int *ptrB = (*(arrB + barisB) + kolomB);
    
    int temp = *ptrA;
    *ptrA = *ptrB;
    *ptrB = temp;
}

void tukarPointer(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}