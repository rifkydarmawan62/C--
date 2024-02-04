#include <vector>
#include <iostream>
using namespace std;

int main (){
    /*Deklarasi vector dengan jumlah maksimum 10 elemen*/
    vector <short> vector_1 (10);
    /*Deklarasi vector dengan nilai 0 sebanyak 10 elemen vector*/
    vector <short> vector_2(10, 0);
    /*Deklarasi vector dengan 10 elemen vector*/
    vector <short> vector_3 = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    /*Menyalin vector*/
    vector <short> vector_4(vector_3);
    for (unsigned short indeks_vector_1 = 0; indeks_vector_1 < vector_1.size(); ++indeks_vector_1){
        vector_1[indeks_vector_1] = indeks_vector_1;
    }
    for (unsigned short indeks_vector_1 = 0; indeks_vector_1 < vector_1.size(); ++indeks_vector_1){
        cout << "vector_1[" << indeks_vector_1 << "] : " << vector_1[indeks_vector_1] << endl;
    }
    cout << endl;
    for (unsigned short indeks_vector_2 = 0; indeks_vector_2 < vector_2.size(); ++indeks_vector_2){
        cout << "vector_2[" << indeks_vector_2 << "] : " << vector_2[indeks_vector_2] << endl;
    }
    cout << endl;
    for (unsigned short indeks_vector_3 = 0; indeks_vector_3 < vector_1.size(); ++indeks_vector_3){
        cout << "vector_3[" << indeks_vector_3 << "] : " << vector_3[indeks_vector_3] << endl;
    }
    cout << endl;

    cout << "Jumlah elemen vector_1 : " << vector_1.size() << endl;
    /*Fungsi push_back() pada vector akan menambahkan elemen baru di indeks akhir*/
    vector_1.push_back(100);
    cout << "Jumlah elemen vector_1 : " << vector_1.size() << endl;
    /*Fungsi pop_back() pada vector akan menghapus elemen di akhir indeks*/
    vector_1.pop_back();
    cout << "Jumlah elemen vector_1 : " << vector_1.size() << endl;
    return 0;
}