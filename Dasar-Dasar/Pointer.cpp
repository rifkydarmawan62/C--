#include <iostream>

using namespace std;
/*Deklarasi pointer dan a*/
short *pointer, a = 2;


int main(void){
    cout << "Nilai a = " << a << " sebelum diubah oleh pointer\n";
    /*Anda hanya dapat memberikan nilai 0 dan NULL pada pointer*/
    pointer = 0; pointer = NULL;
    /*Mereferensikan alamat memori a ke pointer*/
    pointer = &a;
    cout << "Nilai *pointer = " << *pointer << " setelah direferensikan dengan a\n";
    /*
    Mengubah nilai a yang telah direferensikan ke pointer menggunakan pointer
    Penggunaan simbol * diluar deklarasi disebut dereferensi
    */
    *pointer = 5;
    cout << "Nilai *pointer = " << *pointer << " setelah nilai pointer diubah\n";
    cout << "Nilai a = " << a << " setelah nilai pointer diubah\n";
    return 0;
}