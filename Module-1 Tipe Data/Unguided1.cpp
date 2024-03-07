#include <iostream>

// Fungsi untuk menjumlahkan dua bilangan
int tambah(int a, int b) {
    return a + b;
}

// Fungsi untuk menampilkan hasil penjumlahan
void tampilkanHasil(int hasil) {
    std::cout << "Hasil penjumlahan: " << hasil << std::endl;
}

int main() {
    int angka1 = 5;
    int angka2 = 10;
    int hasil = tambah(angka1, angka2);
    tampilkanHasil(hasil);

    return 0;
}