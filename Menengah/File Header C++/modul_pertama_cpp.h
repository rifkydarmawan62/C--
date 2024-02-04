/*Pra prosesor #ifndef digunakan untuk memerikas apakah simbol kompilasi ditemukan atau tidak*/
/*#endif harus digunakan setelah menggunakan pra prosesor #define*/
#ifndef MODUL_PERTAMA_CPP
#define MODUL_PERTAMA_CPP

class tumpukan{
    private:
        short tumpukan_data[100];
        unsigned short pointer_tumpukan = 0;
    public:
        inline void tumpuk(short nilai_untuk_tumpukan_baru){
            tumpukan_data[pointer_tumpukan++] = nilai_untuk_tumpukan_baru;
        }
        inline short ambil(){
            return tumpukan_data[--pointer_tumpukan];
        };
};
#endif