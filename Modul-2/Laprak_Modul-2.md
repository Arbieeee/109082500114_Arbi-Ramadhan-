# <h1 align="center">Laporan Praktikum Modul 2  PENGENALAN BAHASA C++ (BAGIAN KEDUA)</h1>
<p align="center">Arbi Ramadhan - 109082500114</p>

## Dasar Teori
Bahasa C++ diciptakan oleh Bjarne Stroustrup di AT&T Bell Laboratories awal tahun 1980-an berdasarkan C ANSI (American National Standard Institute) [1].

### A. Dasar Pemrograman<br/>

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

### E.


### F.

## Guided 

### 1. Array Satu Dimensi

```C++
#include <iostream>
using namespace std;

int main() {
    int nilai [5];

    nilai[0] = 80;
    nilai[1] = 75;
    nilai[2] = 90;
    nilai[3] = 85;
    nilai[4] = 95;
    for (int i = 0; i < 5; i++) {
        cout << "Nilai ke-" << i + 1 << " = " << nilai[i] << endl;
    }

    return 0;
}
```
### Output guided 1 :

##### Output 1
![Screenshot Output Unguided 1_1](https://github.com/(username github kalian)/(nama repository github kalian)/blob/main/(path folder menyimpan screenshot output)/(nama file screenshot output).png)

penjelasan singkat guided 1

### 2. Array Dua Dimensi

```C++
#include <iostream>
using namespace std;

int main() {
    int nilai[3][3] = {
        {80, 75, 90},
        {85, 90, 88},
        {70, 80, 85}
    };

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << nilai[i][j] << " ";
        }

        cout << endl;
    }

    cout << endl;
    cout << nilai[1][2] << endl; // 88
    return 0;
}
```
### Output guided 2 :

##### Output 1
![Screenshot Output Unguided 1_1](https://github.com/(username github kalian)/(nama repository github kalian)/blob/main/(path folder menyimpan screenshot output)/(nama file screenshot output).png)

penjelasan singkat guided 2

### 3. Array Berdimensi Banyak

```C++
#include <iostream>
using namespace std;

int main() {
    int data[2][2][3] = {
        {

            {10, 20, 30},
            {40, 50, 60},
        },
        {
            {70, 80, 90},
            {100, 110, 120},
        }
    };

    cout << data[0][1][2] << endl; // 60

    return 0;
}
```
### Output guided 3 :

##### Output 1
![Screenshot Output Unguided 1_1](https://github.com/(username github kalian)/(nama repository github kalian)/blob/main/(path folder menyimpan screenshot output)/(nama file screenshot output).png)

penjelasan singkat guided 3

### 4. Alamat / Addres

```C++
#include <iostream>
using namespace std;

int main() {
    char arr[6];
    
    arr[0] = 'a';
    arr[1] = 'b';
    arr[2] = 'c';
    arr[3] = 'b';
    arr[4] = 'd';
    arr[5] = 'e';

    cout << arr[3] << endl; // value
    cout << &(arr[4]) << endl; // alamat memory atau address

    return 0;
}
```
### Output guided 4 :

##### Output 1
![Screenshot Output Unguided 1_1](https://github.com/(username github kalian)/(nama repository github kalian)/blob/main/(path folder menyimpan screenshot output)/(nama file screenshot output).png)

penjelasan singkat guided 4

### 5. Pointer

```C++
#include <iostream>
using namespace std;

int main() {
    int angka = 100;

    int *pointer;

    pointer = &angka;

    cout << "Nilai angka : " << angka << endl; // 100
    cout << "Alamat angka : " << &angka << endl; // address
    cout << "Nilai pointer : " << pointer << endl; // address angka
    cout << "Nilai dari pointer : " << *pointer << endl; // value dari angka (100)

    return 0;
}
```
### Output guided 5 :

##### Output 1
![Screenshot Output Unguided 1_1](https://github.com/(username github kalian)/(nama repository github kalian)/blob/main/(path folder menyimpan screenshot output)/(nama file screenshot output).png)

penjelasan singkat guided 5
### 6. Function

```C++
#include <iostream>
using namespace std;

int maks3(int a, int b, int c) {
    int temp_max = a;

    if (b > temp_max)
        temp_max = b;
        
    if (c > temp_max)
        temp_max = c;

        return temp_max;
}

int main() {
    int x, y, z;

    cout << "Masukkan nilai 1 : "; 
    cin >> x;

    cout << "Masukkan nilai 2 : "; 
    cin >> y;

    cout << "Masukkan nilai 3 : "; 
    cin >> z;

    cout << "Nilai maksimum : " << maks3(x, y, z);

    return 0;
}
```
### Output guided 6 :

##### Output 1
![Screenshot Output Unguided 1_1](https://github.com/(username github kalian)/(nama repository github kalian)/blob/main/(path folder menyimpan screenshot output)/(nama file screenshot output).png)

penjelasan singkat guided 6
### 7. Procedure

```C++
#include <iostream>
using namespace std;

void sapa() {
    cout << "Selamat datang di praktikum struktur data " << endl;
}

int main() {
    sapa();
    return 0;
}
```
### Output guided 7 :

##### Output 1
![Screenshot Output Unguided 1_1](https://github.com/(username github kalian)/(nama repository github kalian)/blob/main/(path folder menyimpan screenshot output)/(nama file screenshot output).png)

penjelasan singkat guided 7

### 8. Call by Value / Pointer / Reference

```C++
#include <iostream>
using namespace std;

void tukar(int x, int y) {
    int temp;

    temp =x;
    x = y;
    y = temp;
}

int main() {
    int a, b;

    cout << "Sebelum ditukar : " << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    tukar(a, b);

    cout << "\nSetelah ditukar : " << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}
```
### Output guided 8 :

##### Output 1
![Screenshot Output Unguided 1_1](https://github.com/(username github kalian)/(nama repository github kalian)/blob/main/(path folder menyimpan screenshot output)/(nama file screenshot output).png)

penjelasan singkat guided 8

## Unguided 

### 1. program yang dapat melakukan operasi penjumlahan, pengurangan, dan perkalian matriks 3x3

```C++
#include <iostream>
using namespace std;

int main() {
    int matA[3][3], matB[3][3], hasil[3][3];
    int pilihan;

    cout << "Masukkan elemen Matriks A (3x3):\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> matA[i][j];
        }
    }

    cout << "Masukkan elemen Matriks B (3x3):\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> matB[i][j];
        }
    }

    cout << "\nPilih Operasi:\n1. Penjumlahan\n2. Pengurangan\n3. Perkalian\nPilihan: ";
    cin >> pilihan;

    if (pilihan == 1) {
        for (int i = 0; i < 3; i++)
            for (int j = 0; j < 3; j++)
                hasil[i][j] = matA[i][j] + matB[i][j];
        cout << "Hasil Penjumlahan:\n";
    } 
    else if (pilihan == 2) {
        for (int i = 0; i < 3; i++)
            for (int j = 0; j < 3; j++)
                hasil[i][j] = matA[i][j] - matB[i][j];
        cout << "Hasil Pengurangan:\n";
    } 
    else if (pilihan == 3) {
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                hasil[i][j] = 0;
                for (int k = 0; k < 3; k++) {
                    hasil[i][j] += matA[i][k] * matB[k][j];
                }
            }
        }
        cout << "Hasil Perkalian:\n";
    } 
    else {
        cout << "Pilihan tidak valid.";
        return 0;
    }

    // Menampilkan hasil
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << hasil[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}
```
### Output Unguided 1 :

##### Output 1
![Screenshot Output Unguided 1_1](https://github.com/(username github kalian)/(nama repository github kalian)/blob/main/(path folder menyimpan screenshot output)/(nama file screenshot output).png)

contoh :
![Screenshot Output Unguided 1_1](https://github.com/DhimazHafizh/2311102151_Muhammad-Dhimas-Hafizh-Fathurrahman/blob/main/Pertemuan1_Modul1/Output-Unguided1-1.png)

##### Output 2
![Screenshot Output Unguided 1_2](https://github.com/(username github kalian)/(nama repository github kalian)/blob/main/(path folder menyimpan screenshot output)/(nama file screenshot output).png)

penjelasan unguided 1 

### 2. Berdasarkan guided pointer dan reference sebelumnya, buatlah keduanya dapat menukar nilai dari 3 variabel 

```C++
#include <iostream>
using namespace std;

void tukar(int &x, int &y, int &z) {
    int temp;
    
    temp = x;
    x = z;
    z = y;
    y = temp;
}

int main() {
    int a = 10, b = 20, c = 30;

    cout << "Sebelum ditukar :" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;

    tukar(a, b, c);

    cout << "\nSetelah ditukar :" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;

    return 0;
}
```
### Output Unguided 2 :

##### Output 1
![Screenshot Output Unguided 2_1](https://github.com/(username github kalian)/(nama repository github kalian)/blob/main/(path folder menyimpan screenshot output)/(nama file screenshot output).png)

contoh :
![Screenshot Output Unguided 2_1](https://github.com/DhimazHafizh/2311102151_Muhammad-Dhimas-Hafizh-Fathurrahman/blob/main/Pertemuan1_Modul1/Output-Unguided2-1.png)

##### Output 2
![Screenshot Output Unguided 2_2](https://github.com/(username github kalian)/(nama repository github kalian)/blob/main/(path folder menyimpan screenshot output)/(nama file screenshot output).png)

penjelasan unguided 2

### 3. Diketahui sebuah array 1 dimensi sebagai berikut :  arrA = {11, 8, 5, 7, 12, 26, 3, 54, 33, 55} Buatlah program yang dapat mencari nilai minimum, maksimum, dan rata – rata dari array tersebut! Gunakan function cariMinimum() untuk mencari nilai minimum dan function cariMaksimum() untuk mencari nilai maksimum, serta gunakan prosedur hitungRataRata() untuk menghitung nilai rata – rata! Buat program menggunakan menu switch-case seperti berikut ini : 
<br> --- Menu Program Array ---  
• Tampilkan isi array  
• cari nilai maksimum 
• cari nilai minimum  
• Hitung nilai rata - rata <br>

```C++
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
```
### Output Unguided 3 :

##### Output 1
![Screenshot Output Unguided 3_1](https://github.com/(username github kalian)/(nama repository github kalian)/blob/main/(path folder menyimpan screenshot output)/(nama file screenshot output).png)

contoh :
![Screenshot Output Unguided 3_1](https://github.com/DhimazHafizh/2311102151_Muhammad-Dhimas-Hafizh-Fathurrahman/blob/main/Pertemuan1_Modul1/Output-Unguided3-1.png)

##### Output 2
![Screenshot Output Unguided 3_2](https://github.com/(username github kalian)/(nama repository github kalian)/blob/main/(path folder menyimpan screenshot output)/(nama file screenshot output).png)

penjelasan unguided 3

## Kesimpulan
...

## Referensi
[1] Triase. (2020). Diktat Edisi Revisi : STRUKTUR DATA. Medan: UNIVERSTAS ISLAM NEGERI SUMATERA UTARA MEDAN. 
<br>[2] Indahyati, Uce., Rahmawati Yunianita. (2020). "BUKU AJAR ALGORITMA DAN PEMROGRAMAN DALAM BAHASA C++". Sidoarjo: Umsida Press. Diakses pada 10 Maret 2024 melalui https://doi.org/10.21070/2020/978-623-6833-67-4.
<br>...