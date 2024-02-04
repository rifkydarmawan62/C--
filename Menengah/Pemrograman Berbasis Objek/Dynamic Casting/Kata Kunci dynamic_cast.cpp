#include <iostream>
#include <string>
using namespace std;

class hewan_peliharaan{
    protected:
        string nama_hewan;
    public:
        hewan_peliharaan(string nama_baru) : nama_hewan(nama_baru){}
        virtual void buat_suara(){
            cout << nama_hewan << " : bersuara!\n";
        }
};
class anjing : public hewan_peliharaan{
    public:
        anjing(string nama_anjing) : hewan_peliharaan(nama_anjing){}
        void buat_suara(){
            cout << nama_hewan << " : Gug! Gug!\n";
        }
};
class german_shepherd : public anjing{
    public:
        german_shepherd(string nama_anjing) : anjing(nama_anjing){}
        void buat_suara(){
            cout << nama_hewan << " : Wuff!\n";
        }
        void berlari(){
            cout << nama_hewan << " : Berlari!\n";
        }
};
void fungsi_dynamic_cast(hewan_peliharaan *pointer_hewan_peliharaan){
    /*Kata kunci dynamic_cast digunakan untuk memeriksa objek dari kelas ke kelas yang sesuai*/
    /*Jika pemeriksaan gagal maka akan mengembalikan NULL*/
    /*Kata kunci virtual diperlukan pada kelas induk untuk dapat menggunakan kata kunci dynamic_cast pada kelas anak*/
    german_shepherd *pointer_german_shepherd;
    pointer_hewan_peliharaan -> buat_suara();
    if (pointer_german_shepherd = dynamic_cast<german_shepherd *>(pointer_hewan_peliharaan)){
        pointer_german_shepherd -> berlari();
    }
}
int main(){
    hewan_peliharaan *pointer_makhluk = new hewan_peliharaan("makhluk");
    anjing *pointer_anjing = new anjing("Anjing");
    german_shepherd *pointer_anjing_german = new german_shepherd("Anjing German");
    /*Konversi dari kelas hewan_peliharaan menjadi kelas german_shepherd*/
    fungsi_dynamic_cast(pointer_makhluk);
    /*Konversi dari kelas anjing menjadi kelas german_shepherd*/
    fungsi_dynamic_cast(pointer_anjing);
    fungsi_dynamic_cast(pointer_anjing_german);
    return 0;
}