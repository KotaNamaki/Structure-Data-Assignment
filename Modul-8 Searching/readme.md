# <h1 align="center"> Laporan Praktium Modul-7 Queue </h1>
<p align="center"> Andhika Haqqa Syahrony <p>
<p align="center"> 2311102197@ittelkom-pwt.ac.id</p>

## Dasar Teori

<p align = "justify">
<strong>Binary Search:</strong>
    
Binary Search merupakan metode pencarian yang digunakan pada data yang sudah terurut secara urut. Algoritma ini bekerja dengan membagi data menjadi dua bagian, kemudian memeriksa elemen tengahnya untuk menentukan apakah data yang dicari berada di bagian kiri atau kanan. Proses ini berulang hingga data yang dicari ditemukan [1]. Prinsip dasar dari Binary Search adalah "Divide and Conquer", di mana ruang pencarian data dibagi menjadi bagian-bagian kecil untuk mempercepat proses pencarian. Kelebihan dari Binary Search adalah efisiensi dalam mencari data dalam jumlah besar dengan menggunakan sedikit beban komputasi. Algoritma ini cocok digunakan pada data yang sudah terurut [1].

<strong>Regular Search Expression:</strong>

Regular Search Expression (REGEX) adalah metode pencarian string yang tidak hanya mencari string secara spesifik, tetapi juga berdasarkan pola dari string tersebut. Algoritma ini memungkinkan pencarian berdasarkan pola tertentu dalam data. REGEX berbasis pada konsep Finite Automaton, di mana pencarian dilakukan dengan membentuk keadaan/state dan grafik berarah yang merepresentasikan karakter-karakter dalam string yang dicari [1]. Kelebihan dari Regular Search Expression adalah kemampuannya untuk mencari data berdasarkan pola tertentu tanpa perlu data yang sudah diurutkan. Algoritma ini efektif dalam mengeksekusi setiap karakter dengan waktu konstan. Dengan pemahaman dasar teori dari Binary Search dan Regular Search Expression, pengguna dapat memilih metode pencarian yang sesuai dengan kebutuhan dan karakteristik data yang akan dicari [1].</p>

## Guided

### Guided-1
Buatlah sebuah project dengan menggunakan sequential search sederhana untuk melakukan pencarian data.

```C++
#include <iostream>
using namespace std;
int main()
{
    int n = 10;
    int data[n] = {9, 4, 1, 7, 5, 12, 4, 13, 4, 10};
    int cari = 10;
    bool ketemu = false;
    int i;
    // algoritma Sequential Search
    for (i = 0; i < n; i++)
    {
        if (data[i] == cari)
        {
            ketemu = true;
            break;
        }
    }
    cout << "\t Program Sequential Search Sederhana\n " << endl;
    cout << "data: {9, 4, 1, 7, 5, 12, 4, 13, 4, 10}" << endl;
    if (ketemu)
    {
        cout << "\n angka " << cari << " ditemukan pada indeks ke -" << i << endl;
    }
    else
    {
        cout << cari << " tidak dapat ditemukan pada data." << endl;
    }
    return 0;
}
```
### Screenshot Guided-1

![image](https://github.com/KotaNamaki/Structure-Data-Assignment/assets/125143781/61eb46ac-2baf-4614-8084-fe97c095b370)

### Guided-2
Buatlah sebuah project untuk melakukan pencarian data dengan menggunakan Binary Search.

```C++
#include <iostream>
#include <iomanip>
using namespace std;
// Deklarasi array dan variabel untuk pencarian
int arrayData[7] = {1, 8, 2, 5, 4, 9, 7};
int cari;
void selection_sort(int arr[], int n)
{
    int temp, min;
    for (int i = 0; i < n - 1; i++)
    {
        min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        // Tukar elemen
        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
}
void binary_search(int arr[], int n, int target)
{
    int awal = 0, akhir = n - 1, tengah, b_flag = 0;
    while (b_flag == 0 && awal <= akhir)
    {
        tengah = (awal + akhir) / 2;
        if (arr[tengah] == target)
        {
            b_flag = 1;
            break;
        }
        else if (arr[tengah] < target)
        {
            awal = tengah + 1;
        }
        else
        {
            akhir = tengah - 1;
        }
    }
    if (b_flag == 1)
        cout << "\nData ditemukan pada index ke-" << tengah << endl;
    else
        cout << "\nData tidak ditemukan\n";
}
int main()
{
    cout << "\tBINARY SEARCH" << endl;
    cout << "\nData awal: ";
    // Tampilkan data awal
    for (int x = 0; x < 7; x++)
    {
        cout << setw(3) << arrayData[x];
    }
    cout << endl;
    cout << "\nMasukkan data yang ingin Anda cari: ";
    cin >> cari;
    // Urutkan data dengan selection sort
    selection_sort(arrayData, 7);
    cout << "\nData diurutkan: ";
    // Tampilkan data setelah diurutkan
    for (int x = 0; x < 7; x++)
    {
        cout << setw(3) << arrayData[x];
    }
    cout << endl;
    // Lakukan binary search
    binary_search(arrayData, 7, cari);
    return 0;
}
```

### Screenshot Guided-2

![image](https://github.com/KotaNamaki/Structure-Data-Assignment/assets/125143781/84bbde1b-e87c-40c2-9261-3418fb786584)



## Daftar Pustaka
[1]. Fenina Adline Twince Tobing, Rena Nainggolan, ANALISIS PERBANDINGAN PENGGUNAAN METODE BINARY SEARCH DENGAN REGULAR SEARCH EXPRESSION, Vol. 4, No. 2, 168-172, Oktober 2020.
