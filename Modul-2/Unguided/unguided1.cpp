#include <iostream>
using namespace std;

int main() {
    int matA[3][3], matB[3][3], hasil[3][3];
    int pilihan;

    cout << "Masukkan elemen Matriks A (3x3):\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> matA[i][j];
        }
    }

    cout << "Masukkan elemen Matriks B (3x3):\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> matB[i][j];
        }
    }

    cout << "\nPilih Operasi:\n1. Penjumlahan\n2. Pengurangan\n3. Perkalian\nPilihan: ";
    cin >> pilihan;

    if (pilihan == 1) {
        for (int i = 0; i < 3; i++)
            for (int j = 0; j < 3; j++)
                hasil[i][j] = matA[i][j] + matB[i][j];
        cout << "Hasil Penjumlahan:\n";
    } 
    else if (pilihan == 2) {
        for (int i = 0; i < 3; i++)
            for (int j = 0; j < 3; j++)
                hasil[i][j] = matA[i][j] - matB[i][j];
        cout << "Hasil Pengurangan:\n";
    } 
    else if (pilihan == 3) {
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                hasil[i][j] = 0;
                for (int k = 0; k < 3; k++) {
                    hasil[i][j] += matA[i][k] * matB[k][j];
                }
            }
        }
        cout << "Hasil Perkalian:\n";
    } 
    else {
        cout << "Pilihan tidak valid.";
        return 0;
    }

    // Menampilkan hasil
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << hasil[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}