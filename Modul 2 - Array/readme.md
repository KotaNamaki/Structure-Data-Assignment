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
#### 2) Array 2 dimensi
Array 2 dimensi adalah array yang memiliki baris dan kolom. Array ini dapat digunakan untuk menyimpan data yang terstruktur dalam bentuk tabel. Array dua dimensi adalah variable yang terdiri dari kumpulan array satu dimensi dengan tipe yang sama yang disusun dalam baris dan kolom. Dalam array dua dimensi, setiap elemen memiliki dua indeks, yaitu indeks baris dan indeks kolom. Indeks baris menunjukkan posisi elemen dalam baris, sementara indeks kolom menunjukkan posisi elemen dalam kolom.
```C++
int nilai_kelas[5][3]; // Array dengan 5 baris dan 3 kolom bertipe integer
```
Array nilai_kelas dapat menyimpan nilai ujian 5 siswa untuk 3 mata pelajaran. Untuk mengakses nilai ujian siswa ke-2 untuk mata pelajaran ke-3, Anda dapat menggunakan dua indeks:
```C++
int nilai = nilai_kelas[2][2];

```
