#include <iostream>
using namespace std;

int arrA[] = {11, 8, 5, 7, 12, 26, 3, 54, 33, 55};
int n = 10;

int cariMinimum() {
    int minVal = arrA[0];
    for (int i = 1; i < n; i++) {
        if (arrA[i] < minVal) {
            minVal = arrA[i];
        }
    }
    return minVal;
}

int cariMaksimum() {
    int maxVal = arrA[0];
    for (int i = 1; i < n; i++) {
        if (arrA[i] > maxVal) {
            maxVal = arrA[i];
        }
    }
    return maxVal;
}

void hitungRataRata() {
    int total = 0;
    for (int i = 0; i < n; i++) {
        total += arrA[i];
    }
    double rata = (double)total / n;
    cout << "Nilai Rata-rata: " << rata << endl;
}

int main() {
    int pilihan;
    
    do {
        cout << "\n--- Menu Program Array ---\n";
        cout << "1. Tampilkan isi array\n";
        cout << "2. Cari nilai maksimum\n";
        cout << "3. Cari nilai minimum\n";
        cout << "4. Hitung nilai rata-rata\n";
        cout << "5. Keluar\n";
        cout << "Pilih menu (1-5): ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                cout << "Isi Array: ";
                for (int i = 0; i < n; i++) {
                    cout << arrA[i] << " ";
                }
                cout << endl;
                break;
            case 2:
                cout << "Nilai Maksimum: " << cariMaksimum() << endl;
                break;
            case 3:
                cout << "Nilai Minimum: " << cariMinimum() << endl;
                break;
            case 4:
                hitungRataRata();
                break;
            case 5:
                cout << "Keluar dari program.\n";
                break;
            default:
                cout << "Pilihan tidak valid. Silakan coba lagi.\n";
        }
    } while (pilihan != 5);

    return 0;
}