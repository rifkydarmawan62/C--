#include <iostream>

using namespace std;
/*Deklarasi tumpukan dengan jumlah tumpuk 100, dan pointer yang digunakan untuk menambah atau mengurangi jumlah tumpukan*/
short tumpukan[100], pointer_tumpukan = 0;
/*Fungsi untuk menambah jumlah tumpukan*/
void tumpuk(short nilai_untuk_tumpukan_baru){
    /*Mengembalikan nilai dari pointer_tumpukan terlebih dahulu lalu menambahkan nilai pointer_tumpukan dengan inkrement*/
    /*Jangan salah menempatkan simbol ++ untuk inkrement tumpukan!*/
    tumpukan[pointer_tumpukan++] = nilai_untuk_tumpukan_baru;
}
/*Fungsi untuk mengambil atau mengurangi jumlah tumpukan*/
/*Mengembalikan nilai tumpukan yang diambil*/
short ambil(){
    return tumpukan[--pointer_tumpukan];
}
int main(){
    short nilai_baru;
    cout << "Masukkan nilai tumpukan : " << pointer_tumpukan; cin >> nilai_baru; tumpuk(nilai_baru);
    cout << "Masukkan nilai tumpukan : " << pointer_tumpukan; cin >> nilai_baru; tumpuk(nilai_baru);
    cout << "Masukkan nilai tumpukan : " << pointer_tumpukan; cin >> nilai_baru; tumpuk(nilai_baru);
	cout << "Nilai tumpukan : " << ambil() << endl;
	cout << "Nilai tumpukan : " << ambil() << endl;
	cout << "Nilai tumpukan : " << ambil() << endl;
    return 0;
}