# <h1 align="center">Laporan Praktikum Modul-1 Tipe Data<h1>
<p align="center">Andhika Haqqa Syahrony</p>

## Dasar Teori
Dalam pemrograman, terdapat tiga jenis utama tipe data yang digunakan untuk menyimpan informasi, yaitu tipe data primitif, koleksi, dan abstrak. Berikut adalah penjelasan dasar tentang masing-masing tipe data tersebut:

Tipe Data Primitif: Tipe data primitif adalah tipe data yang paling dasar dan sudah tersedia dalam bahasa pemrograman. Contohnya adalah int, float, char, boolean, dll. Tipe data ini memiliki ukuran dan ruang penyimpanan yang telah ditentukan sejak awal. Misalnya, dalam bahasa pemrograman Java, int memiliki ukuran 4 byte dan boolean memiliki ukuran 1 byte. Tipe data primitif digunakan untuk menyimpan nilai tunggal dan tidak dapat diubah setelah dideklarasikan.

Tipe Data Koleksi: Tipe data koleksi adalah tipe data yang digunakan untuk menyimpan kumpulan data. Contoh dari tipe data koleksi adalah array, list, dan set. Tipe data koleksi memungkinkan penyimpanan data dalam jumlah yang dapat berubah dan dapat menyimpan tipe data primitif atau objek. Misalnya, dalam bahasa pemrograman Java, array dapat digunakan untuk menyimpan kumpulan nilai tunggal dengan tipe yang sama.

Tipe Data Abstrak: Tipe data abstrak adalah tipe data yang tidak dapat diinstansiasi secara langsung dan biasanya digunakan sebagai kelas dasar atau interface. Tipe data abstrak menyediakan definisi umum yang dapat diimplementasikan oleh kelas lain. Contoh dari tipe data abstrak adalah kelas abstrak dan interface. Dalam bahasa pemrograman Java, kelas abstrak memungkinkan definisi metode abstrak (metode tanpa implementasi) yang harus diimplementasikan oleh kelas turunannya.

## Guided

### 1. Tipe Data Primitive

```C++
//Main program dependencies
#include <iostream>
#include <string>
using namespace std;
//Allows the user to restart the program
extern int main();
void restart()
{
    cout << "Continue? (y/n) ";
    char input;
    cin >> input;
    if (input == '\n' || input == 'y')
    {
        system("cls");
        main();
    }
}
int main()
{
    char op;
    float num1, num2;
    //Allows the user to enter operator i.e (+, -,*,/)
    cout<<"Masukan Operator: ";cin>>op;
    //Allows the user to enter Numbers for the operator to calculate
    cout<<"Masukan num1: ";cin>>num1;
    cout<<"Masukan num2: ";cin>>num2;
    //Switch Operator
    switch(op){
        case '+':
        //if user enter +
            cout <<"Hasil dari operator (+) : "<< num1 + num2<<endl;
            break;
        //if user enter -
        case '-':
            cout <<"Hasil dari operator (-) : "<< num1 - num2<<endl;
            break;
        //if user enter *
        case '*':
            cout <<"Hasil dari operator (*) : "<< num1 * num2<<endl;
            break;
        // If user enter /
        case '/':
            cout <<"Hasil dari operator (/) : "<< num1 / num2<<endl;
            break;
        // If the operator is other than +, -, * or /,
        // error message will display
        default:
            cout << "Error! operator is not correct";
    }//Switch Statement Ends
    //Calling the restart Function
    restart();
    return 0;
}
```
### Output:
![image](https://github.com/KotaNamaki/Structure-Data-Assignment/assets/125143781/4d35296c-2904-4876-95aa-1e42b3a73b73)

### Penjelasan:
Kode C++ ini mengimplementasikan program kalkulator sederhana. Ini memungkinkan pengguna untuk melakukan operasi aritmatika dasar seperti penjumlahan, pengurangan, perkalian, dan pembagian.


### 2. Tipe Data Abstract
```C++
// Struct
struct Mahasiswa
{
    const char *name;
    const char *address;
    int age;
};
int main()
{
    // menggunakan struct
    struct Mahasiswa mhs1, mhs2;
    // mengisi nilai ke struct
    mhs1.name = "Dian";
    mhs1.address = "Mataram";
    mhs1.age = 22;
    mhs2.name = "Bambang";
    mhs2.address = "Surabaya";
    mhs2.age = 23;
    // mencetak isi struct
    printf("## Mahasiswa 1 ##\n");
    printf("Nama: %s\n", mhs1.name);
    printf("Alamat: %s\n", mhs1.address);
    printf("Umur: %d\n", mhs1.age);
    printf("## Mahasiswa 2 ##\n");
    printf("Nama: %s\n", mhs2.name);
    printf("Alamat: %s\n", mhs2.address);
    printf("Umur: %d\n", mhs2.age);
    return 0;
}
```
### Output:
![image](https://github.com/KotaNamaki/Structure-Data-Assignment/assets/125143781/b36b09fc-2c9a-4ab2-b14f-eb88ee20d93b)

### Penjelasan:
Program C ini mendefinisikan sebuah struktur bernama Mahasiswa untuk menyimpan informasi tentang siswa. Strukturnya mencakup tiga anggota: nama (karakter penunjuk untuk menyimpan nama siswa), alamat (karakter penunjuk lain untuk alamat), dan usia (bilangan bulat untuk mewakili usia siswa). Fungsi main() kemudian membuat dua instance struktur Mahasiswa, mhs1 dan mhs2, dan memberikan nilai kepada anggotanya untuk dua mahasiswa berbeda bernama "Dian" dan "Bambang" dengan alamat dan usia masing-masing. Terakhir, ia mengulangi data masing-masing siswa dan mencetak informasi mereka menggunakan pernyataan printf, memberikan representasi yang jelas dan terorganisir dari rincian siswa yang disimpan dalam struktur.

### 3. Tipe Data Koleksi
```C++
#include <iostream>
using namespace std;
int main()
{
    // deklarasi dan inisialisasi array
    int nilai[5];
    nilai[0] = 23;
    nilai[1] = 50;
    nilai[2] = 34;
    nilai[3] = 78;
    nilai[4] = 90;
    // mencetak array
    cout << "Isi array pertama :" << nilai[0] << endl;
    cout << "Isi array kedua :" << nilai[1] << endl;
    cout << "Isi array ketiga :" << nilai[2] << endl;
    cout << "Isi array keempat :" << nilai[3] << endl;
    cout << "Isi array kelima :" << nilai[4] << endl;
    return 0;
}
```
### Output:

### Penjelasan:
Program C++ ini mendeklarasikan dan menginisialisasi array bilangan bulat bernama nilai dengan lima elemen. Itu kemudian memberikan nilai tertentu ke setiap elemen array. Terakhir, ia melakukan iterasi melalui array dan mencetak nilai setiap elemen menggunakan objek cout.

## Unguided 

### 1. Buatlah program menggunakan tipe data primitif minimal dua fungsi dan bebas. Menampilkan program, jelaskan program tersebut dan ambil kesimpulan darimateri tipe data primitif!

```C++
#include <iostream>
using namespace std;
// Fungsi untuk menjumlahkan dua bilangan
int tambah(int a, int b) {
    return a + b;
}

// Fungsi untuk menampilkan hasil penjumlahan
void tampilkanHasil(int hasil) {
    cout << "Hasil penjumlahan: " << hasil << std::endl;
}

int main() {
    int angka1 = 5;
    int angka2 = 10;
    int hasil = tambah(angka1, angka2);
    tampilkanHasil(hasil);

    return 0;
}
```
### Output:
![image](https://github.com/KotaNamaki/Structure-Data-Assignment/assets/125143781/5ff9eb96-5cb5-4c0f-8ca0-09985b1a216b)

### Penjelasan: 
Fungsi (tambah): Fungsi ini menerima dua parameter bertipe (int) dan mengembalikan hasil penjumlahan kedua parameter tersebut. Tipe data (int) digunakan untuk merepresentasikan bilangan bulat.

Fungsi tampilkanHasil: Fungsi ini menerima satu parameter bertipe int dan menampilkan hasil penjumlahan ke layar menggunakan (cout).

Fungsi main: Ini adalah titik masuk program. Di sini, kita mendefinisikan dua variabel angka1 dan angka2 bertipe int, menjumlahkannya menggunakan fungsi tambah, dan menampilkan hasilnya menggunakan fungsi (tampilkanHasil).

### 2. Jelaskan fungsi dari class dan struct secara detail dan berikan contoh programnya
#### Class
```C++
#include <iostream>
using namespace std;
class Mobil {
public:
    // Konstruktor
    Mobil(int tahun, string merk) : tahun(tahun), merk(merk) {}

    // Fungsi anggota
    void tampilkanInfo() {
        cout << "Mobil: " << merk << ", Tahun: " << tahun <<endl;
    }

private:
    int tahun;
    string merk;
};

int main() {
    Mobil mobil1(2020, "Toyota");
    mobil1.tampilkanInfo();

    return 0;
}
```
#### Output Class:
![image](https://github.com/KotaNamaki/Structure-Data-Assignment/assets/125143781/287066f7-c46f-4957-adf6-b1f4f5672006)

#### Penjelasan Class:
Class adalah tipe data yang digunakan untuk mengkapsulasi data dan fungsi yang berhubungan. Data dan fungsi ini dikenal sebagai anggota dari class. Class memungkinkan penggunaan konsep pewarisan, yang memungkinkan satu class untuk menurunkan properti dan perilaku dari class lain.

#### Struct
```C++
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
```
#### Output Struct:
![image](https://github.com/KotaNamaki/Structure-Data-Assignment/assets/125143781/d28abf99-fbc4-49d5-b683-ae1ad54d2d47)
#### Penjelasan Struct:
Struct (struktur) juga digunakan untuk mengkapsulasi data dan fungsi. Dalam C++, struct mirip dengan class, dengan perbedaan utama adalah bahwa anggota struct secara default adalah public, sedangkan anggota class adalah private.

### 3. Buat dan jelaskan program menggunakan fungsi map dan jelaskan perbedaan dari array dengan map.
Perbedaan Array dan Map

Array adalah koleksi elemen yang sama tipe data. Indeks array adalah integer dimulai dari 0. Array dapat berupa 1D, 2D, atau multidimensional. Ukuran array harus ditentukan saat deklarasi dan tidak dapat diubah. Array mengakses elemen melalui indeks 1.

Map adalah struktur yang dihash yang terdiri dari pasangan kunci dan nilai. Kunci map bisa berupa tipe data apa pun. Map tidak mempertahankan urutan elemen yang dimasukkan. Map dapat berupa multimap, Unordered Multimap, Unordered map, dll. Ukuran map adalah dinamis dan dapat diubah 1.

Contoh Program yang Menggunakan Fungsi Map:
```C++
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
```
### Output:
![image](https://github.com/KotaNamaki/Structure-Data-Assignment/assets/125143781/f0b4870e-6eb8-4cf4-ac01-85a7a1a385d6)
### Penjelasan:
Program ini menunjukkan penggunaan array of maps di C++. Setiap elemen dalam array adalah map sendiri, di mana kunci map adalah string dan nilai map adalah boolean. Program ini mendemonstrasikan bagaimana kita bisa menyimpan dan mengakses data dalam struktur yang lebih kompleks menggunakan map, yang memungkinkan kita untuk menyimpan dan mengakses data dengan cara yang lebih fleksibel dan efisien dibandingkan dengan array, terutama ketika kita ingin mengakses data berdasarkan kunci yang unik.

Kesimpulannya, perbedaan utama antara array dan map adalah cara mereka menyimpan dan mengakses data. Array menggunakan indeks integer untuk akses data, sedangkan map menggunakan pasangan kunci-nilai yang memungkinkan akses data berdasarkan kunci yang unik. Map juga memberikan fleksibilitas dalam hal tipe data kunci dan nilai, serta memiliki ukuran yang dinamis, yang membedakannya dari array.


## Kesimpulan 
Tipe data sangat penting dalam pemrograman karena:

Mendefinisikan jenis data yang dapat disimpan variabel: Ini mencegah Anda memasukkan data yang tidak kompatibel ke dalam variabel, seperti mencoba menyimpan teks ke dalam variabel yang seharusnya menyimpan angka. Ini membantu menghindari kesalahan dan memastikan kode Anda berfungsi dengan benar.

Memastikan operasi yang dilakukan pada data valid: Berbeda tipe data memiliki operasi yang berbeda pula yang dapat dilakukan padanya. Misalnya, Anda dapat menambahkan dua angka, tetapi Anda tidak dapat menambahkan angka dan teks. Ini membantu mencegah operasi yang tidak bermakna dan memastikan keakuratan perhitungan.
Mempertahankan integritas data: Dengan menggunakan tipe data yang tepat, Anda dapat memastikan bahwa data Anda tidak rusak atau diubah secara tidak terduga. Ini penting untuk menjaga konsistensi dan keandalan program Anda.

Membantu optimasi memori: Kompiler dapat mengalokasikan memori secara efisien berdasarkan tipe data yang digunakan. Ini karena ia mengetahui jumlah memori yang dibutuhkan untuk 
menyimpan setiap jenis data. Memori yang dialokasikan secara efisien dapat berkontribusi pada kinerja program yang lebih baik.

Meningkatkan keterbacaan dan maintainability kode: Menggunakan tipe data yang tepat membuat kode Anda lebih mudah dibaca dan dipahami. Ini karena tipe data dapat memberi tahu programmer apa jenis data yang diharapkan untuk setiap variabel dan apa yang dapat dilakukan dengannya. Ini memudahkan programmer lain untuk memahami dan memodifikasi kode Anda di kemudian hari.

Secara keseluruhan, tipe data adalah konsep dasar namun fundamental dalam pemrograman. Memahami dan menggunakan tipe data dengan benar sangat penting untuk menulis kode yang andal, efisien, dan mudah dipahami.

## Daftar Pustaka
[1]. Perbedaan dari Array dan Map. diakses dari  https://www.geeksforgeeks.org/difference-between-array-and-map/
[2]. Karumanchi, N. (2016). Data Structures and algorithms made easy: Concepts, problems, Interview Questions. CareerMonk Publications.
[3]. TylerMSFT. (n.d.). Collections (C++/CX). diakses dari https://learn.microsoft.com/en-us/cpp/cppcx/collections-c-cx?view=msvc-170
[4]. Primitive Data type in C++. diakses dari https://geekonpeak.com/programming/cpp/primitive-data-types-cpp/
[5]. Struct dan Class - Ramadhani Akbar. diakses dari https://boltremjaya.wordpress.com/2013/09/16/struct-dan-class/
