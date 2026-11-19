#include "Doublylist.h"
#include <iostream>

using namespace std;

int main() {
    List L;
    CreateList(L);

    int jumlahInput = 4;
    infotype dataKendaraan;

    for (int i = 1; i <= jumlahInput; i++) {
        cout << "masukkan nomor polisi: ";
        cin >> dataKendaraan.nopol;
        cout << "masukkan warna kendaraan: ";
        cin >> dataKendaraan.warna;
        cout << "masukkan tahun kendaraan: ";
        cin >> dataKendaraan.thnBuat;
        cout << endl;
        
        if (isNopolExist(L, dataKendaraan.nopol)) {
            cout << "nomor polisi sudah terdaftar" << endl << endl;
        } else {
            address P = alokasi(dataKendaraan);
            insertLast(L, P);
        }
    }

    cout << "DATA LIST 1" << endl << endl;
    printInfo(L);

    return 0;
}