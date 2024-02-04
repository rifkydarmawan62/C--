#include <iostream>
#include <deque>
using namespace std;
/*Tidak seperti vector, deque adalah array double linked list*/
int main(){
    /*Deklarasi deque dengan nilai 0 sebanyak 10 elemen vector*/
    deque <short> deque_1(10, 0);
    /*Menyalin deque*/
    deque <short> deque_2(deque_1);
    for (unsigned short indeks_deque = 0; indeks_deque < deque_1.size(); indeks_deque++){
        cout << "deque_1[" << indeks_deque << "] : " << deque_1[indeks_deque] << endl;
    }
    cout << "\nJumlah elemen deque_1 : " << deque_1.size() << endl;
    return 0;
}