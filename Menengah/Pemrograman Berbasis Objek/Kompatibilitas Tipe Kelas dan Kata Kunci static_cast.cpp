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
        void berlari(){
            cout << nama_hewan << " berlari!\n";
        }
};
class anjing : public hewan_peliharaan{
    public:
        anjing(string nama_anjing) : hewan_peliharaan(nama_anjing){}
        void buat_suara(){
            cout << nama_hewan << " : Gug! Gug!\n";
        }
};
class kucing : public hewan_peliharaan{
    public:
        kucing(string nama_kucing) : hewan_peliharaan(nama_kucing){}
        void buat_suara(){
            cout << nama_hewan << " : Meong! Meong!\n";
        }
};
int main(){
    hewan_peliharaan sebuah_hewan("Hewan Peliharaan");
    kucing sebuah_kucing("Tom"); hewan_peliharaan *pointer_kucing = new kucing("Pointer Tom");
    anjing sebuah_anjing("Spike"); hewan_peliharaan *pointer_anjing = new anjing("Pointer Spike");
    /*Menggunakan fungsi buat_suara dari kelas hewan_peliharaan akan menghasilkan error karena fungsi tersebut tidak terdapat pada kelas hewan_peliharaan*/
    /*Termasuk pointer objek kelas*/
    sebuah_hewan.berlari(); //sebuah_hewan.buat_suara();
    sebuah_kucing.berlari(); sebuah_kucing.buat_suara();
    sebuah_anjing.berlari(); sebuah_kucing.buat_suara();
    pointer_kucing -> berlari(); //pointer_kucing.buat_suara()
    pointer_anjing -> berlari(); //pointer_anjing.buat_suara()
    /*Agar dapat menggunakan fungsi buat_suara() karena kompatibilitas kelas yang tidak sesuai, diperlukan kata kunci static_cast*/
    static_cast<kucing *>(pointer_kucing) -> buat_suara();
    static_cast<anjing *>(pointer_anjing) -> buat_suara();
    return 0;
}