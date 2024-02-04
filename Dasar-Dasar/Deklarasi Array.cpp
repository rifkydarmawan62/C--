#include <iostream>

using namespace std;

int main(void){
    /*Deklarasi array kosong yang valid*/
    short array_kosong[] = {};
    /*Deklarasi array kosong dua dimensi*/
    short array_kosong_dua_dimensi[] = {};
    /*Deklarasi array dengan jumlah elemen 5*/
    unsigned short jumlah_elemen_array = 5;
    short array[jumlah_elemen_array];
    for (short indeks = 0; indeks < jumlah_elemen_array; indeks++){
        cout << "Masukkan nilai elemen array " << (indeks + 1) << " : "; cin >> array[indeks];
        cout << "Anda telah memasukkan nilai " << array[indeks] << " di elemen " << (indeks + 1) << endl;
    }
    return 0;
}