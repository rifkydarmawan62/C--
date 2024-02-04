#include <iostream>

using namespace std;
/*Kata kunci class digunakan untuk membuat kelas baru*/
class ini_adalah_kelas{
    /*Kata kunci private mencegah variabel diakses dan dimodifikasi di luar kelas itu sendiri*/
    private:
        short nilai_private_kelas_induk;
    /*Kata kunci protected mencegah variabel diakses dan dimodifikasi di luar kelas manapun, namun dapat diakses oleh kelas itu sendiri beserta kelas turunannya*/
    protected:
        short nilai_protected_kelas_induk;
    /*Kata kunci public memperbolehkan variabel diakses dan dimodifikasi di dalam kelas atau di luar kelas manapun*/
    public:
        short nilai_public_kelas_induk;
};
/*Membuat objek dari kelas*/
ini_adalah_kelas ini_adalah_objek;

int main(void){

    return 0;
}