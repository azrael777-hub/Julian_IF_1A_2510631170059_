#include <iostream>
#include <string>
using namespace std;

int main() {
    string nama, asal, hobi, universitas, jurusan;

    cout << "=========== INPUT BIODATA ============" << endl;
    cout << "Masukkan Nama\t\t: ";
    getline(cin, nama);
    cout << "Masukkan Asal\t\t: ";
    getline(cin, asal);
    cout << "Masukkan Hobi\t\t: ";
    getline(cin, hobi);
    cout << "Masukkan Universitas\t: ";
    getline(cin, universitas);
    cout << "Masukkan Jurusan\t: ";
    getline(cin, jurusan);

    cout << "\n=========== BIODATA ANDA ============" << endl;
    cout << "Nama\t\t: " << nama << endl;
    cout << "Asal\t\t: " << asal << endl;
    cout << "Hobi\t\t: " << hobi << endl;
    cout << "Universitas\t: " << universitas << endl;
    cout << "Jurusan\t\t: " << jurusan << endl;

    return 0;
}
