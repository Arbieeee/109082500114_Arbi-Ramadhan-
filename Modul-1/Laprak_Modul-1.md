# <h1 align="center">Laporan Praktikum Modul 1 - Codeblocks IDE & Pengenalan Bahas C++ (Bagian Pertama)</h1>
<p align="center">Arbi Ramadhan - 1090082500114</p>

## Dasar Teori
Bahasa C++ diciptakan oleh Bjarne Stroustrup di AT&T Bell Laboratories awal tahun 1980-an berdasarkan C ANSI (American National Standard Institute) [1].

### A. Dasar Pemrograman <br/>

#### 1. Struktur Program C++
Struktur bahasa C++ selalu dimulai dari deklarasi library #include , definisi konstanta, tipe data, variabel, fungsi/prosedur, dan program utama int main()[1]. Elemen-elemen yang digunakan pada bahasa C++ sudah diatur sesuai dengan kaidah agar alur programnya berjalan dengan benar [2].

#### 2. Tipe Data dan Variabel
Sama seperti bahasa pemrograman lain, variabel digunakan untuk menyimpan nilai pada program yang sedang berjalan [1]. Biasanya variabel dideklarasikan seperti tipe_data nama_variabel; contohnya (int a;). Terdapat juga konstanta untuk menyatakan nilai yang selalu tetap [1]. Biasanya untuk mendeklarasikan konstanta, perlu ditambahkan kata const di awal tipe variabel [1].

### B. Input/Output<br/>
Untuk menghasilkan output, perlu menggunakan fungsi cout dengan operator << untuk mencetak data/teks/konstanta/variabel [1]. Sedangkan untuk meminta input dari pengguna menggunakan fungsi cin dengan operator >> [1].

### C. Operator
Operator digunakan untuk melakukan operasi/manipulasi/perhitungan dari variabel yang ada [1]. Terdapat beberapa contoh operator seperti operator aritmatika (+, -, *, /, %), operator assignment, operator logika, operator unary, operator sizeof, operator increment dan decrement[1]. Operator berfungsi untuk memproses suatu logika dalam program [2].

### D. Pemodifikasi Tipe
Biasanya, pemodifikasian tipe ada diawal tipe data kecuali untuk void. Modifikasi tipe data diantaranya unsigned, short, dan long yang biasanya digunakan untuk mengubah jangkauan nilai suatu tipe data [1].

### E. Kondisional
Kondisional biasanya digunakan untuk pengambilan keputusan dalam penyelesaian masalah [1]. Terdapat tiga jenis kondisi dalam bahasa C++ yaitu if, if-else, dan switch[1]. Jika menggunakan kondisional, program nantinya akan memilih perintah yang akan dikerjakan atau tidak tergantung dengan syarat yang diminta [2]. Berikut bentuk umumnya:
</pre>
if (kondisi) {
    // pernyataan jika benar
} else {
    // pernyataan jika salah
}
</pre>

### F. Perulangan
Perulangan ini merupakan salah satu kelebihan karena digunakan untuk mempersingkat waktu dan meringkas kode dalam mengeksekusi suatu program [1]. Perulangan pada bahasa C++ diantaranya:

#### 1. Perulangan dengan for dan while
Biasanya digunakan saat kondisi terpenuhi, dan jika tidak maka kondisi akan langsung berhenti[1].

#### 2. Perulangan dengan do-while
Perbedaannya terletak pada proses penyeleksian kondisi di bagian bawah (ada pada while) sehingga perulangan biasanya akan dieksekusi minimal satu kali[1].

## Unguided
### 1. Buatlah program yang menerima inputan dua buah bilangan betipe float, kemudian memberikan outputan hasil penjumlahan, pengurangan, perkalian, dan pembagian dari dua bilangan tersebut.

```C++
#include <iostream>
using namespace std;

int main() {
    float angka1, angka2;

    cout << "Input angka pertama: ";
    cin >> angka1;
    cout << "Input angka kedua: ";
    cin >> angka2;

    cout << "Hasil penjumlahan " << angka1 << " + " << angka2 << " = " << (angka1 + angka2) << endl;
    cout << "Hasil pengurangan " << angka1 << " - " << angka2 << " = " << (angka1 - angka2) << endl;
    cout << "Hasil perkalian " << angka1 << " x " << angka2 << " = " << (angka1 * angka2) << endl;

    if (angka2 != 0) {
        cout << "Hasil pembagian " << angka1 << " / " << angka2 << " = " << (angka1 / angka2) << endl;
    } else {
        cout << "Angka kedua tidak boleh 0." << endl;
    }

    return 0;
}
```
### Output Unguided 1 :

##### Output 1
![Screenshot Output Unguided 1_1](https://github.com/Arbieeee/109082500114_Arbi-Ramadhan-/blob/main/Modul-1/Output_Soal-1.1.png)

##### Output 2
![Screenshot Output Unguided 1_1](https://github.com/Arbieeee/109082500114_Arbi-Ramadhan-/blob/main/Modul-1/Output_Soal-1.2.png)

Program ini berfungsi sebagai kalkulator sederhana yang meminta dua masukan angka desimal (float) dari pengguna. Keluaran program menampilkan hasil perhitungan aritmatika dasar yang terdiri dari penjumlahan, pengurangan, perkalian, dan pembagian dalam format persamaan lengkap. Logika if-else diterapkan khusus pada operasi pembagian untuk mencegah terjadinya error (pembagian dengan nol) apabila pengguna memasukkan angka nol sebagai angka pembagi.

### 2. Buatlah sebuah program yang menerima masukan angka dan mengeluarkan output nilai angka tersebut dalam bentuk tulisan. Angka yang akan diinputkan user adalah bilangan bulat positif mulai dari 0 s.d 100.
Contoh :
<br>
79 : tujuh puluh sembilan

```C++
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
```
### Output Unguided 2 :

##### Output 1
![Screenshot Output Unguided 2_1](https://github.com/Arbieeee/109082500114_Arbi-Ramadhan-/blob/main/Modul-1/Output_Soal-2.1.png)

##### Output 2
![Screenshot Output Unguided 2_2](https://github.com/Arbieeee/109082500114_Arbi-Ramadhan-/blob/main/Modul-1/Output_Soal-2.2.png)

Program ini digunakan untuk menerima input berupa bilangan bulat positif dengan rentang nilai 0 sampai 100 dari pengguna. Output program berupa representasi teks (tulisan) dari angka tersebut dalam Bahasa Indonesia, yang ditampilkan dengan format angka diikuti tanda titik dua dan ejaannya. Di program ini terdapat kondisi if-else bertingkat serta penggunaan array untuk mengategorikan angka menjadi satuan, belasan, puluhan, dan seratus, sehingga konversi angka menjadi tulisan dapat dilakukan secara akurat sesuai dengan input yang diberikan.

### 3. Buatlah program yang dapat memberikan input dan output sbb.
input : 3<br>
output :<br>
<pre>
3 2 1 * 1 2 3
  2 1 * 1 2
    1 * 1
      *
</pre>

```C++
#include <iostream>
using namespace std;

int main() {
    int n;
    
    cout << "Input: ";
    cin >> n;
    cout << "Output:" << endl;

    for (int i = n; i >= 1; i--) {
        
        for (int spasi = 0; spasi < n - i; spasi++) {
            cout << "  ";
        }

        for (int j = i; j >= 1; j--) {
            cout << j << " ";
        }
        cout << "* ";

        for (int k = 1; k <= i; k++) {
            cout << k << " ";
        }
        cout << endl;
    }

    for (int spasi = 0; spasi < n; spasi++) {
        cout << "  ";
    }
    cout << "*" << endl;

    return 0;
}
```
### Output Unguided 3 :

##### Output 1
![Screenshot Output Unguided 3_1](https://github.com/Arbieeee/109082500114_Arbi-Ramadhan-/blob/main/Modul-1/Output_Soal-3.1.png)

##### Output 2
![Screenshot Output Unguided 3_2](https://github.com/Arbieeee/109082500114_Arbi-Ramadhan-/blob/main/Modul-1/Output_Soal-3.2.png)

Program ini digunakan untuk menerima input berupa bilangan bulat positif dari pengguna untuk menentukan ukuran pola. Output program berupa pola segitiga terbalik simetris yang menampilkan deretan angka menurun di sisi kiri dan angka menaik di sisi kanan, dipisahkan oleh simbol bintang (*). Di program ini terdapat perulangan bersarang (nested loop) untuk mengatur jumlah baris, di mana loop bagian dalam digunakan untuk mencetak spasi agar pola rata kanan serta mencetak angka-angka tersebut.

## Kesimpulan
...

## Referensi
[1] Tim Asisten Praktikum. (t.t.). Modul 1: Code Blocks IDE & Pengenalan Bahasa C++ (Bagian Pertama). Telkom University. 
<br>[2] Indahyanti, Uce., & Rahmawati Yunianita. (2020). Buku Ajar Algoritma Dan Pemrograman Dalam Bahasa C++. Sidoarjo: Umsida Press. Diakses melalui https://doi.org/10.21070/2020/978-623-6833-67-4.