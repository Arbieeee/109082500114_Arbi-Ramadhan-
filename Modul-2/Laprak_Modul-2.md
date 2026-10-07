# <h1 align="center">Laporan Praktikum Modul 2  PENGENALAN BAHASA C++ (BAGIAN KEDUA)</h1>
<p align="center">Arbi Ramadhan - 109082500114</p>

## Dasar Teori

### A. Array <br/>
Array adalah kumpulan data yang memiliki nama dan setiap elemennya bertipe data yang sama [1]. Sebuah array juga bisa dideklarasikan sekaligus saat dideklarasikan dengan cara nilai-nilai yang diinisialisasikan ditulis di antara kurung kurawal ```{}``` [2].

#### 1. Array Satu Dimensi
Array satu dimensi adalah array yang hanya terdiri dari satu baris data saja [1]. Umumnya, array datu dimensi ditulis ```tipe_data nama_var[ukuran]```
Dalam bahasa C++, array disimpan dalam memori dengan lokasi yang berurutan [1]. Indeks pertama pada array dimulai dari 0 dan seterusnya  tergantung jumlah ukuran array yang dibuat [1]. Array satu dimensi ini biasanya mewakili bentuk suatu vektor [2].

#### 2. Array Dua Dimensi
Array dua dimensi memiliki bentuk yang seperti tabel yang biasanya digunakan untuk menyimpan data yang terbagi menjadi dua bagian yaitu dimensi pertama dan dimensi kedua [1]. Cara penulisan array ini sebagai berikut.
```
int data_nilai[4][3]; // terdiri dari 4 baris 3 kolom
nilai[2][0] = 10;     //menjelaskan bahwa array yang dimaksud berada pada baris berindeks 2 dan pada kolom berindeks 0.
```
Array dua dimensi biasanya mewakili bentuk suatu matriks atau tabel [2].

#### 3. Array Berdimensi Banyak
Pada dimensi ini, array yang mempunyai indeks lebih dari dua yang biasanya menyatakan dimensi dari array itu sendiri [1]. Array berdimensi banyak ini biasanya dideklararasikan sebagai berikut:
```
tipe_data nama_var[ukuran_1][ukuran_2]...[ukuran_n];
```

### B. Pointer <br/>

#### 1. Data dan Memory
Semua data yang ada digunakan oleh program komputer disimpan di dalam RAM komputer [1]. Memori bisa digambarkan sebagai sebuah array satu dimensi yang mempunyai ukuran sangat besar [1]. Setiap cell memory pasti memiliki indeks atau address sebgai identitasnya [1].

#### 2. Pointer dan Alamat
Pointer adalah dasar dari tipe variabel yang bertipe integer dalam format bilangan heksadesimal yang biasanya digunakan untuk menyimpan alamat memori dari variabel yang lain sehingga pointer bisa mengakses nilai dari variabel yang alamatnya ditunjuk [1]. Pointer biasanya dideklarasikan ```type *nama_variabel;```

#### 3. Pointer dan Array
Array da pointer mempunyai hubungan yanag kuat karena banyak operasi yang bisa dilakukan menggunakan array juga bisa dilakukan menggunakan pointer [1].

#### 4. Pointer dan String

##### a. String
String adalah bentuk dari data yang sering digunakan pada bahasa pemrograman untuk mengolah data/teks/array dari karakter [1].

##### b. Pointer dan String
Pada dasarnya, string adalah array dari kumpulan karakter yang biasanya diakgiri dengan karakter khusus \0 [1]. Pada deklarasi penggunaan array ```( amessage[])``` isi array dapat diubah meski alamat penyimpanannya tetap, tetapi pada deklarasi yang menggunakan pointer ```( *pmessage)``` arah petunjuk alamanya dipindahkan ke mana saja tetapi isi dari teksnya bersifat konstan [1].

### C. Fungsi
Fungsi adalah blok dari kode yang dirancang untuk menjalankan tujuan khusus yang bertujuan agar program menjadi lebih tersruktur dan dapat mengurangi pengulangan/duplikasi kode [1]. Umumnya, fungsi memerlukan masukan berupa parameter yang selanjutnya dioleh oleh fungsi dan menghasilkan sebuah nilai (nilai balik fungsi) [1]. bentuk umum dari fungsi sebagai berikut:
```
tipe_keluaran nama_fungsi(daftar_parameter) {
    blok pernyataan fungsi;
}
```

### D. Prosedure
Dalam bahasa C++, prosedure adalah istilah yang digunakan untuk fungsi yang tidak mengembalikan nilai atau lebih dikenal sebagai fungsi void [1]. Fungsi ini akan melakukan tugas tertentu tetapi tidak mengembalikan nilai kepada pemanggilnya [1]. Bentuk umum prosedure sebagai berikut:
```
void nama_prosedure (daftar_parameter) {
    blok pernyataan prosedure;
}
```

### E. Parameter Fungsi

#### 1. Parameter Formal dan Aktual
Parameter formal adalah variabel yang ada di daftar parameter saat mendefinisikan fungsi [1]. Contohnya pada kode dibawah, x dan y adalah parameter formal.
```
float perkalian (float x, float y) {
    return (x * y);
}
```

Parameter aktual adalah paramaeter yang tidak selamanya menyataakan variabel yang dipakai untuk memanggil fungsi [1]. Contohnya ada pada kode dibawah ini, a dan b adalah parameter aktual.
```
x = perkalian(a, b);
y = perkalian(20, 30);
```

#### 2. Cara Melewatkan Parameter

##### a. Call by Value 
Pada call by value, nilai parameter aktual akan disalin dalam parameter formal, jadi parameter aktual tidak berubah walaupun parameter formalnya berubah [1].

##### b. Call by Pointer
Call by pointer adalah cara untuk melewatkan alamat suatu variabel ke dalam suatu fungsi [1]. Cara ini bisa mengubah variabel yang ada diluar fungsi [1].
Contoh penulisan call by pointer sebagai berikut:
```
tukar(int *px, int *py) {
    int temp;
    temp = *px;
    *px = *py;
    *py = temp;
    ... ... 
}
```
Cara memanggilnya dengan ```tukar(&a, &b);```

##### c. Call by Reference
Call by reference berfungsi untuk melewatkan alamat suatu variabel dalam suatu fungsi yang dapat mengubah nilai  variabel aktual yang dilewatkan ke dalam fungsi [1]. Cara ini bisa mengubah variabel yang ada diluar fungsi [1]. Contoh penulisan call by reference sebagai berikut:
```
tukar(int &px, int &py) {
    int temp;
    temp = px;
    px = py;
    py = temp;
    ... ... 
}
```
Cara memanggilnya dengan ```tukar(a, b);```
 

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

##### Output 
![Screenshot Output Guided 1](https://github.com/Arbieeee/109082500114_Arbi-Ramadhan-/blob/main/Modul-2/Guided/Output_guided-1.png)

Program ini menggunakan array satu dimensi bertipe integer bernama ```nilai``` berukuran 5 yang menyimpan lima angka nilai ujian. Program ini menginisialisasi nilai secara manual untuk setiap indeks, lalu menampilkan seluruh isi array tersebut secara berurutan menggunakan perulangan ```for```, dimulai dari nilai ke-1 hingga nilai ke-5.

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

##### Output 
![Screenshot Output Guided 2](https://github.com/Arbieeee/109082500114_Arbi-Ramadhan-/blob/main/Modul-2/Guided/Output_guided-2.png)

Program ini menggunakan array dua dimensi bertipe integer bernama ```nilai``` berukuran 3 x 3 yang menyimpan sembilan angka dalam bentuk baris dan kolom. Program ini menampilkan seluruh isi array tersebut dalam bentuk matriks menggunakan perulangan bersarang (nested loop), lalu secara spesifik menampilkan kembali nilai yang berada di baris indeks 1 dan kolom indeks 2.

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

##### Output 
![Screenshot Output Guided 3](https://github.com/Arbieeee/109082500114_Arbi-Ramadhan-/blob/main/Modul-2/Guided/Output_guided-3.png)

Program ini menggunakan array tiga dimensi bertipe integer bernama ```data``` berukuran 2 x 2 x 3 yang menyimpan dua belas angka dalam bentuk blok, baris, dan kolom. Program ini langsung menampilkan nilai spesifik yang berada di blok indeks 0, baris indeks 1, dan kolom indeks 2.

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

##### Output 
![Screenshot Output Guided 4](https://github.com/Arbieeee/109082500114_Arbi-Ramadhan-/blob/main/Modul-2/Guided/Output_guided-4.png)

Program ini menggunakan array satu dimensi bertipe karakter bernama ```arr``` berukuran 6 yang menyimpan enam huruf. Program ini menginisialisasi setiap indeks secara manual, lalu menampilkan nilai spesifik yang berada di indeks 3 yaitu karakter 'b', serta menampilkan alamat memori dari elemen yang berada di indeks 4 menggunakan operator reference (```&```).

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

##### Output 
![Screenshot Output Guided 5](https://github.com/Arbieeee/109082500114_Arbi-Ramadhan-/blob/main/Modul-2/Guided/Output_guided-5.png)

Program ini menggunakan sebuah variabel integer bernama ```angka``` dan sebuah variabel pointer bertipe integer bernama ```pointer```. Program ini menginisialisasi nilai ```angka``` dengan 100, lalu menyimpan alamat memori dari variabel ```angka``` ke dalam variabel ```pointer``` menggunakan operator reference (```&```). Program kemudian menampilkan nilai asli dari variabel ```angka```, alamat memorinya, nilai alamat yang disimpan oleh ```pointer```, serta nilai yang ditunjuk oleh ```pointer``` menggunakan operator dereference (```*```)

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

##### Output 
![Screenshot Output Guided 6](https://github.com/Arbieeee/109082500114_Arbi-Ramadhan-/blob/main/Modul-2/Guided/Output_guided-6.png)

Program ini menggunakan sebuah fungsi bertipe integer bernama ```maks3``` yang menerima tiga parameter nilai untuk mencari angka terbesar di antara ketiganya. Program ini meminta pengguna memasukkan tiga nilai secara berurutan, lalu memanggil fungsi tersebut untuk memproses dan menampilkan nilai maksimum dari ketiga angka yang dimasukkan

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

##### Output 
![Screenshot Output Guided 7](https://github.com/Arbieeee/109082500114_Arbi-Ramadhan-/blob/main/Modul-2/Guided/Output_guided-7.png)

Program ini menggunakan sebuah prosedur (fungsi void) bernama ```sapa``` yang tidak menerima parameter dan tidak mengembalikan nilai. Program ini langsung memanggil prosedur tersebut dari dalam fungsi ```main``` untuk menampilkan kalimat sapaan "Selamat datang di praktikum struktur data" ke layar.

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

##### Output 
![Screenshot Output Guided 8](https://github.com/Arbieeee/109082500114_Arbi-Ramadhan-/blob/main/Modul-2/Guided/Output_guided-8.png)

Program ini menggunakan sebuah prosedur bernama ```tukar``` yang menerima dua parameter integer untuk menukar nilai di dalamnya. Program ini mendeklarasikan dua variabel ```a``` dan ```b```, lalu menampilkan nilainya sebelum dan sesudah memanggil prosedur ```tukar```, namun karena parameter yang digunakan adalah pass by value, nilai variabel asli di fungsi main tidak akan berubah.

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
![Screenshot Output Unguided 1_1](https://github.com/Arbieeee/109082500114_Arbi-Ramadhan-/blob/main/Modul-2/Unguided/Output_Unguided-1.1.png)

##### Output 2
![Screenshot Output Unguided 1_2](https://github.com/Arbieeee/109082500114_Arbi-Ramadhan-/blob/main/Modul-2/Unguided/Output_Unguided-1.2.png)

##### Output 3
![Screenshot Output Unguided 1_3](https://github.com/Arbieeee/109082500114_Arbi-Ramadhan-/blob/main/Modul-2/Unguided/Output_Unguided-1.3.png)

Program ini menggunakan tiga buah array dua dimensi bertipe integer bernama ```matA```, ```matB```, dan ```hasil``` yang masing-masing berukuran 3 x 3 untuk menyimpan elemen matriks. Program ini meminta pengguna memasukkan elemen untuk kedua matriks, lalu menampilkan menu pilihan operasi aritmatika (penjumlahan, pengurangan, atau perkalian). Program akan memproses operasi yang dipilih menggunakan perulangan bersarang, menyimpannya ke dalam array ```hasil```, dan menampilkan matriks akhirnya dalam bentuk baris dan kolom.

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
![Screenshot Output Unguided 2_1](https://github.com/Arbieeee/109082500114_Arbi-Ramadhan-/blob/main/Modul-2/Unguided/Output_Unguided-2.png)

Program ini menggunakan sebuah prosedur bernama ```tukar``` yang menerima tiga parameter integer dengan teknik pass by reference (menggunakan simbol```&```) untuk menukar nilai di dalamnya secara berantai. Program ini menginisialisasi tiga variabel ```a```, ```b```, dan ```c``` dengan nilai awal, lalu menampilkan nilainya sebelum dan sesudah memanggil prosedur ```tukar```. Karena menggunakan reference, nilai variabel asli di fungsi ```main``` akan benar-benar berubah sesuai dengan logika rotasi yang diterapkan

### 3. Diketahui sebuah array 1 dimensi sebagai berikut :  arrA = {11, 8, 5, 7, 12, 26, 3, 54, 33, 55} Buatlah program yang dapat mencari nilai minimum, maksimum, dan rata – rata dari array tersebut! Gunakan function cariMinimum() untuk mencari nilai minimum dan function cariMaksimum() untuk mencari nilai maksimum, serta gunakan prosedur hitungRataRata() untuk menghitung nilai rata – rata! Buat program menggunakan menu switch-case seperti berikut ini : 
--- Menu Program Array ---  <br/>
• Tampilkan isi array <br/>
• cari nilai maksimum <br/>
• cari nilai minimum <br/>
• Hitung nilai rata - rata <br/>

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
![Screenshot Output Unguided 3_1](https://github.com/Arbieeee/109082500114_Arbi-Ramadhan-/blob/main/Modul-2/Unguided/Output_Unguided-3.1.png)

##### Output 2
![Screenshot Output Unguided 3_2](https://github.com/Arbieeee/109082500114_Arbi-Ramadhan-/blob/main/Modul-2/Unguided/Output_Unguided-3.2.png)

Program ini menggunakan sebuah array satu dimensi bertipe integer bernama ```arrA``` berukuran 10 yang menyimpan sepuluh angka, serta dua buah fungsi (```cariMinimum``` dan ```cariMaksimum```) dan satu prosedur (```hitungRataRata```) untuk memproses data tersebut. Program ini menampilkan menu interaktif menggunakan perulangan ```do-while``` dan ```switch-case```, yang memungkinkan pengguna untuk menampilkan isi array, mencari nilai minimum, mencari nilai maksimum, atau menghitung nilai rata-rata, dan akan terus berulang hingga pengguna memilih menu keluar

## Kesimpulan
Dari praktikum yang sudah dilakukan, dapat disimpulkan bahwa C++ dapat digunakan untuk mengolah data menggunakan array, pointer, function, dan posedure. Array juga dapat digunakan untuk menyimpan data dalam bentuk satu dimensi, dua dimensi, dan dimensi banyak. Sedangkann function dan procedure digunakan untuk menjalankan proses tertentu dalam program. Penggunaan call by pointer dan call by reference sapaat digunakan untuk mengubah nilai variabel tanpa harus konsep dari acara. Penggunaan beberapa konsep ini juga bisa membantu membuat program menjadi lebih terstruktur dan sesuai dengan kebutuhan.

## Referensi
[1] Tim Asisten Praktikum. (t.t.). Modul 1: Code Blocks IDE & Pengenalan Bahasa C++ (Bagian Pertama). Telkom University. 
<br>[2] Indahyanti, Uce., & Rahmawati Yunianita. (2020). Buku Ajar Algoritma Dan Pemrograman Dalam Bahasa C++. Sidoarjo: Umsida Press. Diakses melalui https://doi.org/10.21070/2020/978-623-6833-67-4.