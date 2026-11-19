#include "doublylist.h"

address findElm(List L, string x) {
    address P = L; 
    while (P != NULL) {
        if (P->info.nomorPolisi == x) {
            return P; 
        }
        P = P->next;
    }
    return NULL;
}

void deleteFirst(List &L, address &P) {
    if (L == NULL) {
        cout << "List kosong." << endl;
    } else if (L->next == NULL) {
        P = L;
        L = NULL;
    } else {
        P = L;
        L = L->next;
        L->prev = NULL;
        P->next = NULL;
    }
}

void deleteLast(List &L, address &P) {
    if (L == NULL) {
        cout << "List kosong." << endl;
    } else if (L->next == NULL) {
        P = L;
        L = NULL;
    } else {
        address Q = L;
        while (Q->next != NULL) {
            Q = Q->next;
        }
        P = Q;
        Q = Q->prev;
        Q->next = NULL;
        P->prev = NULL;
    }
}

void deleteAfter(address Prec, address &P) {
    if (Prec == NULL || Prec->next == NULL) {
        cout << "Prec tidak valid atau tidak ada elemen setelahnya." << endl;
    } else {
        P = Prec->next;
        Prec->next = P->next;
        if (P->next != NULL) {
            P->next->prev = Prec;
        }
        P->next = NULL;
        P->prev = NULL;
    }
}