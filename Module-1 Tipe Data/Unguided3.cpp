#include <bits/stdc++.h>
using namespace std;

// Fungsi untuk mencetak elemen map pada indeks tertentu
void print(map<string, bool>& myMap, int index) {
    cout << "Elemen map yang disimpan pada indeks " << index << ": \n";
    cout << "Kunci\t\tNilai\n";
    for (auto pr : myMap) {
        cout << pr.first << "\t\t" << pr.second << '\n';
    }
    cout << '\n';
}

// Fungsi untuk mengiterasi semua elemen dalam array map
void print(map<string, bool>* myContainer, int n) {
    for (int i = 0; i < n; i++) {
        print(myContainer[i], i);
    }
}

int main() {
    // Mendeklarasikan array of maps
    // Kunci dalam map adalah tipe string
    // Nilai adalah tipe bool
    map<string, bool> myContainer[3];

    // Menyimpan nilai ke map yang disimpan pada indeks 0
    myContainer[0]["Code"] = true;
    myContainer[0]["HTML"] = false;
    myContainer[0]["Java"] = true;
    myContainer[0]["Solo"] = false;

    // Menyimpan nilai ke map yang disimpan pada indeks 1
    myContainer[1]["PHP"] = true;
    myContainer[1]["CSS"] = false;
    myContainer[1]["C++"] = true;
    myContainer[1]["Lab"] = false;

    // Menyimpan nilai ke map yang disimpan pada indeks 2
    myContainer[2]["Swift"] = true;
    myContainer[2]["Cobol"] = false;
    myContainer[2]["Fizzy"] = true;
    myContainer[2]["Pizza"] = false;

    // Memanggil fungsi print untuk mencetak elemen myContainer
    print(myContainer, 3);

    return 0;
}
