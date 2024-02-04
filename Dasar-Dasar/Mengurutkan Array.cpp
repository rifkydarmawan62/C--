#include <iostream>

using namespace std;

int main(void){
    short array[5];
    short sementara;
    bool ditukar;
    // ask the user to enter 5 values 
    for (short indeks = 0; indeks < 5; indeks++){
        cout << endl << "Masukkan nilai #" << indeks + 1 << ": "; cin >> array[indeks];
    }
    // sort them 
    do{
        ditukar = false;
        for (short indeks = 0; indeks < 4; indeks++){
            if (array[indeks] > array[indeks + 1]){
                ditukar = true;
                sementara = array[indeks];
                array[indeks] = array[indeks + 1];
                array[indeks + 1] = sementara;
            }
        }
    }while(ditukar);
    // print results 
    cout << endl << "Sorted array: " << endl;
    for (short indeks = 0; indeks < 5; indeks++){
        cout << array[indeks] << " ";
        cout << endl;
    }
    return 0;
}