#include <iostream>
#include <string>

using namespace std;

int main(void){
    string string_1, string_2;
    string_1 = "ABCDEF";
    /*Menggunakan indeks untuk mencetak string*/
    for (short indeks = 0; indeks < string_1.size(); indeks++){
        cout << "string_1[" << indeks << "] : " << string_1[indeks] << endl;
    }
    cout << "string_1 : " + string_1;
    /*Parameter substr(posisi_mulai, panjang_string)*/
    /*B + EF + ABCDEF*/
    string_2 = string_1.substr(1, 1) + string_1.substr(4) + string_1.substr();
    cout << "\nstring_2 : " + string_2 << endl;
    /*Panjang string*/
    cout << "Panjang string_1 : " << string_1.length() << endl;
    cout << "Panjang string_2 : " << string_2.length() << endl;
    /*Ukuran string*/
    cout << "Ukuran string_1 : " << string_1.size() << endl;
    cout << "Ukuran string_2 : " << string_2.size() << endl;
    /*Kapasitas string*/
    cout << "Kapasitas string_1 : " << string_1.capacity() << endl;
    cout << "Kapasitas string_2 : " << string_2.capacity() << endl;
    /*Ukuran maksimum sting*/
    cout << "Ukuran maksimum string_1 : " << string_1.max_size() << endl;
    cout << "Ukuran maksimum string_2 : " << string_2.max_size() << endl;
    /*Mengontrol ukuran memori string menggunakan reserve*/
    string_1.reserve(50);
    string_2.reserve(5);
    cout << "Kapasitas string_1.reserve(50) : " << string_1.capacity() << endl;
    cout << "Kapasitas string_2.reserve(5) : " << string_2.capacity() << endl;
    /*Perbandingan string*/
    /*Parameter*/
    /*compare(indeks_mulai, panjang_string, string_lain)*/
    /*compare(indeks_mulai, panjang_string, string_lain, indeks_mulai_string_lain, panjang_string_lain)*/
    cout << string_1.compare(0, 2, "AB") << endl;
    cout << string_1.compare(0, 1, "C") << endl;
    cout << string_1.compare(2, 1, "BD", 0, 1) << endl;
    cout << string_1.compare(1, 1, "B", 1, 1) << endl;    
    /*Menemukan string di dalam string*/
    string string_yang_dicari("F");
    /*string::npos digunakan untuk mengembalikan nilai dari berbagai fungsi anggota ketika gagal.*/
    if (string_1.find(string_yang_dicari) != string::npos){
        cout << "Ditemukan!\n";
    }else{
        cout << "Tidak Ditemukan!\n";
    }
    /*Mengontrol ukuran string menggunakan resize*/
    string_1.resize(3);
    cout << "string_1.resize(3) : " << string_1 << endl;
    string_1.resize(10, '#');
    cout << "string_1.resize(10, '#') : " << string_1 << endl;
    /*Memeriksa apakah string kosong atau tidak*/
    cout << "string_1 apakah kosong? " << (string_1.empty()? "Ya\n" : "Tidak\n");
    /*Menambahkan string menggunakan append*/
    cout << "string_2 : " + string_2 << endl;
    string_2.append(string_1, 3);
    cout << "string_2.append(string_1, 3) : " + string_2 << endl;
    string_2.append(3, '*');
    cout << "string_2.append(3, '*') : " + string_2 << endl;
    /*Menambahkan string menggunakan pushback*/
    string_2.push_back('$');
    cout << "string_2.push_back('$') : " + string_2 << endl;
    /*Menggunakan fungsi insert*/
    /*parameter insert(indeks_string_yang_akan_ditambahkan, string_tambahan, indeks_mulai, panjang_indeks_dari_mulai)*/
    string kalimat_1("Apa kabar "), kalimat_2("hari Senin"), kalimat_3("ini");
    kalimat_1.insert(10, kalimat_2, 0, 5).insert(15, kalimat_3);
    cout << "kalimat_1.insert(10, kalimat_2, 0, 5).insert(15, kalimat_3) : " + kalimat_1 << endl;
    /*Menggunakan fungsi replace*/
    /*parameter replace(indeks_mulai_string_yang_akan_dipotong, panjang_indeks_dari_mulai_string_yang_akan_dipotong, string_yang_akan_ditempatkan, indeks_mulai_string_yang_akan_ditempatkan, panjang_indeks_dari_mulai_string_yang_akan_ditempatkan)*/
    kalimat_1.replace(0, 10, "").replace(5, 3, kalimat_2, 5, 5);
    cout << "kalimat_1.replace(0, 10, \"\").replace(5, 3, kalimat_2, 5, 5) : " + kalimat_1 << endl;
    /*Menggunakan fungsi erase*/
    /*parameter erase(indeks_mulai_string_yang_akan_dihapus, panjang_indeks_string_yang_akan_dihapus)*/
    kalimat_1.erase(0, 5);
    cout << "kalimat_1.erase(0, 5) : " + kalimat_1 << endl;
    /*Menggunakan fungsi assign*/
    /*parameter assign(jumlah_char, tipe_data_char)*/
    string string_tagar;
    string_tagar.assign(10, '#');
    cout << "string_tagar.assign(10, '#') : " + string_tagar << endl;
    /*Menukar kedua objek string*/
    string kalimat_4("Selasa");
    kalimat_4.swap(kalimat_1);
    cout << "kalimat_1 : " + kalimat_1 << endl << "kalimat_4 : " + kalimat_4 << endl;
    return 0;
}