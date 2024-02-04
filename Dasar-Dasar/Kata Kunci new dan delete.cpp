#include <iostream>

using namespace std;

int main(void){
    /*Kata kunci new digunakan untuk membuat blok memori baru dan dapat dihapus menggunakan kata kunci delete*/
    float *array = new float[20];
    short *jumlah = new short;
    /*Untuk menghapus objek khusus array*/
    delete []array;
    /*Untuk menghapus objek*/
    delete jumlah;
    return 0;
}