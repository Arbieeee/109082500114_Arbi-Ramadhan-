# <h1 align="center">Laporan Praktikum Modul 8 - Queue</h1>
<p align="center">Arbi Ramadhan - 109082500114</p>

## Dasar Teori

### A. Pengertian Queue<br/>
Queue atau antrean adalah struktur data linear yang menggunakan prinsip FIFO (First In First Out), yaitu elemen yang pertama masuk menjadi elemen yang pertama keluar [1]. Prinsip ini kebalikan dari stack yang memakai LIFO [2][3]. Queue bisa dibuat dengan array (representasi tabel) atau linked list (representasi pointer) [1].

Pada queue, penghapusan elemen dilakukan di bagian depan ```Head``` dan penambahan elemen dilakukan di bagian belakang ```Tail``` [1] [4]. Karena itu queue punya dua penunjuk, yaitu ```Head``` dan ```Tail```, sedangkan stack hanya punya satu yaitu ```Top```. Pada representasi pointer, setiap elemen mempunyai ```info``` untuk menyimpan data dan ```next``` untuk menunjuk elemen berikutnya. Queue kosong ditandai dengan ```Head = Nil``` [1].
Contoh kode:

```C++
typedef int infotype;
typedef struct elmQueue *address;
struct elmQueue {
    infotype info;
    address next;
};
struct queue {
    address head, tail;
};
```

### B. Operasi dalam Queue<br/>

#### 1. Enqueue (Insert)
Enqueue adalah operasi menambah elemen baru di belakang queue (```Tail```). Elemen baru dibuat dahulu, lalu ```next``` dari ```Tail``` lama diarahkan ke elemen baru, dan ```Tail``` dipindah ke elemen tersebut [1] [4].
Contoh kode:

```C++
void queue(address P){
    (Q.tail)->next = P;
    Q.tail = P;
}
```

#### 2. Dequeue (Delete)
Dequeue adalah operasi mengambil elemen di depan queue ```Head```. Elemen ```Head``` disimpan di pointer ```P```, lalu ```Head``` dipindah ke elemen berikutnya, dan ```next``` dari ```P``` diputus [1] [4].
Contoh kode:

```C++
address dequeue(address P) {
    P = Q.head;
    Q.head = P->next;
    P->next = Nil;
    return P;
}
```

### C. Primitif-Primitif dalam Queue
Primitif queue ditulis dalam ADT, dengan deklarasi di file ```.h``` dan implementasi di file ```.c``` atau ```.cpp``` [1]. Primitif yang biasanya dipakai yaitu:

#### 1. ```isEmpty()```
#### 2. ```CreateQueue()```
#### 3. ```alokasi()``` dan ```dealokasi()```
#### 4. ```findElm()``` dan ```fFindElm()```
#### 5. ```insert()```
#### 6. ```delete()```
#### 7. ```printInfo()```, ```nbList()```, dan ```delAll()```

### D. Queue Representasi Tabel
Prinsip kerja queue tabel sama dengan queue pointer. Bedanya, jumlah antrean pada tabel terbatas dan tidak perlu manajemen memori [1]. Ada tiga alternatif cara membuatnya [1].

#### 1. Alternatif 1 (Head diam, Tail bergerak)
```Head``` selalu di indeks awal selama queue tidak kosong, dan ```Tail``` menunjuk elemen terakhir. Saat queue kosong, ```Head``` dan ```Tail``` bernilai -1 pada kode C++ ini [1].

- Enqueue: ```Tail``` dimajukan. Jika queue kosong, ```Head``` diatur ke indeks awal.
- Dequeue: elemen di ```Head``` diambil, lalu semua elemen sesudahnya digeser maju satu posisi dan ```Tail``` mundur.

#### 2. Alternatif 2 (Head bergerak, Tail bergerak)
```Head``` dan ```Tail``` sama-sama bergerak. ```Head``` maju ketika elemen dihapus [1].

- Enqueue: ```Tail``` dimajukan seperti alternatif 1.
- Dequeue: elemen di ```Head``` diambil lalu ```Head``` maju.

#### 3. Alternatif 3 (Head dan Tail berputar)
```Head``` dan ```Tail``` berputar dari indeks awal sampai akhir lalu kembali ke awal, sehingga tidak perlu menggeser elemen [1]. Ini disebut circular buffer [1][3].

- Enqueue: ```Tail``` dimajukan. Jika sudah di indeks maksimum, ```Tail``` pindah ke indeks awal.
- Dequeue: elemen di ```Head``` diambil, lalu ```Head``` maju dengan aturan perputaran yang sama.

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
