#include <iostream>

using namespace std;

class kelas_static{
    private:
        static short nilai_static_private;
    public:
        /*nilai_static memperbolehkan pengguna untuk mengganti atau memodifikasi atribut tanpa objek, namun tidak dapat dimodifikasi di dalam fungsi main*/
        static short nilai_static;
        /*Fungsi static memperbolehkan pengguna untuk memanggil fungsi tanpa objek*/
        static void fungsi_static(){
            cout << "Fungsi static dipanggil\n";
        }
        static void cetak_nilai_static_private(){
            cout << "nilai_static_private : " << nilai_static_private << endl;
        }
};
/*nilai_static dapat dimodifikasi tanpa objek, namun nilai_static tidak dapat dimodifikasi di dalam fungsi main*/
short kelas_static::nilai_static = 5;
/*Modifikasi nilai_static_private namun tidak dapat diakses di dalam fungsi main kecuali fungsi dari kelas itu sendiri*/
short kelas_static::nilai_static_private = 5;
class kelas_non_static{
    public:
        /*Mencoba mengganti atau memodifikasi atribut non static tanpa objek akan menghasilkan error*/
        short nilai_non_static;
        /*Mencoba memanggil fungsi non static tanpa objek akan menghasilkan error*/
        void fungsi_non_static(){
           cout << "Fungsi non static dipanggil\n";
        }
};

int main(){
    cout << "nilai_static : " << kelas_static::nilai_static << endl;
    /*fungsi_static dapat dipanggil tanpa objek*/
    kelas_static::cetak_nilai_static_private();
    kelas_static::fungsi_static();
    /*Membuat objek untuk kelas_non_static*/
    kelas_non_static objek_non_static;
    cout << "nilai_non_static : " << objek_non_static.nilai_non_static << endl;
    /*fungsi_non_static hanya dapat dipanggil dengan objek*/
    objek_non_static.fungsi_non_static();
    return 0;
}