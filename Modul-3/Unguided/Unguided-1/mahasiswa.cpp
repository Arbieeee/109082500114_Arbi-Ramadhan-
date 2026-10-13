#include "mahasiswa.h"
#include <iostream>
#include <cstring>

using namespace std;

float hitungNilaiAkhir(mahasiswa m) {
    return (0.3 * m.uts) + (0.4 * m.uas) + (0.3 * m.tugas);
}

void inputMahasiswa(mahasiswa &m) {
    cout << "Nama : ";
    cin.getline(m.nama, 50);
    cout << "NIM : ";
    cin.getline(m.nim, 15);
    cout << "Nilai UTS : ";
    cin >> m.uts;
    cout << "Nilai UAS : ";
    cin >> m.uas;
    cout << "Nilai Tugas : ";
    cin >> m.tugas;
    cin.ignore();
    
    
    m.nilaiAkhir = hitungNilaiAkhir(m);
}

void outputMahasiswa(mahasiswa m) {
    cout << "Nama         : " << m.nama << endl;
    cout << "NIM          : " << m.nim << endl;
    cout << "Nilai UTS    : " << m.uts << endl;
    cout << "Nilai UAS    : " << m.uas << endl;
    cout << "Nilai Tugas  : " << m.tugas << endl;
    cout << "Nilai Akhir  : " << m.nilaiAkhir << endl;
}