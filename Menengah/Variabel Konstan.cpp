#include <iostream>

using namespace std;
/*Variabel konstan tidak dapat diubah setelah dideklarasikan*/
const short derajat_lingkaran = 360;
const short persen = 100;
const short *pointer_konstan;
short kuadrat(const short bilangan_yang_dikuadratkan){
    return bilangan_yang_dikuadratkan * bilangan_yang_dikuadratkan;
}
const void fungsi_konstan(){
    cout << "Anda berhasil memanggil fungsi konstan\n";
}
const char *pointer_fungsi(){
    return "Anda memanggil pointer_fungsi()";
}
int main(){
    /*Memberikan nilai pointer_fungsi() ke pointer memerlukan kata kunci const, jika tidak maka akan menghasilkan error*/
    const char *pointer = pointer_fungsi();
    cout << "&pointer : " << &pointer << endl;
    cout << "pointer : " << pointer << endl;
    cout << "*pointer : " << *pointer << endl;
    cout << "&pointer_fungsi : " << &pointer_fungsi << endl;
    cout << "pointer_fungsi() : " << pointer_fungsi() << endl;
    cout << "*pointer_fungsi() : " << *pointer_fungsi() << endl;
    return 0;
}