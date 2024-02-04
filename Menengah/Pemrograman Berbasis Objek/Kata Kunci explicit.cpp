#include <iostream>
using namespace std;
/*Kata kunci explicit hanya dapat digunakan pada konstruktor kelas*/
/*Kata kunci explicit digunakan untuk mencegah konstruktor menerima konversi implisit*/
class eksplisit{
    public:
        explicit eksplisit(short nilai){}
};
class non_eksplisit{
    public:
        non_eksplisit(short nilai){}
};

int main(){
    /*Memberikan nilai secara implisit*/
    //eksplisit objek_eksplist = 1; //Mencoba memberikan nilai 1 akan menghasilkan error
    //eksplisit objek_eksplisis = (short)1; //Ini juga akan menghasilkan error
    eksplisit objek_eksplisit(1);
    non_eksplisit objek_non_eksplisit = 1;
}