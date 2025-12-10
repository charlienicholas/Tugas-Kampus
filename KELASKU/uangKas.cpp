#include <iostream>
#include <fstream>
#include "fungsi.h"
using namespace std;

void menuUangKasBendahara() {
    int pilihan;
    do {
        clear();
        cout << "===MENU UANG KAS BULANAN (BENDAHARA)===" << endl
        << "1. Lihat Uang Kas" << endl
        << "2. Tambah Uang Kas" << endl
        << "3. Kembali" << endl
        << "Pilihan: ";
        cin >> pilihan;
        
        switch(pilihan) {
            case 1: 
                lihatUangKas(); 
                break;
            case 2: 
                tambahUangKas(); 
                break;
            case 3: 
                break;
            default: cout << "Pilihan tidak valid!" << endl; enter();
        }
    } while(pilihan != 3);
}

void lihatUangKas() {
    clear();
    cout << "===UANG KAS BULANAN===" << endl << endl;
    ifstream file("data/kas.txt");
    if (file.is_open()) {
        string tampil;
        while (getline(file, tampil)) {
            cout << tampil << endl;
        }
        file.close();
    } else {
        cout << "Belum ada data uang kas." << endl;
    }

    enter();
}

void tambahUangKas() {
    clear();
    cout << "===TAMBAH UANG KAS BULANAN===" << endl;
    int minggu;
    string bulan;
    double kas, total = 0;
    
    cout << "Masukkan bulan: ";
    cin >> bulan;
    cout << "Jumlah minggu: ";
    cin >> minggu;
    cin.ignore();
    
    ofstream file("data/kas.txt", ios::app);

    file << "[" << bulan << "]" << endl;
    
    for (int i = 1; i <= minggu; i++){
        cout << "Minggu " << i << " : ";
        cin >> kas;
        file << "Minggu " << i << " : " << kas << endl;
        total += kas;
    }

    file << "Total = " << total;

    file << endl;

    file.close();
    
    cout << "Uang kas berhasil ditambahkan!" << endl;
    enter();
}