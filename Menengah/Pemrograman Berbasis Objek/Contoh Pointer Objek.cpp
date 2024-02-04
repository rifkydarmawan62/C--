#include <iostream>

using namespace std;

class kelas_baru{
    public:
        /*Nilai untuk diakses objek_pointer*/
        short nilai;
        kelas_baru(){
            cout << "Objek pointer dibuat\n";
        }
        void fungsi(){
            cout << "Anda memanggil fungsi di dalam kelas\n";
        }
        ~kelas_baru(){
            cout << "Objek pointer dihapus\n";
        }
};

int main(){
    kelas_baru *objek_pointer = new kelas_baru(); /*Mencetak objek yang baru dibangun*/
    /*Anda tidak dapat menggunakan operator dereferensi untuk objek kelas pointer*/
    /*Anda harus menggunakan simbol -> agar pointer menunjuk ke atribut kelas tertentu*/
    /*Simbol -> digunakan untuk mengakses nilai dan fungsi di dalam kelas*/
    objek_pointer -> nilai = 0;
    cout << ++(objek_pointer -> nilai) << endl;
    objek_pointer -> fungsi(); /*Memanggil fungsi*/
    delete objek_pointer; /*Mencetak objek dihancurkan*/
    return 0;
}