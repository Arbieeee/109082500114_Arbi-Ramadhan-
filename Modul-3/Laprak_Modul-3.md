# <h1 align="center">Laporan Praktikum Modul 3 - Abstract Data Type (ADT)</h1>
<p align="center">Arbi Ramadhan - 109082500114</p>

## Dasar Teori

### A. Abstract Data Type (ADT)<br/>
Abstract Data Type (ADT) adalah sebuah tipe data yang didefinisikan oleh sekumpulan operasi dasar (primitif) yang berlaku padanya, tanpa harus memperlihatkan bagaimana operasi tersebut diimplementasikan secara internal [1]. ADT bersifat statik dan dapat tersusun dari ADT lain; sebagai ilustrasi, ADT WAKTU dapat dibangun dari ADT JAM dan ADT TANGGAL, atau ADT GARIS yang tersusun dari dua ADT TITIK [1]. Dalam bahasa C, ADT diwujudkan melalui ```struct```, sedangkan primitifnya diterjemahkan menjadi fungsi atau prosedur [1]. Primitif dalam ADT dapat dikelompokkan menjadi beberapa kategori berikut [1]:

#### 1. Konstruktor atau Kreator
Konstruktor aatau Kreator pembentuk nilai type; setiap variabel bertipe ADT harus melalui konstruktor ini terlebih dahulu, umumnya diberi nama ```Make``` [1].

#### 2. Selector
Selector mengakses komponen tipe, biasanya diberi nama ```Get``` [1].

#### 3. Prosedur
Prosedur mengubah nilai komponen, biasanya diberi nama ```Set``` [1].

#### 4. Validator Komponen
Validator Komponen menguji apakah tipe dapat dibentuk sesuai batasan yang ada [1].

#### 5. Destruktor atau Dealokator
Destruktor atau Dealokator menghancurkan nilai variabel beserta memori penyimpanannya [1].

#### 6. Baca atau Tulis
Baca atau Tulis menjadi antarmuka dengan perangkat input atau output [1].

#### 7. Operator Relasional
Operator Relasional mendefinisikan relasi lebih besar, lebih kecil, sama dengan, dan sebagainya [1].

#### 8. Aritmatika
Aritmatika operasi aritmatika untuk tipe buatan sendiri, karena di bahasa C aritmatika hanya terdefinisi untuk bilangan numerik [1].

#### 9. Konversi
Konversi mengubah tipe buatan ke tipe dasar atau sebaliknya [1].

Implementasi ADT umumnya dipisahkan menjadi dua modul utama ditambah satu modul driver [1]:

#### 1. File Header (.h)
File Header (.h) memuat spesifikasi type dan primitif (nama, domain, range, prekondisi untuk fungsi; initial state, final state, dan proses untuk prosedur) [1].

#### 2. File Body/Realisasi (.cpp)
File Body/Realisasi (.cpp) memuat definisi lengkap dari primitif yang telah dideklarasikan [1].

## Guided 

### 1. Mahasiswa

#### a. File mahasiswa.h

```C++
#ifndef MAHASISWA_H_INCLUDED //untuk mengecek apakah header sudah dipakai atau belum di folder/direktori ini
#define MAHASISWA_H_INCLUDED //untuk membuat header mahasiswa

struct mahasiswa {
    char nim[10];
    int nilai1, nilai2;
};

void inputMhs (mahasiswa &m); //call by reference
float rata2 (mahasiswa m);
#endif // MAHASISWA_H_INCLUDED
```

#### b. File mahasiswa.cpp

```C++
#include <iostream>
#include "mahasiswa.h"
using namespace std;

void inputMhs(mahasiswa &m) {
    cout << "Input NIM = ";
    cin >> (m).nim;
    cout << "Input nilai 1 = ";
    cin >> (m).nilai1;
    cout << "Input nilai 2 = ";
    cin >> (m).nilai2;
}

float rata2(mahasiswa m) {
    return float(m.nilai1 + m.nilai2) / 2;
}
```

#### c. File main.cpp

```C++
#include <iostream>
#include "mahasiswa.h"
using namespace std;

int main() {
    mahasiswa mhs;
    inputMhs (mhs);
    cout << "Rata-rata = " << rata2 (mhs);
    return 0;
}
```
### Penjelasan
#### a. File mahasiswa.h
File ```mahasiswa.h``` adalah file header yang digunakan untuk mendeklarasikan struktur dari data mahasiswa dengan prosedur ```inputMhs()``` dan fungsi ```rata2()``` yang akan digunakan dalam program.

#### b. File mahasiswa.cpp
File ```mahasiswa.cpp``` berisi kode untuk menjalankan prosedur dan fungsi yang telah dideklarasikan pada file header. Prosedur ```inputMhs()``` digunakan untuk memasukkan data mahasiswa, sedangkan fungsi ```rata2()``` digunakan untuk menghitung nilai rata-rata dari dua nilai mahasiswa.

#### c. File main.cpp
File ```main.cpp``` adalah file utama yang digunakan untuk menjalankan program dan berfungsi untuk memanggil prosedur ```inputMhs()``` untuk menerima data mahasiswa, kemudian memanggil fungsi ```rata2()```untuk menghitung dan menampilkan hasil rata-ratanya.

## Unguided 

### 1. Buat program yang dapat menyimpan data mahasiswa (max. 10) ke dalam sebuah array dengan field nama, nim, uts, uas, tugas, dan nilai akhir. Nilai akhir diperoleh dari FUNGSI dengan rumus 0.3 * uts + 0.4 * uas + 0.3 * tugas.

#### a. File mahasiswa.h

```C++
#ifndef MAHASISWA_H_INCLUDED
#define MAHASISWA_H_INCLUDED 

struct mahasiswa {
    char nama[50];
    char nim[15];
    float uts;
    float uas;
    float tugas;
    float nilaiAkhir;
};

float hitungNilaiAkhir(mahasiswa m);
void inputMahasiswa(mahasiswa &m);
void outputMahasiswa(mahasiswa m);

#endif
```

#### b. File mahasiswa.cpp

```C++
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
```

#### c. File main.cpp

```C++
#include <iostream>
#include "mahasiswa.h"

using namespace std;

int main() {
    const int MAX_DATA = 10;
    mahasiswa mhs[MAX_DATA];
    int jumlah_input;

    cout << "Masukkan jumlah mahasiswa (max 10): ";
    cin >> jumlah_input;
    cin.ignore();

    if (jumlah_input > MAX_DATA) {
        jumlah_input = MAX_DATA;
    }

    for (int i = 0; i < jumlah_input; i++) {
        cout << "\nMahasiswa ke-" << i + 1 << endl;
        inputMahasiswa(mhs[i]);
    }

    cout << "\n=== DATA MAHASISWA ===\n";
    for (int i = 0; i < jumlah_input; i++) {
        cout << "\nMahasiswa ke-" << i + 1 << endl;
        outputMahasiswa(mhs[i]);
    }

    return 0;
}
```

### Output Unguided 1 :

##### Output 1
![Screenshot Output Unguided 1_1](https://github.com/Arbieeee/109082500114_Arbi-Ramadhan-/blob/main/Modul-3/Unguided/Unguided-1/Output_Unguided-1.1.png)
![Screenshot Output Unguided 1_1](https://github.com/Arbieeee/109082500114_Arbi-Ramadhan-/blob/main/Modul-3/Unguided/Unguided-1/output_unguided_%601.1.png)

##### Output 2
![Screenshot Output Unguided 1_2](https://github.com/Arbieeee/109082500114_Arbi-Ramadhan-/blob/main/Modul-3/Unguided/Unguided-1/Output_Unguided-1.2.png)

### Penjelasan
#### a. File mahasiswa.h 
File ```mahasiswa.h``` adalah file header yang digunakan untuk mendeklarasikan struktur data mahasiswa yang terdiri dari atribut nama, NIM, nilai UTS, UAS, tugas, dan nilai akhir. Selain itu, di dalam file ini juga dideklarasikan fungsi ```hitungNilaiAkhir()``` serta prosedur ```inputMahasiswa()``` dan ```outputMahasiswa()``` yang akan digunakan dalam program.

#### b. File mahasiswa.cpp
File ```mahasiswa.cpp``` berisi implementasi dari fungsi dan prosedur yang telah dideklarasikan pada file header. Fungsi ```hitungNilaiAkhir()``` diimplementasikan untuk menghitung nilai akhir mahasiswa berdasarkan rumus yang telah ditentukan, prosedur ```inputMahasiswa()``` digunakan untuk menerima masukan data dari pengguna, sedangkan prosedur ```outputMahasiswa()``` digunakan untuk menampilkan data mahasiswa beserta nilai akhirnya.

#### c. File main.cpp
File ```main.cpp``` adalah file utama yang menjalankan program. Program ini pertama-tama meminta jumlah mahasiswa yang akan diinput, kemudian memanggil prosedur ```inputMahasiswa()``` untuk setiap mahasiswa guna menerima data, lalu memanggil prosedur ```outputMahasiswa()``` untuk menampilkan seluruh data mahasiswa yang telah dimasukkan.

### 2. Buatlah ADT pelajaran sebagai berikut di dalam file “pelajaran.h”:

#### a. File pelajaran.h
```C++
#ifndef PELAJARAN_H_INCLUDED
#define PELAJARAN_H_INCLUDED

#include <string>
using namespace std;

typedef struct {
    string namaMapel;
    string kodeMapel;
} Pelajaran;

Pelajaran create_pelajaran(string namaMapel, string kodeMapel);
void tampil_pelajaran(Pelajaran pel);

#endif
```

#### b. File pelajaran.cpp

```C++
#include "pelajaran.h"
#include <iostream>

using namespace std;

Pelajaran create_pelajaran(string namaMapel, string kodeMapel) {
    Pelajaran pel;
    pel.namaMapel = namaMapel;
    pel.kodeMapel = kodeMapel;
    return pel;
}

void tampil_pelajaran(Pelajaran pel) {
    cout << "nama pelajaran : " << pel.namaMapel << endl;
    cout << "nilai : " << pel.kodeMapel << endl;
}   
```

#### c. File main.cpp

```C++
#include <iostream>
#include "pelajaran.h"

using namespace std;

int main() {
    string namapel = "Struktur Data";
    string kodepel = "STD";

    Pelajaran pel = create_pelajaran(namapel, kodepel);
    tampil_pelajaran(pel);

    return 0;
}
```

### Output Unguided 2 :

##### Output 1
![Screenshot Output Unguided 2_1](https://github.com/Arbieeee/109082500114_Arbi-Ramadhan-/blob/main/Modul-3/Unguided/Unguided-2/Output_Unguided-2.1.png)

### Penjelasan
#### a. File pelajaran.h
File ```pelajaran.h``` merupakan file header yang berfungsi untuk mendeklarasikan tipe bentukan (struct) ```Pelajaran``` beserta primitifnya. Di dalam file ini dideklarasikan fungsi ```create_pelajaran()``` sebagai konstruktor dan prosedur ```tampil_pelajaran()``` sebagai antarmuka output yang akan digunakan dalam program.

#### b. File pelajaran.cpp
File ```pelajaran.cpp``` memuat implementasi dari fungsi dan prosedur yang telah dideklarasikan pada file header. Fungsi ```create_pelajaran()``` diimplementasikan untuk membentuk objek ```Pelajaran``` dari nilai nama dan kode yang diberikan, sedangkan prosedur ```tampil_pelajaran()``` diimplementasikan untuk menampilkan isi dari objek tersebut ke layar.

#### c. File main.cpp
File ```main.cpp``` adalah driver utama program yang bertugas menyiapkan data masukan berupa nama dan kode pelajaran, kemudian memanggil fungsi ```create_pelajaran()``` untuk membentuk objek, dan terakhir memanggil prosedur ```tampil_pelajaran()``` untuk menampilkan hasilnya.

### 3. Buatlah program dengan ketentuan :
- 2 buah array 2D integer berukuran 3x3 dan 2 buah pointer integer
- fungsi/prosedur yang menampilkan isi sebuah array integer 2D
- fungsi/prosedur yang akan menukarkan isi dari 2 array integer 2D pada posisi tertentu
- fungsi/prosedur yang akan menukarkan isi dari variabel yang ditunjuk oleh 2 buah pointer

#### a. File array.h

```C++
#ifndef ARRAY_H_INCLUDED
#define ARRAY_H_INCLUDED

void tampilkanArray(int arr[3][3]);

void tukarElemenArray(int (*arrA)[3], int (*arrB)[3], int barisA, int kolomA, int barisB, int kolomB);

void tukarPointer(int *a, int *b);

#endif
```

#### b. File array.cpp

```C++
#include "array.h"
#include <iostream>

using namespace std;

void tampilkanArray(int arr[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
}

void tukarElemenArray(int (*arrA)[3], int (*arrB)[3], int barisA, int kolomA, int barisB, int kolomB) {
    int *ptrA = (*(arrA + barisA) + kolomA);
    int *ptrB = (*(arrB + barisB) + kolomB);
    
    int temp = *ptrA;
    *ptrA = *ptrB;
    *ptrB = temp;
}

void tukarPointer(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
```

#### c. File main.cpp

```C++
#include <iostream>
#include "array.h"

using namespace std;

int main() {
    int arrayA[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int arrayB[3][3] = {
        {11, 22, 33},
        {44, 55, 66},
        {77, 88, 99}
    };

    cout << "Array A sebelum ditukar:" << endl;
    tampilkanArray(arrayA);
    cout << "\nArray B sebelum ditukar:" << endl;
    tampilkanArray(arrayB);

    tukarElemenArray(arrayA, arrayB, 0, 0, 1, 1);

    cout << "\nArray A setelah ditukar:" << endl;
    tampilkanArray(arrayA);
    cout << "\nArray B setelah ditukar:" << endl;
    tampilkanArray(arrayB);

    int x = 20;
    int y = 30;

    cout << "\nSebelum pointer ditukar:" << endl;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;

    tukarPointer(&x, &y);

    cout << "\nSetelah pointer ditukar:" << endl;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;

    return 0;
}
```

### Output Unguided 3 :

##### Output 1
![Screenshot Output Unguided 3_1](https://github.com/Arbieeee/109082500114_Arbi-Ramadhan-/blob/main/Modul-3/Unguided/Unguided-3/Output_Unguided--3.1.png)

### Penjelasan
#### a. File array.h
File ```array.h``` adalah file header yang digunakan untuk mendeklarasikan prosedur pengelolaan array 2D dan pointer. Di dalamnya dideklarasikan prosedur ```tampilkan_array()``` untuk mencetak isi matriks, prosedur ```tukar_elemen()``` untuk menukar dua elemen array melalui pointer, serta prosedur ```tukar_pointer()``` untuk menukar nilai dua variabel menggunakan pointer.

#### b. File array.cpp
File ```array.cpp``` berisi realisasi dari prosedur yang telah dideklarasikan pada file header. Prosedur ```tampilkan_array()``` diimplementasikan menggunakan perulangan bersarang untuk menampilkan matriks 3x3, prosedur ```tukar_elemen()``` menggunakan aritmetika pointer untuk menukar elemen pada posisi tertentu, dan prosedur ```tukar_pointer()``` memanfaatkan dereferensi pointer untuk menukar nilai dua variabel.

#### c. File main.cpp
File ```main.cpp``` merupakan program utama yang menginisialisasi dua buah array 2D berukuran 3x3 dan dua variabel bertipe integer. Program kemudian memanggil prosedur ```tampilkan_array()``` untuk menampilkan kondisi awal, memanggil ```tukar_elemen()``` untuk menukar elemen antar array, memanggil ```tukar_pointer`()``` untuk menukar nilai variabel, dan menampilkan kembali hasil akhirnya.

## Kesimpulan
Berdasarkan praktikum yang telah dilakukan, dapat disimpulkan bahwa ADT dapat digunakan untuk mengelola data dan operasi secara terstruktur dengan memisahkan deklarasi, implementasi, dan program utama. Penerapan ADT dilakukan dengan memisahkan deklarasi pada file header (```.h```), implementasi fungsi atau prosedur pada file (```.cpp```), dan memanggilnya melalui file ```(main.cpp)```. Selain itu, ADT juga dapat digunakan untuk mengolah data mahasiswa, menyimpan mata pelajaran, dan melakukan pertukaran nilai pada array dan variabel menggunakan pointer.

## Referensi
[1] Tim Asisten Praktikum. (t.t.). Modul 3: Abstract Data Type (ADT). Telkom University.
