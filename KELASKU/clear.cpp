#include <iostream>
#include "fungsi.h"
using namespace std;

void clear(){
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}