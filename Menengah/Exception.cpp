#include <iostream>
/*Gunakan #include <exception> untuk menangani error pada saat runtime dan kompilasi*/
/*exception adalah kelas sehingga dapat diwariskan ke kelas lainnya*/
#include <exception>
using namespace std;
/*Dalam bahasa pemrograman C++ pembagian dengan nol tidak menghasilkan exception*/
float pembagian(float a, float b) {
	if(b == 0.0)
		throw string("Pembagian dengan Angka Nol Tidak Valid!");
	return a/b;
}
int main(void) {
	float a, b;
	while(cin >> a){
		try{
			cin >> b;
			cout << pembagian(a, b) << endl;
		/*Mengambil pesan error dari throw*/
		}catch (string &pesan_error){
			cout << "Look what you did, you bad user!" << endl;
			cout << pesan_error << endl;
		}
	}
	return 0;
}