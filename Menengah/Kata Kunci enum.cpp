#include <iostream>
using namespace std;
/*Kata kunci enum hanya dapat digunakan untuk konstanta integral*/
enum mingguan{senin = 1, selasa = 2, rabu = 3, kamis = 4, jumat = 5, sabtu = 6, minggu = 0};
int main(){
    cout << "Integer Senin : " << senin << endl;
    return 0;
}