#include <iostream>
#include "doublylist.h"
using namespace std;

void printList(List L) {
    address P = L;
    while (P != NULL) {
        cout << "Nomor Polisi : " << P->info.nomorPolisi << endl;
        cout << "Warna        : " << P->info.warna << endl;
        cout << "Tahun        : " << P->info.tahun << endl;
        P = P->next;
    }
}

int main() {
    
    address P1 = new Elemen;
    P1->info = {"D004", "kuning", 90};
    
    address P2 = new Elemen;
    P2->info = {"D003", "biru", 95};
    
    address P3 = new Elemen;
    P3->info = {"D001", "hitam", 90};
    
    P1->next = P2; P1->prev = NULL;
    P2->next = P3; P2->prev = P1;
    P3->next = NULL; P3->prev = P2;
    
    List L = P1;

    string targetHapus;
    cout << "Masukkan Nomor Polisi yang akan dihapus : ";
    cin >> targetHapus;
    
    address target = findElm(L, targetHapus);
    address P_hapus = NULL;
    
    if (target != NULL) {
        if (target == L) {
            deleteFirst(L, P_hapus);
        } else if (target->next == NULL) {
            deleteLast(L, P_hapus);
        } else {
            address prec = target->prev;
            deleteAfter(prec, P_hapus);
        }
        
        cout << "Data dengan nomor polisi " << targetHapus << " berhasil dihapus." << endl;
    } else {
        cout << "Data tidak ditemukan." << endl;
    }

    cout << "\nDATA LIST 1" << endl;
    cout << endl;
    printList(L);

    return 0;
}