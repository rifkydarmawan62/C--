#include <iostream>

using namespace std;


int main(void){
    short *pointer_1, *pointer_2, array[3] = {56, 78, 61};
    pointer_1 = &array[0];
    pointer_2 = array;
    cout << "\nNilai *pointer_1 = " << *pointer_1 << " setelah direferensikan dengan &array[0]\n";
    cout << "Nilai *pointer_2 = " << *pointer_2 << " setelah direferensikan dengan array\n";
    pointer_2 = pointer_2 + 1;
    cout << "Nilai *pointer_2 = " << *pointer_2 << " setelah pointer_2 + 1\n";
    return 0;
}