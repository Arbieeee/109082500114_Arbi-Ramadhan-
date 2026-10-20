#include "SinglyList.h"
#include <iostream>

using namespace std;

int main() {
    List L;
    address P1, P2, P3, P4, P5, PDel;
    P1 = NULL; P2 = NULL; P3 = NULL; P4 = NULL; P5 = NULL;

    createList(L);
    P1 = alokasi(2); insertFirst(L, P1);
    P2 = alokasi(0); insertFirst(L, P2);
    P3 = alokasi(8); insertFirst(L, P3);
    P4 = alokasi(12); insertFirst(L, P4);
    P5 = alokasi(9); insertFirst(L, P5);

    deleteFirst(L, PDel);
    
    deleteLast(L, PDel);
    
    address Prec = L.First; 
    deleteAfter(Prec, PDel);

    printInfo(L);

    cout << "Jumlah node : " << nbList(L) << endl;
    cout << endl;

    deleteList(L);

    cout << "- List Berhasil Terhapus -" << endl;
    cout << "Jumlah node : " << nbList(L) << endl;

    return 0;
}