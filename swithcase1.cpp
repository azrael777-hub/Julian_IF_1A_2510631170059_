#include <iostream>
#include <string>
using namespace std;

int main() {
    string namaObat;
    int stok = 0;
    int pilihan;
    int jumlah;
    double harga;

    cout << "Masukkan nama obat : ";
    getline(cin, namaObat);

    cout << "Masukkan harga per obat : ";
    cin >> harga;

    do {
        cout << "\n=== LIGHT PHARMACY ===\n";
        cout << "1. Menambah total stok obat\n";
        cout << "2. Mengurangi total stok obat (Transaksi Penjualan)\n";
        cout << "3. Menampilkan total stok obat\n";
        cout << "4. Keluar\n";
        cout << "Pilih menu: ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                cout << "Masukkan jumlah obat yang ingin ditambah: ";
                cin >> jumlah;
                stok += jumlah;
                cout << "✅ Stok berhasil ditambah!\n";
                break;

            case 2:
                cout << "Masukkan jumlah obat yang ingin dikurangi: ";
                cin >> jumlah;
                if (jumlah <= stok) {
                    stok -= jumlah;
                    cout << " stok berhasil dikurangi!\n";

                    double totalHarga = jumlah * harga;
                    double diskon = 0;

                    if (totalHarga >= 100000) {
                        diskon = 0.10 * totalHarga;
                    } else if (totalHarga >= 50000) {
                        diskon = 0.05 * totalHarga;
                    }

                    double hargaAkhir = totalHarga - diskon;

                    cout << "\n---- Struk Transaksi ----" << endl;
                    cout << "Nama Obat   : " << namaObat << endl;
                    cout << "Jumlah      : " << jumlah << endl;
                    cout << "Harga/Obat  : " << harga << endl;
                    cout << "Total Harga : " << totalHarga << endl;
                    cout << "Diskon      : " << diskon << endl;
                    cout << "Harga Akhir : " << hargaAkhir << endl;
                } else {
                    cout << " Stok tidak cukup!\n";
                }
                break;

            case 3:
                cout << " Total stok obat saat ini: " << stok << endl;
                break;

            case 4:
                cout << " Keluar dari sistem..." << endl;
                break;

            default:
                cout << " Pilihan tidak valid! Silakan pilih 1-4.\n";
                break;
        }

    } while (pilihan != 4);

    return 0;
}
