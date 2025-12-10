#ifndef FUNGSI_H
#define FUNGSI_H

#include <string>
using namespace std;

void masuk();
void enter();
void clear();
bool autentikasi(string role);

// Menu utama dan menu lainnya
void menuUtama(string role);
void menuPiketSekretaris();
void menuMataKuliahSekretaris();
void menuUangKasBendahara();
void menuCatatanTugasSekretaris();

// Jadwal Piket
void lihatPiket();
void tambahPiket();

// Jadwal Mata Kuliah
void lihatMataKuliah();
void tambahMataKuliah();

// Uang Kas
void lihatUangKas();
void tambahUangKas();

// Catatan Tugas
void lihatCatatanTugas();
void tambahCatatanTugas();

#endif
