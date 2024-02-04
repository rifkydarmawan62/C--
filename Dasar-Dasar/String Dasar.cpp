#include <string>
#include <iostream>

using namespace std;
/*
string bukan kata kunci!
Deklarasi string
*/
string hewan = "Kucing"; /*atau*/ string buah("Pisang"); /*atau*/ string makanan(buah), input_string, input_string_1;

int main(void){
    cout << "Makanan " + makanan << endl;
    /*Menggunakan operator penjumlahan pada string*/
    buah = buah + " adalah tanaman\n"; /*atau*/ //buah += " adalah tanaman\n";
    cout << buah;
    /*Menginput string*/
    cout << "Masukkan string : "; cin >> input_string;
    cout << "Anda telah memasukkan string : " + input_string << endl;
    /*Menginput string dari fungsi getline*/
    /*
    cout << "Masukkan string : ";
    getline(cin, input_string_1);
    cout << "Anda telah memasukkan string : " + input_string_1 << endl;
    */
    /*Membandingkan string*/
    cout << (makanan.compare(buah) == 0) << endl; /*atau*/ //cout << (makanan == buah);
    cout << (makanan.compare(buah) > 0) << endl; /*atau*/ //cout << (makanan > buah);
    cout << (makanan.compare(buah) < 0) << endl; /*atau*/ //cout << (makanan < buah);
    return 0;
}