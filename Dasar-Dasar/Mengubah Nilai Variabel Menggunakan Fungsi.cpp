#include <iostream>

using namespace std;

short variabel_global = 9;

void ubah_nilai_variabel(short nilai_variabel_sebelum_diubah, short nilai_variabel_yang_akan_diubah_ke){
    nilai_variabel_sebelum_diubah = nilai_variabel_yang_akan_diubah_ke;
}
void ubah_nilai_variabel_dengan_alamat_memori(short &nilai_variabel_sebelum_diubah, short nilai_variabel_yang_akan_diubah_ke){
    nilai_variabel_sebelum_diubah = nilai_variabel_yang_akan_diubah_ke;
}
void ubah_nilai_variabel_dengan_pointer(short *nilai_variabel_sebelum_diubah, short nilai_variabel_yang_akan_diubah_ke){
    *nilai_variabel_sebelum_diubah = nilai_variabel_yang_akan_diubah_ke;
}
int main(void){
    ubah_nilai_variabel(variabel_global, 3);
    cout << variabel_global << endl;
    ubah_nilai_variabel_dengan_alamat_memori(variabel_global, 3);
    cout << variabel_global << endl;
    ubah_nilai_variabel_dengan_pointer(&variabel_global, 7);
    cout << variabel_global << endl;
    return 0;
}