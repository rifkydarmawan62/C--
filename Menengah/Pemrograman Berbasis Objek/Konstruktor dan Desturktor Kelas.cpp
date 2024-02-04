#include <iostream>

using namespace std;

class kelas_baru{
    public:
	    short *pointer;
        /*Konstruktor*/
	    kelas_baru(short nilai){ 
		    pointer = new short(nilai);
    		cout << "Allocation (" << *pointer << ") done." << endl; 
	    }
        /*Destruktor*/
        /*Parameter destruktor harus kosong*/
	    ~kelas_baru(void){
		    delete pointer;
    		cout << "Deletion done." << endl;
	    }
};
void buat_kebocoran_memori(void) {
	kelas_baru object(1000);
}

int main(void) {
	buat_kebocoran_memori();
	return 0;
}