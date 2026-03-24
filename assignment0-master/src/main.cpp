#include <iostream>

using namespace std;

int main() {
    string nama;

    cout << "Masukkan Nama Anda: ";
    getline(cin, nama);
    cout << "Halo " << nama << endl;

    return 0;
}