#include <iostream>

using namespace std;
/*Terdapat dua jenis konversi, yaitu konversi eksplisit dan konversi otomatis*/
int main(void){
    long angka = 1;
    long angka_long = 1L;
    float angka_float = 2.9F;
    double angka_double = 2.8;
    /*Konversi eksplisit*/
    short hasil = short(angka_double) + (short)angka_float;
    cout << hasil;
    return 0;   
}