#include <iostream>
#include "fungsi.h"
using namespace std;

bool autentikasi(string role) {
    string pass;
    string password = (role == "sekretaris") ? "sekre123" : "bend123";
    
    cout << endl << "===AUTENTIKASI " << role << "===" << endl;
    cout << "Masukkan password: ";
    cin >> pass;
    
    if (pass == password) {
        cout << "Login berhasil!" << endl;
        enter();
        return true;
    } else {
        cout << "Password salah!" << endl;
        enter();
        return false;
    } 
} 
