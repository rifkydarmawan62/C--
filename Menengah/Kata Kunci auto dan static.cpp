#include <iostream>

using namespace std;

void fungsi_biasa(){
    short nilai_biasa = 20;
    cout << "nilai_biasa : " << nilai_biasa++ << endl;
}
void fungsi_auto(){
    /*Kata kunci auto mengubah variabel menjadi tipe data otomatis, dibuat, dan dihapus*/
    auto nilai_auto = 20;
    cout << "nilai_auto : " << nilai_auto++ << endl;
    /*Variabel auto akan dihapus setelah fungsi dieksekusi*/
}
void fungsi_static(){
    static short nilai_static = 20;
    cout << "nilai_static : " << nilai_static++ << endl;
}
int main(){
    for (short cetak_auto = 0; cetak_auto < 5; cetak_auto++){
        fungsi_auto();
    } cout << endl;
    for (short cetak = 0; cetak < 5; cetak++){
        fungsi_biasa();
    } cout << endl;
    for (short cetak_static = 0; cetak_static < 5; cetak_static++){
        fungsi_static();
    } cout << endl;
    /*Kedua fungsi dari kata kunci tadi tersebut sangat berbeda jika dicetak ke konsol*/
    for (short cetak = 0; cetak < 5; cetak++){
        fungsi_biasa();
    } cout << endl;
    for (short cetak_static = 0; cetak_static < 5; cetak_static++){
        fungsi_static();
    }
    return 0;
}