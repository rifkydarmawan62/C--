#include <iostream>
#include <string>
using namespace std;

class hewan_peliharaan{
    protected:
        string nama_hewan;
    public:
        hewan_peliharaan(string nama_baru){
            nama_hewan = nama_baru;
        }
        void buat_suara(){
            cout << nama_hewan << " : Shh! Shh!\n";
        }
};
class kucing : public hewan_peliharaan{
    public:
        kucing(string nama_kucing) : hewan_peliharaan(nama_kucing){}
        void buat_suara(){
            cout << nama_hewan << " : Meong! Meong!\n";
        }
};
class anjing : public hewan_peliharaan{
    public:
        anjing(string nama_anjing) : hewan_peliharaan(nama_anjing){}
        void buat_suara(){
            cout << nama_hewan << " : Gug! Gug!\n";
        }
};
int main(){
    kucing *seekor_kucing = new kucing("Kitty");
    anjing *seekor_anjing = new anjing("Doggie");
    seekor_kucing -> buat_suara();
    /*Memanggil fungsi buat_suara() dari kelas hewan_peliharaan atau kelas induk*/
    /*Ini dinamakan dengan uppercasting*/
    static_cast<hewan_peliharaan *>(seekor_kucing) -> buat_suara();
    seekor_anjing -> buat_suara();
    static_cast<hewan_peliharaan *>(seekor_anjing) -> buat_suara();
    return 0;
}