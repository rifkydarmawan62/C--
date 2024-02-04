#include <iostream>
#include <iomanip>
//iomanip dapat digunakan untuk manipulasi bilangan
using namespace std;

int main(void){
    int bilangan = 255;
    cout << "Nilai bilangan heksadesimal " << hex << bilangan;
    cout << "\nNilai bilangan desimal " << dec << bilangan;
    cout << "\nNilai bilangan oktal " << oct << bilangan;
    cout << "\nNilai bilangan heksadesimal " << setbase(16) << bilangan << " dari setbase(16)\n";
    cout << "Nilai bilangan desimal " << setbase(10) << bilangan << " dari setbase(10)\n";
    cout << "Nilai bilangan oktal " << setbase(8) << bilangan << " dari setbase(8)\n";
    return 0;
}