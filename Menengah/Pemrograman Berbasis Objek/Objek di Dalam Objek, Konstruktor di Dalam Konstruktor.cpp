#include <iostream>
using namespace std;

class penyimpanan_data{
    private:
	    short data;
    public:
        /*Membuat konstruktor penyimpanan_data*/
        penyimpanan_data(){
            cout << "Objek dari kelas penyimpanan_data dibuat\n";
        }
        penyimpanan_data(short nomor_objek){
            cout << "Objek " << nomor_objek << " dari kelas penyimpanan_data dibuat\n";
        }
	    short ambil_data(void){
            return data;
        }
	    void ganti_data(short data_baru){
            data = data_baru;
        }
};
class kelas_koleksi{
    private:
        /*Membuat objek slot_penyimpanan_1 dan slot_penyimpanan_2 di dalam kelas_koleksi*/
        /*Konstruktor penyimpanan_data tidak dapat dipanggil saat membuat objek*/
    	penyimpanan_data slot_penyimpanan_1, slot_penyimpanan_2;
    public:
        /*Konstruktor dari kelas penyimpanan_data hanya dapat dipanggil menggunakan konstruktor kelas_koleksi*/
        kelas_koleksi(): slot_penyimpanan_1(1), slot_penyimpanan_2(2){
            cout << "Objek dari kelas_koleksi dibuat\n";
        }
	    short ambil_data(short slot_penyimpanan){
            return slot_penyimpanan == 1 ? slot_penyimpanan_1.ambil_data() : slot_penyimpanan_2.ambil_data();
        }
	    void ganti_data(short slot_penyimpanan, short data_baru){
            if(slot_penyimpanan == 1) slot_penyimpanan_1.ganti_data(data_baru); else slot_penyimpanan_2.ganti_data(data_baru);
        }
};
int main(void){
	kelas_koleksi objek;
	
	for(short i = 1; i <= 2; i++)
		objek.ganti_data(i, i + 1);
	for(short i = 1; i <= 2; i++)
		cout << "Element #" << i << " = " << objek.ambil_data(i) << endl;
	return 0;
}