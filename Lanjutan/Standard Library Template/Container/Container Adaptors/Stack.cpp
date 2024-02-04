#include <iostream>
#include <deque>
#include <stack>
using namespace std;

int main(){
    /*Deklarasi*/
    deque <short> container_deque = {6, 1, 2, 5, 9, 1};
    stack <short> tumpukan_1(container_deque);
    cout << "tumpukan_1.empty() : " << tumpukan_1.empty() << endl;
    cout << "Ukuran tumpukan_1 : " << tumpukan_1.size() << endl;
    cout << "tumpukan_1.top() : " << tumpukan_1.top() << endl;
    return 0;
}