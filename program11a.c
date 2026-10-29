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
    Menu m;
    m.nama = "Nasi Goreng";
    m.harga = 25000;

    Pegawai p;
    p.nama = "Budi";
    p.jabatan = "Koki";

    cout << "Menu    : " << m.nama << " - Rp " << m.harga << endl;
    cout << "Pegawai : " << p.nama << " - " << p.jabatan << endl;

    return 0;
}