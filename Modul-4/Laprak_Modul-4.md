# <h1 align="center">Laporan Praktikum Modul 4 - SINGLY LINKED LIST (BAGIAN PERTAMA)</h1>
<p align="center">Arbi Ramadhan - 109082500114</p>

## Dasar Teori

### A. Linked List dengan Pointer<br/>
Linked list atau biasa disebut list adalah salah satu bentuk struktur data berupa serangkaian elemen data yang saling berhubungan [1]. Struktur ini bersifat fleksibel karena dapat bertambah dan berkurang sesuai kebutuhan [1]. Data yang disimpan dalam linked list bisa berupa data tunggal, misalnya nama bertipe string, atau data majemuk (record), seperti pada data mahasiswa yang terdiri dari nama, NIM, dan alamat [1]. Linked list dapat dibuat dengan array maupun pointer [1]. Pada praktikum ini linked list yang digunakan adalah pointer karena beberapa alasan, yaitu:

#### 1. Array bersifat statis, sedangkan pointer bersifat dinamis [1].
#### 2. Elemen pada linked list saling berhubungan, sehingga lebih mudah dihubungkan dengan pointer [1].
#### 3. Sifat linked list yang fleksibel lebih cocok dengan pointer yang bisa diatur sesuai dengan kebutuhan [1].
#### 4. Array lebih cocok untuk data yang jumlah maksimumnya sudah diketahui dari awal [1].

Elemen linked list yang diakses dengan pointer dapat menggunakan tanda panah (```->```) atau tanda titik (```.```) [1].

### B.  Singly Linked List<br/>
Singly linked list adalah model linked list yang hanya memiliki satu arah pointer [1]. Setiap elemen terdiri dari dua bagian, yaitu data (informasi utama yang disimpan) dan successor (bagian yang menghubungkan ke elemen berikutnya) [1]. Sifat-sifat linked list:

#### 1. Hanya membutuhkan satu pointer [1].
#### 2. Node terakhir menunjukkan ke ```NULL```, kecuali pada list sirkular [1].
#### 3. Hanya bisa dibaca ke arah depan (maju) [1].
#### 4. Pencarian dilakukan secara sekuensial jika data tidak terurut [1].
#### 5. Penyisipan dan penghapusan di tengah list lebih mudah [1].

### C. Deklarasi Struktur Data<br/>
Deklarasi singly linked list ditulis pada file ```.h``` (header), contohnya sebagai berikut:

```C++
#define Nil NULL

typedef int infotype;
typedef struct elmlist *address;

struct elmlist {
    infotype info;
    address next;
};

struct list {
    address first;
};
```

```infotype``` adalah type data yang disimpan, ```address``` adalah pointer ke elemen, ```elmlist``` adalah elemen yang berisi ```info``` dan ```next```, dan ```list``` menyimpan ```first``` sebagai penunjuk elemen pertama. Jika datanya majemuk, misalnya mahasiswa, maka dibuat ```struct mahasiswa``` yang berisi nama dan NIM, lalu ```infotype``` didefinisikan sebagai ```mahasiswa```.

### D. Operasi pada Singly Linked List<br/>
Operasi dasar pada linked list meliputi penciptaan (create), penyisipan (insert), penghapusan (delete), penelusuran dan penampilan (view), pencarian (searching), dan pengubahan (update) [1].
#### 1. Pembentukan List (CreateList)
Proses membuat list baru dengan mengisi nilai awal ```first``` dengan ```NULL```, sehingga list kosong [1].
#### 2. Alokasi Memori
Proses memesan memori untuk setiap elemen baru [1]. Pada ```C``` digunakan ```malloc```, sedangkan pada ```C++``` digunakan ```new``` [1].
```C++
address alokasi(mahasiswa M){
    address P = new elmlist;
    P->info = M;
    return P;
}
```
#### 3. Dealokasi
Untuk menghapus memori yang telah dialokasikan, pada ```C``` menggunakan ```free``` sedangkan pada ```C++``` menggunakan delete [1].
#### 4. Insert First
Memasukkan elemen baru pada awal list [1].
```C++
void insertFirst(List &L, address &P) {
    P->next = L.first;
    L.first = P;
}
```
#### 5. Insert Last
Memasukkan elemen baru pada akhir list. Proses ini membutuhkan penelusuran dari ```first``` hingga menemukan node yang ```next```-nya ```NULL``` [1].
#### 6. Delete First
Menghapus elemen pertama pada list [1].
```C++
void deleteFirst(List &L, address &P) {
    P = L.first;
    L.first = (L.first)->next;
    P->next = Nil;
}
```
#### 7. Delete After
Delete after adalah menghapus node setelah node tertentu (P) [1]. Langkahnya ```Q = P -> next```, lalu ```P -> next = Q -> next```, dan ```Q -> next = NULL```;. Setelah dilepas dari list, elemen akan dikembalikan atau didealokasi dengan ```dealokasi(P)``` [1]. Selain itu, terdapat fungsi untuk membebaskan seluruh memori elemen sehingga list menjadi kosong [1].
#### 8. Update
Update adalah operasi untuk mengubah data yang ada di dalam list [1]. Prosesnya biasanya diawali dengan mencari node yang akan diubah, kemudian isi node tersebut diganti dengan data yang baru [1].

### E. Primitif pada ADT Linked List
Semua operasi dasar yang sudah dijelaskan di atas adalah operasi primitif [1]. Primitif-primitif tersebut merupakan bagian dari ADT (Abstract Data Type) list yang disimpan dalam dua file, yaitu:

#### 1. File ```.h``` berisi prototipe fungsi/prosedur dan tipe data yang dipakai [1].
#### 2. File ```.cpp``` berisi implementasi dari fungsi/prosedur tersebut [1].


## Guided 

#### File list.h

```C++
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
```

#### File list.cpp

```C++
#include "list.h"
#include <iostream>
using namespace std;

//I.S. = Initial State / kondisi awal
//F>S. = Final State / kondisi akhir

// fungsi untuk cetak apakah list kosong atau tidak
bool isEmpty(LinkedList list) {
    if (list.first == Nil) {
        return true;
    } else {
        return false;
    }
}

//pembuatan linked list kosong
void createList(LinkedList &list) {
    /* I.S. sembarang
       F.S. Terbentuk list kosong */
    list.first = Nil;
}

//pembuatan node baru dengan menerapkan manajemen memori
address alokasi(string nama, string nim, int umur) {
    /* I.S. sembarang
       F.S. mengembalikan alamat node baru dengan isi data = sesuai parameter dan next = NIL */
    address nodeBaru = new node;
    nodeBaru->isidata.nama = nama;
    nodeBaru->isidata.nim = nim;
    nodeBaru->isidata.umur = umur;
    nodeBaru->next = Nil;
    return nodeBaru;
   }

   //penghapusan node dengan menerapkan manajemen memori
   void dealokasi(address &node) {
        /* I.S. P terdefinisi
           F.S. memori yang digunakan node dikembalikkan ke sistem */
        node->next = Nil;
        delete node;
   }

   //prosedur-prosedur untuk insert / menambahkan node baru ke dalam list
   void insertFirst(LinkedList &list, address nodeBaru) {
        /* I.S. sembarang, P sudah dialokasikan
           F.S. menempatkan elemen list (node) pada awal list */
        nodeBaru->next = list.first;
        list.first = nodeBaru;
   }
   
   void insertAfter(LinkedList &list, address nodeBaru, address Prev) {
        /* I.S. sembarang, nodeBaru dan Prev alamat salahsatu elemen list (node)
           F.S. menempatkan elemen list (node) sesudah elemen node Prev */
        if (Prev != Nil) {
            nodeBaru->next = Prev->next;
            Prev->next = nodeBaru;
        } else {
            cout << "Node sebelumnya tidak valid!" << endl;
        }
   }

   void insertLast(LinkedList &List, address nodeBaru) {
        /* I.S. sembarang, nodeBaru sudah dialokasikan 
           F.S. menempatkan elemen nodeBaru pada akhir list */
        if (isEmpty(List)) {
            List.first = nodeBaru;
        } else {
            address nodeBantu = List.first;
            while (nodeBantu->next != Nil) {
                nodeBantu = nodeBantu->next;
            }
            nodeBantu->next = nodeBaru;
        }
   }
   
//prosedur-prosedur untuk delete // menghapus node yang ada didalam node
void delFirst(LinkedList &List) {
    /* I.S. list tidak kosong
    F.S. node pertama di list terhapus */
    address nodeHapus;
    if (isEmpty(List) == false) {
        nodeHapus = List.first;
        List.first = List.first->next;
        nodeHapus->next = Nil;
        dealokasi(nodeHapus);
    } else {
        cout << "List kosong!" << endl;
    }
}

void delLast(LinkedList &List) {
    /* I.S. list tidak kosong
       F.S. node terakir di list terhapus */
       address nodeHapus, nodePrev;
       if (isEmpty(List) == false) {
        nodeHapus = List.first;
        if (nodeHapus->next == Nil) {
            List.first->next = Nil;
            dealokasi(nodeHapus);
        } else {
            while(nodeHapus->next != Nil) {
                nodePrev = nodeHapus;
                nodeHapus = nodeHapus->next;
            }
            nodePrev->next = Nil;
            dealokasi(nodeHapus);
        }
       }else {
        cout << "list kosong" << endl;
       }
}

void delAfter(LinkedList &List, address nodeHapus, address nodePrev) {
    /* I.S. list tidak kosong, Prev alamat salah satu elemen list
       F.S. nodeBatu adalah alamat dari Prev->next, menghapus Prev->next dari list */
       if(isEmpty(List) == true) {
        cout << "List kosong!" << endl;
       } else { //jika list tidak kosong
        if (nodePrev != Nil && nodePrev->next != Nil) {
            nodeHapus = nodePrev->next;
            nodePrev->next = nodeHapus->next;
            nodeHapus->next = Nil;
            dealokasi(nodeHapus);
        } else {
            cout << "Node sebelumnya (prev) tidak valid!" << endl;
        }
       }

}
//prosedure untuk menampilkan isi list
void printList(LinkedList List) {
    /* I.S. list mungkin kosong
       F.s. jiika list tidak kosong menampilkan semua info yang ada pada list*/
       if (isEmpty(List)) {
            cout << "List kosong." << endl;
       } else {
        address nodeBantu = List.first;
        while (nodeBantu != Nil) {
            cout << "Nama : " << nodeBantu->isidata.nama << ", NIM : " << nodeBantu->isidata.nim << ", Usia : " << nodeBantu->isidata.umur << endl;
            nodeBantu = nodeBantu->next;
        }
       }
}

//function untuk menampilkan jumlah node di dalam list
int nbList(LinkedList List) {
    /* I.S. list sudah ada 
       F.S. menampilkan jumlah node di dalam list */
       int count = 0;
       address nodeBantu = List.first;
       while(nodeBantu != Nil) {
            count++;
            nodeBantu = nodeBantu->next;
       }
       return count;
    }

//prosedur untuk menghapus list (menghapus semua node didala list)
void deleteList(LinkedList &List) {
    /* I.S. list sudah ada
       F.S. menghapus semua node didalam list */
       address nodeBantu, nodeHapus;
       nodeBantu = List.first;
       while(nodeBantu != Nil) {
            nodeHapus = nodeBantu;
            nodeBantu = nodeBantu->next;
            dealokasi(nodeHapus);
       }
       List.first = Nil;
       cout << "List sudah terhapus!" << endl;
}
```

#### File main.cpp
```C++
#include "list.h"

#include <iostream>
using namespace std;

int main() {
    LinkedList List;
    address nodeA, nodeB, nodeC, nodeD, nodeE = Nil;

    createList(List);

    dataMahasiswa mhs;

    nodeA = alokasi("Dhimas", "2311102151", 20);
    nodeB = alokasi("Arvin", "2211100014", 21);
    nodeC = alokasi("Rizal", "2311100029", 20);
    nodeD = alokasi("Satrio", "2211102173", 21);
    nodeE = alokasi("Joshua", "2311102133", 21);

    insertFirst(List, nodeA);
    insertLast(List, nodeB);
    insertAfter(List, nodeC, nodeA);
    insertAfter(List, nodeD, nodeC);
    insertLast(List, nodeE);

    cout << "--- ISI LIST SETELAH DILAKUKAN INSERT ---" << endl;
    printList(List);
    cout << "jumlah node : " << nbList(List) << endl;
    cout << endl;

    delFirst(List);
    delLast(List);
    delAfter(List, nodeD, nodeC);

    cout << "--- ISI LIST SETELAH DILAKUKAN DELETE ---" << endl;
    printList(List);
    cout << "jumlah node : " << nbList(List) << endl;
    cout << endl;

    deleteList(List);

    cout << "--- ISI LIST SETELAH DILAKUKAN HAPUS LIST ---" << endl;
    printList(List);
    cout << "jumlah node : " << nbList(List) << endl;
    cout << endl;

    return 0;
}
```
Program ini mengimplementasikan struktur data Single Linked List untuk menyimpan data mahasiswa yang terbagi menjadi tiga file. File ```list.h``` mendeklarasikan struktur data (node dan list) serta prototipe fungsi. File ```list.cpp``` berisi logika utamanya, di mana ```alokasi``` dan ```dealokasi``` mengatur memori, prosedur ```insert``` (First/Last/After) menambahkan data, prosedur ```del``` (First/Last/After) menghapus data, serta ```printList``` dan ```nbList``` menampilkan dan menghitung isi list. Pada ```main.cpp```, program mensimulasikan penambahan 5 data mahasiswa, lalu menghapusnya satu per satu (awal, akhir, dan tengah). Terakhir, ```deleteList``` dipanggil untuk membersihkan seluruh sisa node di dalam memori, memastikan program berjalan aman tanpa memory leak.

## Unguided 

### 1. Buatlah ADT Singly Linked list sebagai berikut di dalam file “Singlylist.h” 
```C++
Type infotype : int
Type address : pointer to ElmList
Type ElmList <
    info : infotype
    next : address
>
Type List : < First : address >
procedure CreateList(input/output L : List)
function alokasi (x : infotype)->address
procedure dealokasi(input/output P : address)
procedure printInfo(input L : List)
procedure insertFirst(input/output L : List, input P : address)
```
Kemudian buatlah implementasi dari procedure-procedure yang digunakan didalam file ```"Singlylist.cpp"```
Kemudian buat program utama didalam file ```"main.cpp"``` dengan implementasi sebagai berikut :

```C++
int main() {
    List L;
    address P1, P2, P3, P4, P5 = Nil;
    createList(L);

    P1 = alokasi(2);
    insertFirst(L,P1);

    P2 = alokasi(0);
    insertFirst(L,P2);

    P3 = alokasi(8);
    insertFirst(L,P3);

    P4 = alokasi(12);
    insertFirst(L,P4);

    P5 = alokasi(9);
    insertFirst(L,P5);

    printInfo(L);
    return 0;
}
```
Output yang diharapkan:
```
9 12 8 0 2
```

#### File singlylist.h

```C++
#ifndef SINGLYLIST_H
#define SINGLYLIST_H

#include <iostream>
using namespace std;

typedef int infotype;
typedef struct ElmList *address;

struct ElmList {
    infotype info;
    address next;
};

struct List {
    address First;
};

void createList(List &L);
address alokasi(infotype x);
void insertFirst(List &L, address P);
void printInfo(List L);

#endif
```

#### File singlylist.cpp

```C++
#include "SinglyList.h"
#include <iostream>

using namespace std;

void createList(List &L) {
    L.First = NULL;
}

address alokasi(infotype x) {
    address P = new ElmList;
    if (P != NULL) {
        P->info = x;
        P->next = NULL;
    }
    return P;
}

void insertFirst(List &L, address P) {
    if (P != NULL) {
        P->next = L.First;
        L.First = P;
    }
}

void printInfo(List L) {
    address P = L.First;
    while (P != NULL) {
        cout << P->info << " ";
        P = P->next;
    }
    cout << endl;
}
```

#### File main.cpp

```C++
#include <iostream>
#include "Singlylist.h"

using namespace std;

int main() {
    List L;
    address P1, P2, P3, P4, P5;

    createList(L);

    P1 = alokasi(2);
    insertFirst(L, P1);

    P2 = alokasi(0);
    insertFirst(L, P2);

    P3 = alokasi(8);
    insertFirst(L, P3);

    P4 = alokasi(12);
    insertFirst(L, P4);

    P5 = alokasi(9);
    insertFirst(L, P5);

    printInfo(L);

    return 0;
}
```

### Output Unguided 1 :

##### Output 1
![Screenshot Output Unguided 1_1](https://github.com/Arbieeee/109082500114_Arbi-Ramadhan-/blob/main/Modul-4/Unguided/unguided-1/Output_unguided-1.png)

Program ini mengimplementasikan struktur data Single Linked List sederhana untuk menyimpan bilangan bulat (integer) yang terdiri dari tiga file. File ```SinglyList.h``` mendeklarasikan struktur ```ElmList``` (node) dan ```List```, serta prototipe fungsinya. File implementasi berisi logika untuk membuat list kosong (```createList```), mengalokasikan memori node baru (```alokasi```), menyisipkan node di awal list (```insertFirst```), dan mencetak seluruh isi list (```printInfo```). Pada program utama (```main```), program melakukan alokasi 5 node secara berurutan (berisi angka 2, 0, 8, 12, dan 9) lalu memasukkannya satu per satu ke dalam list menggunakan ```insertFirst```. Karena menggunakan metode ```insert``` di awal, urutan angka yang tampil saat ```printInfo``` dipanggil akan terbalik dari urutan inputnya, yaitu menjadi 9, 12, 8, 0, dan 2.

### 2. Dari soal Latihan pertama, lakukan penghapusan node 9 menggunakan deleteFirst(), node 2 menggunakan deleteLast(), dan node 8 menggunakan deleteAfter(). Kemudian tampilkan jumlah node yang tersimpan menggunakan nbList() dan lakukan penghapusan seluruh node menggunakan deleteList(). Output yang diharapkan : 
```
12 0
Jumlah node : 2

- List Berhasil Terhapus -
Jumlah node : 0
```

#### File singlylist.h

```C++
#ifndef SINGLYLIST_H
#define SINGLYLIST_H

#include <iostream>
using namespace std;

typedef int infotype;
typedef struct ElmList *address;

struct ElmList {
    infotype info;
    address next;
};

struct List {
    address First;
};

void createList(List &L);
address alokasi(infotype x);
void insertFirst(List &L, address P);
void printInfo(List L);

void deleteFirst(List &L, address &P);
void deleteLast(List &L, address &P);
void deleteAfter(address Prec, address &P);
int nbList(List L);
void deleteList(List &L);

#endif
```

#### File singlylist.cpp

```C++
#include "SinglyList.h"
#include <iostream>

using namespace std;

void createList(List &L) {
    L.First = NULL;
}

address alokasi(infotype x) {
    address P = new ElmList;
    if (P != NULL) {
        P->info = x;
        P->next = NULL;
    }
    return P;
}

void insertFirst(List &L, address P) {
    if (P != NULL) {
        P->next = L.First;
        L.First = P;
    }
}

void printInfo(List L) {
    address P = L.First;
    while (P != NULL) {
        cout << P->info << " ";
        P = P->next;
    }
    cout << endl;
}

void deleteFirst(List &L, address &P) {
    if (L.First != NULL) {
        P = L.First;
        L.First = L.First->next;
        P->next = NULL;
    } else {
        P = NULL;
    }
}

void deleteLast(List &L, address &P) {
    if (L.First == NULL) {
        P = NULL;
    } else if (L.First->next == NULL) {
        P = L.First;
        L.First = NULL;
    } else {
        address Q = L.First;
        while (Q->next->next != NULL) {
            Q = Q->next;
        }
        P = Q->next;
        Q->next = NULL;
    }
}

void deleteAfter(address Prec, address &P) {
    if (Prec != NULL && Prec->next != NULL) {
        P = Prec->next;
        Prec->next = P->next;
        P->next = NULL;
    } else {
        P = NULL;
    }
}

int nbList(List L) {
    int count = 0;
    address P = L.First;
    while (P != NULL) {
        count++;
        P = P->next;
    }
    return count;
}

void deleteList(List &L) {
    address P;
    while (L.First != NULL) {
        deleteFirst(L, P);
    }
}
```

#### File main.cpp

```C++
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
```

### Output Unguided 2 :

##### Output 1
![Screenshot Output Unguided 2_1](https://github.com/Arbieeee/109082500114_Arbi-Ramadhan-/blob/main/Modul-4/Unguided/unguided-2/Output_unguided-2.png)

Program ini mengimplementasikan Single Linked List untuk menyimpan bilangan bulat dalam tiga file. File header mendeklarasikan struktur dan fungsi, file implementasi berisi logika dasar (buat list, alokasi memori, insert di awal, cetak) serta operasi hapus (awal, akhir, tengah, dan hapus semua). Pada program utama, lima angka dimasukkan berurutan menggunakan ```insertFirst``` sehingga urutannya terbalik di dalam list. Program lalu menguji penghapusan data di awal, akhir, dan tengah, mencetak sisa data beserta jumlah node, dan diakhiri dengan ```deleteList``` untuk membersihkan seluruh memori


## Kesimpulan
Dari praktikum yang sudah dilakukan, dapat disimpulkan bahwa C++ dapat digunakan untuk mengelola data secara dinamis menggunakan struktur data Single Linked List yang terdiri dari kumpulan node (struct). Setiap node menyimpan data dan pointer (next) yang saling terhubung. Penggunaan pointer dan alokasi memori dinamis (seperti new dan delete) sangat penting untuk menambah (insert), menghapus (delete), dan menelusuri (traversal) data di dalam list. Penggunaan call by reference pada parameter fungsi juga memudahkan dalam mengubah kondisi list secara langsung dari program utama. Selain itu, ketelitian dalam penulisan sintaks dan urutan penghapusan memori (dealokasi) sangat diperlukan agar program tidak mengalami error atau kebocoran memori (memory leak). Penggunaan beberapa konsep ini membuat program pengolahan data menjadi lebih terstruktur, fleksibel, dan sesuai dengan kebutuhan

## Referensi
[[1] Tim Asisten Praktikum. (t.t.). Modul 4: Singly Linked List (Bagian Pertama). Telkom University.