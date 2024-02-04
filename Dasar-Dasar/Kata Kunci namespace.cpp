#include <iostream>
#include <string>
/*Penggunaan namespace*/
using namespace std;
/*Parameter jika tanpa namespace*/
/*name_space_default::entitas_nama*/
/*Simbol :: adalah operator resolusi ruang lingkup*/

/*Mendefinisikan namespace*/
namespace matematika{
    short derajat = 360, persen = 100;
}
namespace hari{
    string senin("Senin"), selasa("Selasa"), rabu("Rabu"), kamis("Kamis"), jumat("Jum'at"), sabtu("Sabtu"), minggu("Minggu");
}
namespace baru{
    short kosong;   
}
/*Mendefinisikan namespace kosong*/
namespace{
    string anonim("Anonim");
}
/*Mengganti nama namespace*/
namespace lama = baru;
/*Penggunaan kata kunci using*/
using namespace hari;

int main(void){
    cout << "derajat : " << matematika::derajat << endl << "persen : " << matematika::persen << endl;
    cout << "hari : " << senin << endl;
    cout << anonim << endl;
    cout << lama::kosong << endl << baru::kosong << endl;
    return 0;
}