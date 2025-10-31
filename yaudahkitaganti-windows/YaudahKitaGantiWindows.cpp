#include <iostream>
using namespace std;

bool login();
int menu();
void operasiAritmatika();
void konversiNilai();
void game();
 
//============================================================================================================
// function utama yang akan dijalankan
//============================================================================================================

int main(){

    if (login() == true){
        while (true){
            int pilihan = menu();
            if (pilihan == 1){
                operasiAritmatika();
            } else if (pilihan == 2){
                konversiNilai();
            } else if (pilihan == 3){
                game();
            } else if (pilihan == 4){
                return false;
            }
        }
    }
    return 0;
}




//============================================================================================================
// function 
//============================================================================================================


// function login
bool login(){
    // Bagian pertama login 

    // variabelnya
    string username, password;
    bool usern = false;
    bool pass = false;
    int i, j, n;
            
    // usernamenya
    string user[5] = {"charlie", "ajeng", "nayla", "rizqi", "naoki"};
            
    // passwordnya
    string passw[5] = {"charlie4", "ajeng3", "nayla2", "rizqi3", "naoki3"};
                
    // looping untuk login
    for (i = 0 ; i<5 ; i++){
        cout << "==Selamat datang di Program Yaudah Kita Ganti==" << endl << "Silahkan Login"
        << endl << "Username = ";
        cin >> username;
        cout << "Password = ";
        cin >> password;
                
        // looping untuk memastikan user dan password benar
        for (j=0 ; j<5 ; j++){
            if (username == user[j] and password == passw[j]){
                usern = true;
                pass = true;
                break;
            } else if (username == user[j] and password != passw[j]){
                usern = true;
                pass = false;
                break;
            } else {
                usern = false;
                pass = false;
            }
        }

        if (usern and pass){
            cout << "Login berhasil, tekan enter untuk melanjutkan.";
            cin.ignore();
            cin.get();
            system("cls");
            return true;
        } else if (usern and !pass){
            cout << "Login gagal, Password salah. Silahkan coba lagi dengan mengklik enter!";
        } else {
            cout << "Login gagal, Username dan Password salah. Silahkan coba lagi dengan mengklik enter!";
        }

        if (i==4){
                cout << "Anda sudah gagal lima kali. Anda tidak dapat mencoba lagi.";
            }
        cin.ignore();
        cin.get();
        system("cls");
    }
    return false;
}

// function menu
int menu(){
// Bagian kedua pilih menu 
int i, n;
i = 0;
while (i == 0){
	cout << "Menu : " << endl
	<< "1. Operasi Aritmatika" << endl
	<< "2. Konversi Nilai" << endl 
	<< "3. Game" << endl
    << "4. Keluar" << endl
	<< "Pilih = ";
	cin >> n;

	switch (n){
		case 1: system("cls"); return 1 ; i++; break;
		case 2: system("cls"); return 2 ; i++; break;
		case 3: system("cls"); return 3 ; i++; break;
        case 4: system("cls"); return 4 ; i++; break;
		default: 
            cout << "Menu invalid";
            cin.ignore();
            cin.get();
            system("cls");
            break;
		}
    }
return 0;
}

// function operasi aritmatika
void operasiAritmatika(){

        float a,b,h;
        int n,j = 0;
        string operasi;
        
        //===============================
        // pilih jenis operasi
        while (j == 0){
            cout << "Jenis operasi :" << endl
            << "1. Penjumlahan" << endl
            << "2. Pengurangan" << endl
            << "3. perkalian" << endl
            << "4. pembagian" << endl
            << "Pilih = ";
            cin >> n;
            
            switch (n){
                    case 1: j = 1; operasi = "Penjumlahan"; break;
                    case 2: j = 2; operasi = "Pengurangan"; break;
                    case 3: j = 3; operasi = "Perkalian"; break;
                    case 4: j = 4; operasi = "Pembagian"; break;
                    default: cout << "Operasi yang anda pilih tidak valid" << endl
                    << "Tekan enter untuk memilih ulang" ;
                    cin.ignore();
                    cin.get();
                    system("cls");
            }	
        }
        
        //===============================
        // input nilai
        system("cls");
        cout << "Masukkan angka pertama = ";
        cin >> a;
        cout << "Masukkan angka kedua = ";
        cin >> b;
        
        while (j == 4 and b == 0){
            cout << "Angka tidak boleh dibagi dengan 0, silahkan ulangi" << endl;
            cout << "Masukkan angka kedua = ";
            cin >> b;
        }
        //===============================
        // operasi
        switch (j){
                    case 1: h = a + b; break;
                    case 2: h = a - b; break;
                    case 3: h = a * b; break;
                    case 4: h = a / b; break;
            }
        
        //===============================
        // hasil
        cout << "Hasil operasi " << operasi << " antara " << a << " dan " << b << " adalah " << h;
        cin.ignore();
        cin.get();
        system("cls");
    }

// function konversi nilai
void konversiNilai(){
    int nilai;
    char nilai_akhir;
    int i = 0;
    
    while (i < 1){
        cout << "Konversi Nilai" << endl
        << "Masukkan nilai anda = ";
        cin >> nilai;
    
        if (nilai >=90 and nilai <=100){
            nilai_akhir = 'A'; i++;
        } else if (nilai >=80 and nilai<=100){
            nilai_akhir = 'B'; i++;
        } else if (nilai >=70 and nilai <=100){
            nilai_akhir = 'C'; i++;
        } else if (nilai >=60 and nilai <=100){
            nilai_akhir = 'D'; i++;
        } else if (nilai <60 and nilai <=100){
            nilai_akhir = 'E'; i++;
        } else {
            cout << "Input nilai kamu tidak valid, masukkan ulang dengan tekan enter.";
            cin.ignore();
            cin.get();
            system("cls");
        }
    }
    
    cout << "Nilai kamu adalah " << nilai_akhir << endl;
    cin.ignore();
    cin.get();
    system("cls");
}

// function game    
void game(){
int angka = 21;
int tebakan;
int i = 0;
		
while (i<1){
    cout << "Game Tebak Angka" << endl
    << "Masukkan tebakanmu = ";
    cin >> tebakan;
                
    if (tebakan == angka){
	    cout << "Tebakanmu benar";
		i++;
	} else {
		if (tebakan < angka){
            cout << "Tebakanmu terlalu kecil, coba lagi. Tekan enter untuk mengulang";
        } else {
            cout << "Tebakanmu terlalu besar, coba lagi. Tekan enter untuk mengulang";
        }
		cin.ignore();
		cin.get();
		system("cls");
	    }
    }
cin.ignore();
cin.get();
system("cls");
}