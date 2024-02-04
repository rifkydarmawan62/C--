#include <iostream>

using namespace std;

class kelas_1{
    private:
        short atribut_private;
    public:
        inline short ganti_atribut(short nilai_untuk_mengganti_atribut_kelas){
            atribut_private = nilai_untuk_mengganti_atribut_kelas;
            return atribut_private;
        }
        inline short ganti_atribut_dengan_operator_scope(short nilai_untuk_mengganti_atribut_kelas){
            /*Mengganti atribut kelas menggunakan simbol ::*/
            kelas_1::atribut_private = nilai_untuk_mengganti_atribut_kelas;
            return kelas_1::atribut_private;
        }
        inline short ganti_atribut_dengan_this(short nilai_untuk_mengganti_atribut_kelas){
            /*Kata kunci adalah pointer yang merujuk ke objek kelas saat ini*/
            this -> atribut_private = nilai_untuk_mengganti_atribut_kelas;
            return atribut_private;
        }
};
int main(){
    kelas_1 objek_1;
    short nilai_input;
    cout << "Masukkan nilai atribut baru : "; cin >> nilai_input;
    cout << "Atribut kelas_1 : " << objek_1.ganti_atribut(nilai_input) << endl;
    cout << "Masukkan nilai atribut baru : "; cin >> nilai_input;
    cout << "Atribut kelas_1 dari operator scope : " << objek_1.ganti_atribut_dengan_operator_scope(nilai_input) << endl;
    cout << "Masukkan nilai atribut baru : "; cin >> nilai_input;
    cout << "Atribut kelas_1 dari this : " << objek_1.ganti_atribut_dengan_this(nilai_input) << endl;
    return 0;
}