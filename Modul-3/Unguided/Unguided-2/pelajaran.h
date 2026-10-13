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