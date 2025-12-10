#include <iostream>
#include "fungsi.h"
using namespace std;

void menuUtama(string role) {
    int pilih;
    do {
        clear();
        cout << "===MENU UTAMA (" << role << ")===" << endl << endl
        << "1. Jadwal Piket" << endl
        << "2. Jadwal Mata Kuliah" << endl
        << "3. Uang Kas Mingguan" << endl
        << "4. Catatan Tugas" << endl
        << "5. Kembali" << endl
        << "Pilihan: ";
        cin >> pilih;
        
        switch(pilih) {
            case 1:
                if (role == "Sekretaris") {
                    menuPiketSekretaris();
                } else {
                    lihatPiket();
                }
                break;
            case 2:
                if (role == "Sekretaris") {
                    menuMataKuliahSekretaris();
                } else {
                    lihatMataKuliah();
                }
                break;
            case 3:
                if (role == "Bendahara") {
                    menuUangKasBendahara();
                } else {
                    lihatUangKas();
                }
                break;
            case 4:
                if (role == "Sekretaris") {
                    menuCatatanTugasSekretaris();
                } else {
                    lihatCatatanTugas();
                }
                break;
            case 5:
                break;
            default:
                cout << "Pilihan tidak valid!" << endl;
                enter();
        }
    } while(pilih != 5);
}