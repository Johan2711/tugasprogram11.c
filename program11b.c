#include <iostream>
#include <string>
using namespace std;

struct Menu {
    string nama;
    int harga;
};

struct Pegawai {
    string nama;
    string jabatan;
};

int main() {
    Menu makanan[5] = {
        {"Nasi Goreng", 25000},
        {"Mie Goreng", 23000},
        {"Ayam Bakar", 30000},
        {"Sate Ayam", 28000},
        {"Soto Ayam", 22000}
    };

    Menu minuman[3] = {
        {"Es Teh", 5000},
        {"Es Jeruk", 8000},
        {"Kopi", 10000}
    };

    Pegawai pegawai[2] = {
        {"Budi", "Koki"},
        {"Sinta", "Kasir"}
    };

    int pilihan, nomor;

    do {
        cout << "\n=== APLIKASI RESTORAN ===" << endl;
        cout << "1. Tampilkan menu" << endl;
        cout << "2. Tampilkan pegawai" << endl;
        cout << "3. Ubah menu makanan" << endl;
        cout << "4. Ubah menu minuman" << endl;
        cout << "5. Ubah data pegawai" << endl;
        cout << "6. Keluar" << endl;
        cout << "Pilihan: ";
        cin >> pilihan;

        if (pilihan == 1) {
            cout << "\n-- Makanan --" << endl;
            for (int i = 0; i < 5; i++) {
                cout << i + 1 << ". " << makanan[i].nama << " - Rp " << makanan[i].harga << endl;
            }
            cout << "-- Minuman --" << endl;
            for (int i = 0; i < 3; i++) {
                cout << i + 1 << ". " << minuman[i].nama << " - Rp " << minuman[i].harga << endl;
            }
        } else if (pilihan == 2) {
            cout << "\n-- Pegawai --" << endl;
            for (int i = 0; i < 2; i++) {
                cout << i + 1 << ". " << pegawai[i].nama << " - " << pegawai[i].jabatan << endl;
            }
        } else if (pilihan == 3) {
            cout << "Nomor makanan (1-5): ";
            cin >> nomor;
            cin.ignore();
            cout << "Nama baru : ";
            getline(cin, makanan[nomor - 1].nama);
            cout << "Harga baru: ";
            cin >> makanan[nomor - 1].harga;
            cout << "Data makanan berhasil diubah." << endl;
        } else if (pilihan == 4) {
            cout << "Nomor minuman (1-3): ";
            cin >> nomor;
            cin.ignore();
            cout << "Nama baru : ";
            getline(cin, minuman[nomor - 1].nama);
            cout << "Harga baru: ";
            cin >> minuman[nomor - 1].harga;
            cout << "Data minuman berhasil diubah." << endl;
        } else if (pilihan == 5) {
            cout << "Nomor pegawai (1-2): ";
            cin >> nomor;
            cin.ignore();
            cout << "Nama baru   : ";
            getline(cin, pegawai[nomor - 1].nama);
            cout << "Jabatan baru: ";
            getline(cin, pegawai[nomor - 1].jabatan);
            cout << "Data pegawai berhasil diubah." << endl;
        }

    } while (pilihan != 6);

    cout << "Program selesai." << endl;
    return 0;
}