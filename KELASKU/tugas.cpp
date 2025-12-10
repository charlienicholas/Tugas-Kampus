#include <iostream>
#include <fstream>
#include "fungsi.h"
using namespace std;

void menuCatatanTugasSekretaris() {
    int pilihan;
    do {
        clear();
        cout << "===MENU CATATAN TUGAS (SEKRETARIS)===" << endl
        << "1. Lihat Catatan Tugas" << endl
        << "2. Tambah Catatan Tugas" << endl
        << "3. Kembali" << endl
        << "Pilihan: ";
        cin >> pilihan;
        
        switch(pilihan) {
            case 1: 
                lihatCatatanTugas(); 
                break;
            case 2: 
                tambahCatatanTugas(); 
                break;
            case 3: 
                break;
            default: cout << "Pilihan tidak valid!" << endl; enter();
        }
    } while(pilihan != 3);
}

void lihatCatatanTugas() {
    clear();
    cout << "===CATATAN TUGAS===" << endl << endl;

    ifstream file("data/catatan tugas.txt");
    if (file.is_open()) {
        string tampil;
        while (getline(file, tampil)) {
            cout << tampil << endl;
        }
        file.close();
    } else {
        cout << "Belum ada data catatan tugas." << endl;
    }

    enter();
}

void tambahCatatanTugas() {
    clear();

    cout << "===TAMBAH CATATAN TUGAS===" << endl << endl;
    string matkul, deadline, deskripsi;
    
    cin.ignore();
    cout << "Mata Kuliah: ";
    getline (cin, matkul);
    cout << "Waktu Deadline: ";
    getline (cin, deadline);
    cout << "Deskripsi tugas: ";
    getline(cin, deskripsi);
    
    ofstream file("data/catatan tugas.txt", ios::app);

    file << "Mata Kuliah: " << matkul << endl;
    file << "Waktu deadline: " << deadline << endl;
    file << "Deskripsi: " << deskripsi << endl;
    
    file << endl;

    file.close();
    
    cout << "Catatan tugas berhasil ditambahkan!" << endl;
    enter();
}