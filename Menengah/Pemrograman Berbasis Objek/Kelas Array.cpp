#include <iostream>
using namespace std;
class kelas_array{
private:
	short *pointer_array;
	unsigned short ukuran;
public:
	kelas_array(unsigned short jumlah_elemen_array){ 
		this -> ukuran = jumlah_elemen_array;
        this -> pointer_array = new short[ukuran];
		cout << "Array dengan jumlah elemen " << ukuran << " dibuat" << endl; 
	}
	~kelas_array(){ 
		delete [] pointer_array; 
		cout << "Array dengan jumlah elemen " << ukuran << " dihapus" << endl; 
	
	}
	short ambil_elemen_array(unsigned short indeks){
        return pointer_array[indeks];
    }
	void sisipkan_array(unsigned short indeks_array, short nilai_array){
        this -> pointer_array[indeks_array] = nilai_array;
    }
};
int main(){
    unsigned short input;
    cout << "Masukkan jumlah elemen array : "; cin >> input;
	kelas_array *pointer_objek = new kelas_array(input);
    for(short indeks = 0, nilai_array; indeks < input; indeks++){
        cout << "Masukkan nilai array [" << indeks << "] : "; cin >> nilai_array;
		pointer_objek -> sisipkan_array(indeks, nilai_array);
    }
    for(short indeks = 0; indeks < input; indeks++){
	    cout << "Nilai array[" << indeks << "] : " << pointer_objek -> ambil_elemen_array(indeks) << endl;
    }
    delete pointer_objek;
	return 0;
}