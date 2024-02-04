#include <iostream>

using namespace std;

class tumpukan{
    /*Kata kunci private mencegah variabel diakses dan dimodifikasi di luar kelas tumpukan*/
    private:
        short tumpukan_data[100];
        unsigned short pointer_tumpukan = 0;
    /*Kata kunci public memperbolehkan variabel diakses dan dimodifikasi di luar kelas tumpukan*/
    public:
        inline void tumpuk(short nilai_untuk_tumpukan_baru){
            tumpukan_data[pointer_tumpukan++] = nilai_untuk_tumpukan_baru;
        }
        inline short ambil(){
            return tumpukan_data[--pointer_tumpukan];
        };
};
/*Membuat pewarisan kelas atau kelas super dari tumpukan dengan simbol :*/
class kelas_super_tumpukan:tumpukan{
    private:
        short pointer;
    public:
        void tambah_tumpukan(short value);
        short ambil_tumpukan();
};
/*Definisikan fungsi yang belum lengkap*/
inline void kelas_super_tumpukan::tambah_tumpukan(short value){
    pointer += value;
    tumpukan::tumpuk(value);
}
inline short kelas_super_tumpukan::ambil_tumpukan(){
    short val = tumpukan::ambil();
    pointer -= val;
    return val;
}
int main(){
    /*Membuat objek dari kelas tumpukan*/
    tumpukan tumpukan_bata, tumpukan_kayu;
    short nilai_bata, nilai_kayu;
    cout << "Masukkan nilai tumpukan_bata : "; cin >> nilai_bata; tumpukan_bata.tumpuk(nilai_bata);
    cout << "Masukkan nilai tumpukan_bata : "; cin >> nilai_bata; tumpukan_bata.tumpuk(nilai_bata);
    cout << "Masukkan nilai tumpukan_bata : "; cin >> nilai_bata; tumpukan_bata.tumpuk(nilai_bata);
    cout << "Masukkan nilai tumpukan_kayu : "; cin >> nilai_kayu; tumpukan_kayu.tumpuk(nilai_kayu);
    cout << "Masukkan nilai tumpukan_kayu : "; cin >> nilai_kayu; tumpukan_kayu.tumpuk(nilai_kayu);
    cout << "Masukkan nilai tumpukan_kayu : "; cin >> nilai_kayu; tumpukan_kayu.tumpuk(nilai_kayu);
    cout << "Nilai dari tumpukan_bata : " << tumpukan_bata.ambil() << endl;
    cout << "Nilai dari tumpukan_bata : " << tumpukan_bata.ambil() << endl;
    cout << "Nilai dari tumpukan_bata : " << tumpukan_bata.ambil() << endl;
    cout << "Nilai dari tumpukan_kayu : " << tumpukan_kayu.ambil() << endl;
    cout << "Nilai dari tumpukan_kayu : " << tumpukan_kayu.ambil() << endl;
    cout << "Nilai dari tumpukan_kayu : " << tumpukan_kayu.ambil() << endl;
    kelas_super_tumpukan tumpukan_besi; short nilai_besi;
    cout << "Masukkan nilai tumpukan_besi : "; cin >> nilai_besi; tumpukan_besi.tambah_tumpukan(nilai_besi);
    cout << "Nilai dari tumpukan_besi : " << tumpukan_besi.ambil_tumpukan() << endl;
    return 0;
}