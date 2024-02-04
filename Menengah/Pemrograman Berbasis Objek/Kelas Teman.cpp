#include <iostream>
using namespace std;
/*Kata kunci friend dapat digunakan untuk kelas (dinamakan friend class) atau fungsi (dinamakan friend function)*/
/*Kata kunci friend memperbolehkan untuk mengakses atribut private dan protected dalam kelas*/
class kelas_induk{
    public:
        friend class kelas_teman;
        friend void fungsi_teman(kelas_induk &alamat_memori_kelas_induk);
    private:
        void cetak(){
            cout << "Fungsi cetak dari kelas induk dipanggil!\n";
        }
};
/*kelas_teman dan fungsi_teman yang telah dideklarasikan dengan kata kunci friend memperbolehkan objek alamat_memori_kelas_induk memanggil fungsi private pada kelas_induk*/
class kelas_teman{
    public:
        void fungsi(kelas_induk &alamat_memori_kelas_induk){
            alamat_memori_kelas_induk.cetak();
        }
};
void fungsi_teman(kelas_induk &alamat_memori_kelas_induk){
    alamat_memori_kelas_induk.cetak();
}
int main(){
    kelas_induk objek_induk;
    kelas_teman objek_teman;
    objek_teman.fungsi(objek_induk);
    fungsi_teman(objek_induk);
    return 0;
}