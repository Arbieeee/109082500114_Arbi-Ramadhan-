#ifndef LIST_H
#define LIST_H
#define Nil nullptr

#include <iostream>
using namespace std;

// deklarasi isi data struct mahasiswa
struct mahasiswa {
    string nama;
    string nim;
    int umur;
};

typedef mahasiswa dataMahasiswa; // memberikan nama alias dataMahasiswa untuk struct mahasiswa

typedef struct node *address; // mendefinisikan alias address sebagainpointer ke struct node

struct node { // node untuk isi dari linked list nya, isis setiap node adalah data & pointer next
    dataMahasiswa isidata;
    address next;
};

struct LinkedList { // ini linkedl listnya
    address first;
};

// semua function & prosedure yang akan dipakai 
bool isEmpty(LinkedList list);
void createList(LinkedList &list);
address alokasi(string nama, string nim, int umur);
void dealokasi(address &node);
void printList(LinkedList List);
void insertFirst(LinkedList &list, address nodeBaru);
void insertAfter(LinkedList &list, address nodeBaru, address Prev);
void insertLast(LinkedList &list, address nodeBaru);

void delFirst(LinkedList &list);
void delLast(LinkedList &list);
void delAfter(LinkedList &List, address nodeHapus, address nodePrev);
int nbList(LinkedList List);
void deleteList(LinkedList & List);

#endif