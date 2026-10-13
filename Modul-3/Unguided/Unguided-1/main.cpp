#include <iostream>
#include "mahasiswa.h"

using namespace std;

int main() {
    const int MAX_DATA = 10;
    mahasiswa mhs[MAX_DATA];
    int jumlah_input;

    cout << "Masukkan jumlah mahasiswa (max 10): ";
    cin >> jumlah_input;
    cin.ignore();

    if (jumlah_input > MAX_DATA) {
        jumlah_input = MAX_DATA;
    }

    for (int i = 0; i < jumlah_input; i++) {
        cout << "\nMahasiswa ke-" << i + 1 << endl;
        inputMahasiswa(mhs[i]);
    }

    cout << "\n=== DATA MAHASISWA ===\n";
    for (int i = 0; i < jumlah_input; i++) {
        cout << "\nMahasiswa ke-" << i + 1 << endl;
        outputMahasiswa(mhs[i]);
    }

    return 0;
}
