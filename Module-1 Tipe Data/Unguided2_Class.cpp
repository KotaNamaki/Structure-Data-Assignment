#include <iostream>

class Mobil {
public:
    // Konstruktor
    Mobil(int tahun, std::string merk) : tahun(tahun), merk(merk) {}

    // Fungsi anggota
    void tampilkanInfo() {
        std::cout << "Mobil: " << merk << ", Tahun: " << tahun << std::endl;
    }

private:
    int tahun;
    std::string merk;
};

int main() {
    Mobil mobil1(2020, "Toyota");
    mobil1.tampilkanInfo();

    return 0;
}