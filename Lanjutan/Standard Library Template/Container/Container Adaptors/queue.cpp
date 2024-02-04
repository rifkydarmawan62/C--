#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main(){
    queue <short, vector <short>> queue_vector;
    queue_vector.push(5);
    cout << "Ukuran queue_vectot : " << queue_vector.size() << endl;
    return 0;
}