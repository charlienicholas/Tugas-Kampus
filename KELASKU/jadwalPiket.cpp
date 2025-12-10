#include <iostream>
#include <fstream>
#include "fungsi.h"
using namespace std;

void enter();

void menuPiketSekretaris() {
    int pilih;
    do {
        clear();
        cout << "===MENU JADWAL PIKET (SEKRETARIS)===" << endl
        << "1. Lihat Jadwal Piket" << endl
        << "2. Tambah Jadwal Piket" << endl
        << "3. Kembali" << endl
        << "Pilihan: ";
        cin >> pilih;
        
        switch(pilih) {
            case 1: 
                lihatPiket(); 
                break;
            case 2: 
                tambahPiket(); 
                break;
            case 3: 
                break;
            default: 
                cout << endl << "Pilihan tidak valid!" << endl; enter();
        }
    } while(pilih != 3);
}

void lihatPiket(){
    clear();
    
    cout << "===Jadwal Piket===" << endl << endl;
    
    ifstream file("data/piket.txt");
    if (file.is_open()) {
        string tampil;
        while (getline(file, tampil)) {
            cout << tampil << endl;
        }
        file.close();
    } else {
        cout << "Belum ada data jadwal piket." << endl;
    }

    enter();
}

void tambahPiket() {
    clear();
    
    cout << "===TAMBAH JADWAL PIKET===" << endl << endl;
    int jumlahOrang;
    string hari, nama;
    
    cout << "Masukkan hari: ";
    cin >> hari;
    cout << "Jumlah orangnya: ";
    cin >> jumlahOrang;
    cin.ignore();
    
    ofstream file("data/piket.txt", ios::app);

    file << "[" << hari << "]"  << endl;
    
    for (int i = 1; i <= jumlahOrang; i++){
        cout << i << ". Masukkan nama: ";
        getline(cin, nama);
        file << nama << endl;
    }

    file << endl;

    file.close();
    
    cout << endl << "Jadwal Piket pada hari " << hari << " berhasil ditambahkan!" << endl;
    enter();
}