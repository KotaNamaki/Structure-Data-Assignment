#include <iostream>
using namespace std;

struct Siswa {
    // Konstruktor
    Siswa(string nama, int umur) : nama(nama), umur(umur) {}

    // Fungsi anggota
    void tampilkanInfo() {
        cout << "Nama: " << nama << ", Umur: " << umur << endl;
    }

    string nama;
    int umur;
};

int main() {
    Siswa siswa1("Budi", 16);
    siswa1.tampilkanInfo();

    return 0;
}