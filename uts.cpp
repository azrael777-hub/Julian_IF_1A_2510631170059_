#include <iostream>
using namespace std;
int main() {
    int golongan, penjualan;
    double gajiPokok, bonus;
    int totalGaji;

    cout << "=== PROGRAM HITUNG GAJI PT MANTULITA ===" << endl;
    cout << "Masukkan golongan pegawai (1-3): ";
    cin >> golongan;

    cout << "Masukkan jumlah penjualan (pcs): ";
    cin >> penjualan;

   
    if (golongan == 1) {
        gajiPokok =3000000 ; 
        bonus = 100000;     
    } else if (golongan == 2) {
        gajiPokok = 3500000; 
        bonus = 200000; 
    } else if (golongan == 3) {
        gajiPokok = 4000000; 
        bonus = 250000;     
    } else {
        cout << "Golongan tidak valid!" << endl;
        return 0;
    }

    // Hitung total gaji
    if (penjualan >= 30) {
        totalGaji = gajiPokok + bonus;
    } else {
        totalGaji = gajiPokok;
    }

    cout << "\n=== HASIL PERHITUNGAN GAJI ===" << endl;
    cout << "Golongan Pegawai : " << golongan << endl;
    cout << "Gaji Pokok       : Rp " << gajiPokok << endl;
    cout << "Jumlah Penjualan : " << penjualan << " pcs" << endl;
    if (penjualan >= 30) {
        cout << "Bonus            : Rp " << bonus << endl;
    } else {
        cout << "Bonus            : Rp 0 (Target tidak tercapai)" << endl;
    }
    cout << "Total Gaji       : Rp " << totalGaji << endl;

    return 0;
}
