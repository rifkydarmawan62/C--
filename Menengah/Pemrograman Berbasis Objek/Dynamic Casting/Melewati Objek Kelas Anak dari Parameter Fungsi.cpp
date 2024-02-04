#include <iostream>
#include <string>
using namespace std;

class hewan_peliharaan{
    protected:
        string nama_hewan;
    public:
        hewan_peliharaan(string nama_baru){
            this -> nama_hewan = nama_baru;
        }
        void buat_suara(){
            cout << nama_hewan << " tidak bersuara\n";
        }
};
class anjing : public hewan_peliharaan{
    public:
        anjing(string nama_anjing) : hewan_peliharaan(nama_anjing){}
        void buat_suara(){
            cout << nama_hewan << " : Gug! Gug!\n";
        }
};
class kucing : public anjing{
    public:
        kucing(string nama_kucing) : anjing(nama_kucing){}
        void buat_suara(){
            cout << nama_hewan << " : Meong! Meong!\n";
        }
};
void panggil_fungsi_hewan_peliharaan_dengan_pointer(hewan_peliharaan *pointer_hewan_peliharaan){
    pointer_hewan_peliharaan -> buat_suara();
}
void panggil_fungsi_hewan_peliharaan_dengan_alamat_memori(hewan_peliharaan &alamat_memori_hewan_peliharaan){
    alamat_memori_hewan_peliharaan.buat_suara();
}
int main(){
    hewan_peliharaan makhluk_hidup("makhluk_hidup");
    anjing hewan_anjing("Doggie");
    kucing hewan_kucing("Kitty");
    panggil_fungsi_hewan_peliharaan_dengan_pointer(&makhluk_hidup);
    panggil_fungsi_hewan_peliharaan_dengan_alamat_memori(makhluk_hidup);
    panggil_fungsi_hewan_peliharaan_dengan_pointer(&hewan_anjing);
    panggil_fungsi_hewan_peliharaan_dengan_alamat_memori(hewan_anjing);
    panggil_fungsi_hewan_peliharaan_dengan_pointer(&hewan_kucing);
    panggil_fungsi_hewan_peliharaan_dengan_alamat_memori(hewan_kucing);
    return 0;
}