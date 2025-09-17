#include <iostream>
#include <string>
using namespace std;

int main() {
    string namaObat;
    int jumlah;
    double harga;

    cout << "Masukkan nama obat : ";
    getline(cin, namaObat);

    cout << "Masukkan jumlah obat: ";
    cin >> jumlah;

    cout << "Masukkan harga per obat: ";
    cin >> harga;

    double totalHarga = jumlah * harga;
    double diskon = 0;

    if (totalHarga >= 100000) {
        diskon = 0.10 * totalHarga;   // diskon 10%
    } else if (totalHarga >= 50000) {
        diskon = 0.05 * totalHarga;   // diskon 5%
    }

    double hargaAkhir = totalHarga - diskon;

    cout << endl;
    cout << "---- Light Pharmacy ----" << endl;
    cout << "Nama Obat   : " << namaObat << endl;
    cout << "Jumlah      : " << jumlah << endl;
    cout << "Harga       : " << harga << endl;
    cout << "Total Harga : " << totalHarga << endl;
    cout << "Diskon      : " << diskon << endl;
    cout << "Harga Akhir : " << hargaAkhir << endl;

    return 0;
}
