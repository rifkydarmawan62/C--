#include <iostream>

using namespace std;

class kelas_dengan_dua_konstruktor{
    public:
        kelas_dengan_dua_konstruktor(){
            cout << "Objek dibuat tanpa argumen\n";
        }
        kelas_dengan_dua_konstruktor(short parameter){
            cout << "Objek dibuat dengan argumen " << parameter << endl;
        }
        ~kelas_dengan_dua_konstruktor(){
            cout << "Objek dihapus!\n";
        }
};
int main(){
    kelas_dengan_dua_konstruktor *pointer_1 = new kelas_dengan_dua_konstruktor(); kelas_dengan_dua_konstruktor *pointer_2 = new kelas_dengan_dua_konstruktor(6);
    delete pointer_1; delete pointer_2;
    return 0;
}