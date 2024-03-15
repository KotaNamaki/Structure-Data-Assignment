# <h1 align="center"> Laporan Praktikum Modul-2 Array</h1>
<p align="center">Andhika Haqqa Syahrony</p>

## Dasar Teori
Array adalah struktur data yang digunakan untuk menyimpan kumpulan data dengan tipe data yang sama secara berurutan. Array memungkinkan Anda untuk mengakses data secara efisien dengan menggunakan indeks.
Jenis jenis array adalah berikut: 
#### 1) Array Satu Dimensi
Array 1 dimensi adalah array yang hanya memiliki satu baris. Ini adalah jenis array yang paling sederhana. Array dimensi tunggal adalah tipe variabel yang terdiri dari sekumpulan tipe data identik yang diurutkan ke dalam satu baris atau dimensi. Setiap elemen dalam array memiliki indeks atau nomor unik yang dapat digunakan.
untuk mengakses elemen yang disebutkan di atas. Indikator dimulai dari 0 dan bertambah seiring dengan berkurangnya jumlah elemen.
```C++
int nilai_ujian[5]; // Array dengan 5 elemen bertipe integer
```
Array nilai_ujian dapat menyimpan nilai ujian 5 siswa. Untuk mengakses nilai ujian siswa ke-3, Anda dapat menggunakan indeks 2:
```C++
int nilai = nilai_ujian[2];
```
#### 2) Array Dua dimensi
Array 2 dimensi adalah array yang memiliki baris dan kolom. Array ini dapat digunakan untuk menyimpan data yang terstruktur dalam bentuk tabel. Array dua dimensi adalah variable yang terdiri dari kumpulan array satu dimensi dengan tipe yang sama yang disusun dalam baris dan kolom. Dalam array dua dimensi, setiap elemen memiliki dua indeks, yaitu indeks baris dan indeks kolom. Indeks baris menunjukkan posisi elemen dalam baris, sementara indeks kolom menunjukkan posisi elemen dalam kolom.
```C++
int nilai_kelas[5][3]; // Array dengan 5 baris dan 3 kolom bertipe integer
```
Array nilai_kelas dapat menyimpan nilai ujian 5 siswa untuk 3 mata pelajaran. Untuk mengakses nilai ujian siswa ke-2 untuk mata pelajaran ke-3, Anda dapat menggunakan dua indeks:
```C++
int nilai = nilai_kelas[2][2];
```
#### 3) Array MultiDimensional 
Array multidimensional adalah array yang memiliki lebih dari dua dimensi. Array ini dapat digunakan untuk menyimpan data yang terstruktur dalam bentuk yang lebih kompleks. Meskipun array dengan dua dan satu dimensi serupa, array multidimensi memiliki kapasitas memori yang lebih besar. Array ini digunakan untuk menampilkan array dengan lebih dari dua dimensi, atau array yang memiliki lebih dari dua indeks, seperti array dengan tiga dimensi, array dengan dua dimensi, array dengan tiga dimensi, dan sebagainya.
```C++
int data_3d[4][3][2]; // Array dengan 4 baris, 3 kolom, dan 2 layer bertipe integer
```
Array data_3d dapat menyimpan data 3 dimensi, seperti data sensor pada sebuah robot.

## Guided

### Guided 1 Program Input Array Tiga Dimensi
```C++
#include <iostream>
using namespace std;
// PROGRAM INPUT ARRAY 3 DIMENSI
int main()
{
    // Deklarasi array
    int arr[2][3][3];
    // Input elemen
    for (int x = 0; x < 2; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            for (int z = 0; z < 3; z++)
            {
                cout << "Input Array[" << x << "][" << y << "][" << z <<

                    "] = ";

                cin >> arr[x][y][z];
            }
        }
        cout << endl;
    }
    // Output Array
    for (int x = 0; x < 2; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            for (int z = 0; z < 3; z++)
            {
                cout << "Data Array[" << x << "][" << y << "][" << z <<

                    "] = " << arr[x][y][z] << endl;
            }
        }
    }
    cout << endl;
    // Tampilan array
    for (int x = 0; x < 2; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            for (int z = 0; z < 3; z++)
            {
                cout << arr[x][y][z] << ends;
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
    
}
```
### Output:
![image](https://github.com/KotaNamaki/Structure-Data-Assignment/assets/125143781/503a88cf-17c1-4710-9fcd-5a8712b02b74)

### Penjelasan: 
Kode ini merupakan program C++ untuk membuat array 3 dimensi. Program ini dibagi menjadi 3 bagian:

Deklarasi Array: Pertama, program mengalokasikan memory untuk array 3 dimensi bernama "arr" dengan ukuran 2 x 3 x 3. Ini berarti array tersebut dapat menyimpan 2 kelompok, dimana tiap kelompok berisi 3 baris, dan tiap baris berisi 3 angka integer.

Input Elemen: Program menggunakan tiga loop for untuk meminta pengguna memasukkan angka untuk setiap elemen dalam array. Looping akan berjalan sebanyak 2 kali 
(sesuai dengan jumlah kelompok), 3 kali (sesuai dengan jumlah baris), dan 3 kali (sesuai dengan jumlah angka di tiap baris).

Tampilan Array: Terakhir, program menampilkan isi array dalam 2 bentuk. Pertama, program menampilkannya dengan label "Data Array" dan koordinat tiap elemen. Kedua, program menampilkannya secara sederhana tanpa label dan koordinat.

### Guided 2 Program Mencari Nilai Maksimal pada Array
```C++
#include <iostream>
using namespace std;
int main()
{
    int maks, a, i = 1, lokasi;
    cout << "Masukkan panjang array: ";
    cin >> a;
    int array[a];
    cout << "Masukkan " << a << " angka\n";
    for (i = 0; i < a; i++)
    {
        cout << "Array ke-" << (i) << ": ";
        cin >> array[i];
    }
    maks = array[0];
    for (i = 0; i < a; i++)
    {
        if (array[i] > maks)
        {
            maks = array[i];
            lokasi = i;
        }
    }
    cout << "Nilai maksimum adalah " << maks << " berada di Array ke " << lokasi << endl;
    return 0;   
}
```
### Output: 
![image](https://github.com/KotaNamaki/Structure-Data-Assignment/assets/125143781/5a578427-e3d4-4db9-b8d3-b073cf34db55)
