#include <iostream>

using namespace std;

short global_variabel = 1;

short fungsi_tanpa_inline(short parameter){
    return parameter * 2;
}
/*Fungsi inline dapat digunakan untuk mengurangi overhead pada fungsi yang sering dipanggil*/
inline short fungsi_dengan_inline(short parameter){
  return parameter * 2;
}

int main(void){
    global_variabel = fungsi_tanpa_inline (global_variabel);
    global_variabel = fungsi_tanpa_inline (global_variabel);
    global_variabel = fungsi_tanpa_inline (global_variabel);
    cout << global_variabel << endl;
    global_variabel = fungsi_dengan_inline (global_variabel);
    global_variabel = fungsi_dengan_inline (global_variabel);
    global_variabel = fungsi_dengan_inline (global_variabel);
    cout << global_variabel << endl;
    return 0;
}