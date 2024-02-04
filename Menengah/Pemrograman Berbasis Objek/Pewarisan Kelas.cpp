#include <iostream>

using namespace std;

class kelas_induk{
    /*Atribut private tidak dapat diakses oleh kelas_anak*/
    private:
        short nilai_private_kelas_induk;
    protected:
        short nilai_protected_kelas_induk;
    public:
        inline void fungsi_dari_kelas_induk(){
            cout << "Anda memanggil fungsi dari kelas induk\n";
        }
        inline void ganti_nilai_private_kelas_induk(short nilai_baru){
            cout << "Anda mengganti nilai_private_kelas_induk dari " << nilai_private_kelas_induk << " menjadi " << nilai_baru << endl;
            this -> nilai_private_kelas_induk = nilai_baru;
        }
        inline void ganti_nilai_protected_kelas_induk(short nilai_baru){
            cout << "Anda mengganti nilai_protected_kelas_induk dari " << nilai_protected_kelas_induk << " menjadi " << nilai_baru << endl;
            this -> nilai_protected_kelas_induk = nilai_baru;
        }
};

/*Pewarisan kelas_induk ke kelas_anak*/
class kelas_anak : public kelas_induk{
    public:
        inline void cetak_nilai_protected_dari_kelas_induk(){
            cout << "nilai_protected_kelas_induk : " << nilai_protected_kelas_induk << endl;
        }
};
/*Jika pewarisan kelas_induk ke kelas_anak menjadi private, maka semua atribut dari kelas_induk tidak akan diwariskan ke kelas_anak*/
class kelas_anak_private : private kelas_induk{

};
int main(){
    short input_nilai;
    kelas_anak objek_anak;
    objek_anak.fungsi_dari_kelas_induk();
    cout << "Masukkan nilai_private_kelas_induk : "; cin >> input_nilai; objek_anak.ganti_nilai_private_kelas_induk(input_nilai);
    cout << "Masukkan nilai_protected_kelas_induk : "; cin >> input_nilai; objek_anak.ganti_nilai_protected_kelas_induk(input_nilai);
    objek_anak.cetak_nilai_protected_dari_kelas_induk();
    return 0;
}