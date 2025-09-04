#include <iostream>
using namespace std;

int main() {
    string nama;
    int usia;

    cout << "Masukkan nama Anda: ";
    getline(cin, nama);  // Mengambil input nama lengkap

    cout << "Masukkan usia Anda: ";
    cin >> usia;         // Mengambil input usia

    cout << "Halo " << nama << ", usia Anda " << usia << " tahun." << endl;

    return 0;
}
