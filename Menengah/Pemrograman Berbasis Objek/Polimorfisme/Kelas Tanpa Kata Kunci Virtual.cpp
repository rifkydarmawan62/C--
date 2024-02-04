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
    hewan_peliharaan *pointer_1, *pointer_2;
    kucing *pointer_kucing;
    anjing *pointer_anjing;
    /*Memberikan kedua pointer dengan nama hewan yang sama*/
    pointer_1 = pointer_kucing = new kucing("Kitty");
    pointer_2 = pointer_anjing = new anjing("Doggie");
    pointer_1 -> buat_suara();
    pointer_kucing -> buat_suara();
    pointer_2 -> buat_suara();
    pointer_anjing -> buat_suara();
    return 0;
}