# <h1 align="center">Laporan Praktikum Modul 7 - Stack</h1>
<p align="center">Arbi Ramadhan - 109082500114</p>

## Dasar Teori

### A. Pengertian Stack<br/>
Stack atau tumpukan adalah bentuk struktur data yang cara kerjanya seperti tumpukan. Stack menggunakan prinsip LIFO (Last In First Out), yaitu yang terakhir masuk adalah yang pertama keluar [1]. Dalam stack, proses penambahan dan pengambilan elemen hanya dilakukan melalui satu bagian yang disebut Top [2].

### B. Komponen-Komponen dalam Stack<br/>
Stack dapat direpresentasikan menggunakan pointer maupun tabel. Pada representasi pointer, setiap elemen memiliki info sebagai tempat menyimpan data dan next sebagai penunjuk ke elemen berikutnya. Sementara itu, stack hanya memiliki satu penunjuk utama, yaitu Top [1].

### C. Operasi dalam Stack<br/>
#### 1. Push
Push adalah operasi untuk menyisipkan elemen ke tumpukan data yang fungsinya sama dengan insert first pada list biasa [1]. Pada proses ini, elemen baru akan ditempatkan di bagian paling atas stack sehingga posisi Top berpindah ke elemen yang baru dimasukkan [1][2].
Contoh kode:
```C++
void push(address P){
    P->next = S.Top;
    S.Top = P;
}
```
#### 2. Pop
Pop adalah operasi pengambilan elemen dari stack yang mirip dengan delete first pada list linear. Elemen yang diambil merupakan elemen paling atas atau elemen yang pertama kali diakses dalam stack [1]. Prosesnya dilakukan dengan menyimpan elemen yang berada di posisi Top, kemudian menggeser Top ke elemen di bawahnya [1][2].
Contoh kode:
```C++
address pop(address P){
    P = S.Top;
    S.Top = (S.Top)->next;
    return P;
}
```
### D. Primitif-Primitif dalam Stack <br/>
Primitif yang ada dalam stack pada dasarnya sama dengan primitif pada list lainnya, tetapi jumlahnya lebih sedikit karena stack hanya mengoperasikan elemen yang berada di bagian paling atas [1].<br>
Primitif-primitif dalam stack diantaranya:
1. ```createStack()```
2. ```isEmpty()```
3. ```alokasi()```
4. ```dealokasi()```
5. fungsi-fungsi pencarian
6. fungsi primitif lainnya

## Guided 

### 1. ...

```C++
source code guided 1
```
penjelasan singkat guided 1

### 2. ...

```C++
source code guided 2
```
penjelasan singkat guided 2

### 3. ...

```C++
source code guided 3
```
penjelasan singkat guided 3

## Unguided 

### 1. (isi dengan soal unguided 1)

```C++
source code unguided 1
```
### Output Unguided 1 :

##### Output 1
![Screenshot Output Unguided 1_1](https://github.com/(username github kalian)/(nama repository github kalian)/blob/main/(path folder menyimpan screenshot output)/(nama file screenshot output).png)

contoh :
![Screenshot Output Unguided 1_1](https://github.com/DhimazHafizh/2311102151_Muhammad-Dhimas-Hafizh-Fathurrahman/blob/main/Pertemuan1_Modul1/Output-Unguided1-1.png)

##### Output 2
![Screenshot Output Unguided 1_2](https://github.com/(username github kalian)/(nama repository github kalian)/blob/main/(path folder menyimpan screenshot output)/(nama file screenshot output).png)

penjelasan unguided 1 

### 2. (isi dengan soal unguided 2)

```C++
source code unguided 2
```
### Output Unguided 2 :

##### Output 1
![Screenshot Output Unguided 2_1](https://github.com/(username github kalian)/(nama repository github kalian)/blob/main/(path folder menyimpan screenshot output)/(nama file screenshot output).png)

contoh :
![Screenshot Output Unguided 2_1](https://github.com/DhimazHafizh/2311102151_Muhammad-Dhimas-Hafizh-Fathurrahman/blob/main/Pertemuan1_Modul1/Output-Unguided2-1.png)

##### Output 2
![Screenshot Output Unguided 2_2](https://github.com/(username github kalian)/(nama repository github kalian)/blob/main/(path folder menyimpan screenshot output)/(nama file screenshot output).png)

penjelasan unguided 2

### 3. (isi dengan soal unguided 3)

```C++
source code unguided 3
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
