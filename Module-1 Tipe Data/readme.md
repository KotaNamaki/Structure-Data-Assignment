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

### 2. Tipe Data Abstract
