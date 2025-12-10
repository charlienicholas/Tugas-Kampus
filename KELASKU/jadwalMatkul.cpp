#include <iostream>
#include <fstream>
#include "fungsi.h"
using namespace std;

void menuMataKuliahSekretaris() {
    int pilihan;
    do {
        clear();
        cout << "===MENU JADWAL MATA KULIAH (SEKRETARIS)===" << endl
        << "1. Lihat Mata Kuliah" << endl
        << "2. Tambah Mata Kuliah" << endl
        << "3. Kembali" << endl
        << "Pilihan: ";
        cin >> pilihan;
        
        switch(pilihan) {
            case 1: 
                lihatMataKuliah(); break;
            case 2: 
                tambahMataKuliah(); break;
            case 3: 
                break;
            default: cout << "Pilihan tidak valid!" << endl; enter();
        }
    } while(pilihan != 3);
}

void lihatMataKuliah() {
    clear();
    cout << "===JADWAL MATA KULIAH===" << endl << endl;
    
    ifstream file("data/matkul.txt");
    if (file.is_open()) {
        string tampil;
        while (getline(file, tampil)) {
            cout << tampil << endl;
        }
        file.close();
    } else {
        cout << "Belum ada data jadwal mata kuliah." << endl;
    }

    enter();
}

void tambahMataKuliah() {
    clear();
    cout << "===TAMBAH JADWAL MATA KULIAH===" << endl << endl;
    int jumlahSKS;
    string hari, matkul;
    
    cout << "Masukkan hari: ";
    cin >> hari;
    cout << "Jumlah SKS: ";
    cin >> jumlahSKS;
    cin.ignore();
    
    ofstream file("data/matkul.txt", ios::app);

    file << "[" << hari << "]" << endl;
    
    for (int i = 1; i <= jumlahSKS; i++){
        cout << i << ".Masukkan Mata Kuliah: ";
        getline(cin, matkul);
        file << matkul << endl;
    }

    file << endl;

    file.close();
    
    cout << endl << "Jadwal Mata kuliah pada hari " << hari << " berhasil ditambahkan!" << endl;
    enter();
}