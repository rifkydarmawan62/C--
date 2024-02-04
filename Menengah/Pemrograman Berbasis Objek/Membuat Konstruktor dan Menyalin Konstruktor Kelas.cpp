#include <iostream>

using namespace std;

class kelas_baru{
    private:
        short nilai;
    /*Membuat konstruktor kelas dengan memberikan nama fungsi yang sama dengan nama kelas*/
    public:
        kelas_baru(short nilai_parameter){
            this -> nilai = nilai_parameter;
        }
        inline short ambil_nilai(){
            return nilai;
        }
};

int main(){
    /*Menyalin konstruktor objek ke objek lain*/
    kelas_baru objek_1(5), objek_disalin = objek_1;
    cout << objek_1.ambil_nilai() << endl;
    cout << objek_disalin.ambil_nilai() << endl;
}