#include <iostream>
#include <iomanip>
#include "fungsi.h"
using namespace std;

void masuk(){
    int masukSebagai;
    string role;
    
    do {
        clear();
        
        cout << setfill('=') << setw(20) << "=" << endl
        << "      KELASKU" << endl
        << setw(20) << "=" << endl << endl;
        
        cout << "Masuk sebagai: " << endl
        << "1. Anggota" << endl
        << "2. Sekretaris" << endl
        << "3. Bendahara" << endl 
        << "4. Keluar" << endl
        << "Pilih: ";
        cin >> masukSebagai;
        // akhir menu untuk masuk
        
        switch (masukSebagai){
            case 1:
                role = "Anggota";
                menuUtama(role);
                break;
            case 2:
                if (autentikasi("sekretaris")) {
                    role = "Sekretaris";
                    menuUtama(role);
                }
                break;
            case 3:
                if (autentikasi("bendahara")) {
                    role = "Bendahara";
                    menuUtama(role);
                }
                break;
            case 4:
                cout << "Terima kasih, sampai jumpa!!!" << endl << endl;
                enter();
                break;
            default:
                cout << endl << "Pilihan anda tidak valid!" << endl;
                enter();
        }
    } while (masukSebagai!=4);
}