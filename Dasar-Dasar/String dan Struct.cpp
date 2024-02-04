#include <iostream>

using namespace std;
/*Deklarasi struktur*/
struct struktur_mobil{
    string merk, warna;
};
/*atau*/
struct{
    string merk, warna;
} Motor;
int main(void){
    /*Pemanggilan struktur mobil dengan array*/
    struct struktur_mobil mobil[3] = {}; /*atau*/;
    mobil[0].merk = "Avanza"; mobil[0].warna = "Merah";
    mobil[1].merk = "Toyota"; mobil[1].warna = "Kuning";
    mobil[2].merk = "Mitsubishi"; mobil[2].warna = "Biru";
    /*Cetak output ke konsol*/
    cout << "Mobil merk " << mobil[0].merk << " warna " << mobil[0].warna;
    cout << "\nMobil merk " << mobil[1].merk << " warna " << mobil[1].warna;
    cout << "\nMobil merk " << mobil[2].merk << " warna " << mobil[2].warna;
    /*Pemanggilan struktur motor*/
    Motor.merk = "Honda"; Motor.warna = "Kuning";
    cout << "\nMotor merk " << Motor.merk << " warna " << Motor.warna;
    return 0;
}