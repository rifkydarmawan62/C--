#include <iostream>
#include <string>
using namespace std;

class hewan_peliharaan{
    protected:
        string nama_hewan;
    public:
        void beri_nama(string nama_baru){
            this -> nama_hewan = nama_baru;
        }
        void buat_suara(){
            cout << nama_hewan << " tidak bersuara\n";
        }
};
void panggil_fungsi_kelas_dengan_nilai_variabel(string nama, hewan_peliharaan variabel_hewan_peliharaan){
    variabel_hewan_peliharaan.beri_nama(nama);
    variabel_hewan_peliharaan.buat_suara();
}
void panggil_fungsi_kelas_dengan_pointer(string nama, hewan_peliharaan *pointer_hewan_peliharaan){
    pointer_hewan_peliharaan -> beri_nama(nama);
    pointer_hewan_peliharaan -> buat_suara();
}
void panggil_fungsi_kelas_dengan_alamat_memori(string nama, hewan_peliharaan &alamat_memori_hewan_peliharaan){
    alamat_memori_hewan_peliharaan.beri_nama(nama);
    alamat_memori_hewan_peliharaan.buat_suara();
}
int main(){
    hewan_peliharaan *pointer_hewan = new hewan_peliharaan;
    hewan_peliharaan objek_hewan;
    /*Masing-masing parameter dari fungsi tadi, harus memberikan argumen yang tepat di setiap parameter fungsi tersebut*/
    panggil_fungsi_kelas_dengan_nilai_variabel("*pointer_hewan", *pointer_hewan);
    panggil_fungsi_kelas_dengan_pointer("*pointer_hewan", pointer_hewan);
    panggil_fungsi_kelas_dengan_alamat_memori("*pointer_hewan", *pointer_hewan);
    panggil_fungsi_kelas_dengan_nilai_variabel("objek_hewan", objek_hewan);
    panggil_fungsi_kelas_dengan_pointer("objek_hewan", &objek_hewan);
    panggil_fungsi_kelas_dengan_alamat_memori("objek_hewan", objek_hewan);
    /*Jika argumen tadi sesuai, maka akan menghasilkan output yang sesuai*/
    return 0;
}