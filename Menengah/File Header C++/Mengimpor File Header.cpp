#include <iostream>
#include "modul_pertama_cpp.h"
using namespace std;

int main(){
    tumpukan tumpukan_dari_file_header;
    tumpukan_dari_file_header.tumpuk(21);
    cout << tumpukan_dari_file_header.ambil() << endl;
    return 0;
}