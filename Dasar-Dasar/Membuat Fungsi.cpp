#include <iostream>

using namespace std;
/*Deklarasi variabel global*/
short variabel_global = 4;
/*Deklarasi fungsi kuadrat (opsional dan diperlukan deklarasi jika membuat fungsi setelah main)*/
double kuadrat(double);
/*Definisi fungsi kuadrat*/
double kuadrat(double bilangan_yang_akan_dikuadratkan){
    return bilangan_yang_akan_dikuadratkan * bilangan_yang_akan_dikuadratkan;
}
/*Definisi fungsi dengan parameter default*/
void fungsi_dengan_parameter_default(short parameter_default = 5){
}

int main(void){
    cout << kuadrat(variabel_global);
    return 0;
}