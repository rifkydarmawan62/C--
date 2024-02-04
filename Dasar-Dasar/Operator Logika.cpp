#include <iostream>

using namespace std;

int main(void){
    bool nilai_benar = true, nilai_salah = false;
    /*Operator AND*/
    cout << "nilai_benar && nilai_salah : " << (nilai_benar && nilai_salah);
    /*Operator OR*/
    cout << "\nnilai_benar || nilai_salah : " << (nilai_benar || nilai_salah);
    /*Operator NOT*/
    cout << "\n!nilai_benar : " << !nilai_benar;
    cout << "\n!nilai_salah : " << !nilai_salah;
    return 0;
}