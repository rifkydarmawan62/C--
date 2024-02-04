#include <iostream>
#include <vector>
#include <deque>
#include <list>
#include <iterator>
using namespace std;

int main(){
    short indeks = 0;
    /*Setiap container terdapat 4 tipe iterator*/
    /*iterator : tipe iterator baca dan tulis*/
    /*const_iterator : tipe iterator hanya dapat dibaca*/
    /*reverse_iterator : tipe iterator terbalik (iterate dari akhir sampai awal) baca dan tulis*/
    /*const_reverse_iterator : tipe iterator terbalik (iterate dari akhir sampai awal) hanya dapat dibaca*/

    vector <short> container_vector(10);

    vector <short> :: iterator iterator_vector;
    for(iterator_vector = container_vector.begin(); iterator_vector != container_vector.end(); iterator_vector++, indeks++){
        *iterator_vector = indeks;
    } indeks = 0;
    cout << "iterator container_vector : ";
    for(iterator_vector = container_vector.begin(); iterator_vector != container_vector.end(); iterator_vector++){
        cout << *iterator_vector << " ";
    } cout << endl;
    vector <short> :: const_iterator iterator_vector_konstan;
    vector <short> :: reverse_iterator iterator_vector_terbalik;
    cout << "reverse_iterator container_vector : ";
    for(iterator_vector_terbalik = container_vector.rbegin(); iterator_vector_terbalik != container_vector.rend(); iterator_vector_terbalik++){
        cout << *iterator_vector_terbalik << " ";
    } cout << endl;
    vector <short> :: const_reverse_iterator iterator_vector_konstan_terbalik;

    deque <short> container_deque(10);

    deque <short> :: iterator iterator_deque;
    for(iterator_deque = container_deque.begin(); iterator_deque != container_deque.end(); iterator_deque++, indeks++){
        *iterator_deque = indeks;
    } indeks = 0;
    cout << "iterator container_deque : ";
    for(iterator_deque = container_deque.begin(); iterator_deque != container_deque.end(); iterator_deque++){
        cout << *iterator_deque << " ";
    } cout << endl;
    deque <short> :: const_iterator iterator_deque_konstan;
    deque <short> :: reverse_iterator iterator_deque_terbalik;
    cout << "reverse_iterator container_deque : ";
    for(iterator_deque_terbalik = container_deque.rbegin(); iterator_deque_terbalik != container_deque.rend(); iterator_deque_terbalik++){
        cout << *iterator_deque_terbalik << " ";
    } cout << endl;
    deque <short> :: const_reverse_iterator iterator_deque_konstan_terbalik;

    list <short> container_list(10);

    list <short> :: iterator iterator_list;
    for(iterator_list = container_list.begin(); iterator_list != container_list.end(); iterator_list++, indeks++){
        *iterator_list = indeks;
    } indeks = 0;
    cout << "iterator container_list : ";
    for(iterator_list = container_list.begin(); iterator_list != container_list.end(); iterator_list++){
        cout << *iterator_list << " ";
    } cout << endl;
    list <short> :: const_iterator iterator_list_konstan;
    list <short> :: reverse_iterator iterator_list_terbalik;
    cout << "reverse_iterator container_list : ";
    for(iterator_list_terbalik = container_list.rbegin(); iterator_list_terbalik != container_list.rend(); iterator_list_terbalik++){
        cout << *iterator_list_terbalik << " ";
    } cout << endl;
    list <short> :: const_reverse_iterator iterator_list_konstan_terbalik;
    /*Penggunaan Iterator*/
    /*Fungsi begin() mengembalikan elemen pertama dalam iterator container*/
    /*Fungsi end() mengembalikan elemen terakhir dalam iterator container*/
    /*Fungsi rbegin() mengembalikan mengembalikan elemen terakhir dalam iterator*/
    /*Fungsi rend() mengembalikan elemen pertama dalam itertor*/
    /*vector dan deque mengembalikan iterator acak*/
    /*list mengembalikan iterator bidirectional*/
    return 0;
}