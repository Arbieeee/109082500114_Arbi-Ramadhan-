#ifndef DOUBLYLIST_H
#define DOUBLYLIST_H

#include <iostream>
#include <string>
using namespace std;

struct infotype {
    string nomorPolisi;
    string warna;
    int tahun;
};

struct Elemen {
    infotype info;
    Elemen* next;
    Elemen* prev; 
};

typedef Elemen* address;
typedef Elemen* List;

address findElm(List L, string x);

void deleteFirst(List &L, address &P);
void deleteLast(List &L, address &P);
void deleteAfter(address Prec, address &P);

#endif