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

### Penjelasan: 
Kode C++ ini pertama-tama meminta pengguna untuk memasukkan panjang array dan kemudian meminta pengguna untuk memasukkan nilai ke dalam array. Kemudian, kode ini menemukan nilai maksimum dalam array dan mencetak nilai maksimum dan lokasinya.

## Unguided
### 1. Buatlah program untuk menampilkan Output seperti berikut dengan data yang diinputkan oleh user!
```C++
#include <iostream>
using namespace std;

int main() {
  // Mendeklarasikan variabel `n` untuk menyimpan jumlah data
  int n;

  // Meminta pengguna untuk memasukkan jumlah data
  cout << "Masukkan jumlah data: ";
  cin >> n;

  // Mendeklarasikan array `data` dengan panjang `n`
  int data[n];

  // Meminta pengguna untuk memasukkan data
  cout << "Masukkan data:\n";
  for (int i = 0; i < n; i++) {
    // Perulangan untuk memasukkan data ke dalam array
    cin >> data[i];
  }

  // Menampilkan data array
  cout << "Data Array: ";
  for (int i = 0; i < n; i++) {
    // Perulangan untuk menampilkan data array
    cout << data[i] << " ";
  }

  // Menampilkan nomor genap
  cout << "\nNomor Genap: ";
  for (int i = 0; i < n; i++) {
    // Perulangan untuk menampilkan data genap
    if (data[i] % 2 == 0) {
      // Memeriksa apakah data genap
      cout << data[i] << " ";
    }
  }

  // Menampilkan nomor ganjil
  cout << "\nNomor Ganjil: ";
  for (int i = 0; i < n; i++) {
    // Perulangan untuk menampilkan data ganjil
    if (data[i] % 2 == 1) {
      // Memeriksa apakah data ganjil
      cout << data[i] << " ";
    }
  }

  cout << endl;
  return 0;
}

```
### Output
![image](https://github.com/KotaNamaki/Structure-Data-Assignment/assets/125143781/d0739e27-e7f9-4946-b24c-598d5f0445a9)

### Penjelasan 
Kode ini adalah program C++ yang meminta pengguna untuk memasukkan jumlah data (bilangan bulat) dan kemudian meminta pengguna untuk memasukkan data tersebut. Data tersebut disimpan dalam array dengan panjang sesuai dengan jumlah data yang dimasukkan. Program kemudian menampilkan semua data yang dimasukkan, kemudian menampilkan data yang genap, dan terakhir menampilkan data yang ganjil. Program ini menggunakan perulangan for untuk memasukkan dan menampilkan data, serta menggunakan operator modulus % untuk memeriksa apakah suatu angka adalah genap atau ganjil.

### 2. Buatlah program Input array tiga dimensi (seperti pada guided) tetapi jumlah atau ukuran elemennya diinputkan oleh user!
```C++
#include <iostream>
#include <vector>
using namespace std;
int main() {
    int dim1, dim2, dim3;
    cout << "Masukkan ukuran dimensi 1: ";
    cin >> dim1;
    cout << "Masukkan ukuran dimensi 2: ";
    cin >> dim2;
    cout << "Masukkan ukuran dimensi 3: ";
    cin >> dim3;

    // Membuat array tiga dimensi dengan ukuran yang ditentukan oleh pengguna
    vector<vector<vector<int>>> array3D(dim1, vector<vector<int>>(dim2, vector<int>(dim3)));

    // Mengisi array dengan input pengguna
    cout << "Masukkan elemen array (dim1 x dim2 x dim3):\n";
    for (int i = 0; i < dim1; ++i) {
        for (int j = 0; j < dim2; ++j) {
            for (int k = 0; k < dim3; ++k) {
                cin >> array3D[i][j][k];
            }
        }
    }

    // Menampilkan elemen array
    cout << "Elemen array:\n";
    for (int i = 0; i < dim1; ++i) {
        for (int j = 0; j < dim2; ++j) {
            for (int k = 0; k < dim3; ++k) {
                cout << "array3D[" << i << "][" << j << "][" << k << "] = " << array3D[i][j][k] << endl;
            }
        }
    }

    return 0;
}
```
### Output
![image](https://github.com/KotaNamaki/Structure-Data-Assignment/assets/125143781/ee7d09d9-f02b-4017-9520-c184f10cf682)

### Penjelasan
Penjelasan kode:
- Pertama, kita meminta pengguna untuk memasukkan ukuran dari tiga dimensi array.
- Kemudian, kita membuat array tiga dimensi menggunakan std::vector dengan ukuran yang ditentukan oleh pengguna.
- Setelah itu, kita meminta pengguna untuk memasukkan elemen-elemen array.
- Terakhir, kita menampilkan elemen-elemen array yang telah dimasukkan.

### 3. Buatlah program menu untuk mencari nilai Maksimum, Minimum dan Nilai rata – rata dari suatu array dengan input yang dimasukan oleh user!
```C++
#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

// Fungsi untuk menampilkan menu
void menu()
{
    cout << "\n\t\tMENU :" << endl;
    cout << "\nPress 1 untuk mencari nilai maksimum di array" << endl;
    cout << "Press 2 untuk mencari nilai minimum di array" << endl;
    cout << "Press 3 untuk mencari rata rata di array" << endl;
    cout << "Press 4 to exit" << endl;
}

// Fungsi untuk mencari elemen maksimum dalam array
int findMax(vector<int> &arr)
{
    return *max_element(arr.begin(), arr.end());
}

// Fungsi untuk mencari elemen minimum dalam array
int findMin(vector<int> &arr)
{
    return *min_element(arr.begin(), arr.end());
}

// Fungsi untuk menghitung rata-rata elemen dalam array
double calculateAverage(vector<int> &arr)
{
    return accumulate(arr.begin(), arr.end(), 0.0) / arr.size();
}

int main()
{
    int choice;
    vector<int> arr;
    int n, element;

    cout << "Masukan Berapa Elemen yang ingin dimasukkan di array: ";
    cin >> n;

    cout << "Masukan elemen: ";
    for (int i = 0; i < n; i++)
    {
        cin >> element;
        arr.push_back(element);
    }

    do
    {
        menu();
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Maximum element di array: " << findMax(arr) << endl;
            break;
        case 2:
            cout << "Minimum element di array: " << findMin(arr) << endl;
            break;
        case 3:
            cout << "Rata-rata of elements di array: " << calculateAverage(arr) << endl;
            break;
        case 4:
            cout << "Exiting the program." << endl;
            break;
        default:
            cout << "Invalid option. Please try again." << endl;
        }
    } while (choice != 4);

    return 0;
}
```
### Output
![image](https://github.com/KotaNamaki/Structure-Data-Assignment/assets/125143781/bd69edab-7f03-4b7a-b29d-ecdf66200088)

### Penjelasan
- Pertama, kita meminta pengguna untuk memasukkan jumlah elemen dalam array dan elemen-elemennya.
- Kemudian, kita menampilkan menu yang memungkinkan pengguna untuk memilih operasi yang ingin dilakukan.
- Berdasarkan pilihan pengguna, kita menjalankan fungsi yang sesuai untuk mencari elemen maksimum, minimum, atau menghitung rata-rata elemen dalam array.
- Program ini menggunakan vector<int> untuk menyimpan elemen-elemen array, yang memungkinkan ukuran array yang dinamis.
- Fungsi findMax, findMin, dan calculateAverage menggunakan algoritma standar dari C++ untuk mencari elemen maksimum, minimum, dan menghitung rata-rata elemen dalam array.
