#include <iostream>
#include <string>
using namespace std;

int main() {
    int angka;
    
    string satuan[] = {"nol", "satu", "dua", "tiga", "empat", "lima", "enam", "tujuh", "delapan", "sembilan"};
    string belasan[] = {"sepuluh", "sebelas", "dua belas", "tiga belas", "empat belas", "lima belas", "enam belas", "tujuh belas", "delapan belas", "sembilan belas"};

    cout << "Masukkan angka (0-100): ";
    cin >> angka;

    if (angka < 0 || angka > 100) {
        cout << "Angka harus 0-100." << endl;
    } else {
        cout << angka << " : ";
        
        if (angka == 100) {
            cout << "seratus";
        } 
        else if (angka >= 20) {
            int puluhan = angka / 10;
            int sisa = angka % 10;
            
            cout << satuan[puluhan] << " puluh";
            if (sisa != 0) {
                cout << " " << satuan[sisa];
            }
        } 
        else if (angka >= 10) {
            cout << belasan[angka - 10];
        } 
        else {
            cout << satuan[angka];
        }
    }
    cout << endl;
    return 0;
}