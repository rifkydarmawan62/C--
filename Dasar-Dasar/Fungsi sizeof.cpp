#include <iostream>

using namespace std;

int main(void){
    cout << sizeof(bool) << " byte bool\n";
    cout << sizeof(char) << " byte char\n";
    cout << sizeof(short int) << " byte short\n";
    cout << sizeof(int) << " byte int\n";
    cout << sizeof(long int) << " byte long\n";
    cout << sizeof(float) << " byte float\n";
    cout << sizeof(double) << " byte double\n";
    cout << sizeof(int *) << " byte pointer";
    return 0;
}