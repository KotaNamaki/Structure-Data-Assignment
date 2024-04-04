# <h1 align="center"> Laporan Praktium Modul-5 Hash Table </h1>
<p align="center"> Andhika Haqqa Syahrony <p>
<p align="center"> 2311102197@ittelkom-pwt.ac.id</p>

## Dasar Teori
<p align = "Justify">
Tabel hash adalah struktur data mendasar dalam ilmu komputer untuk beban kerja basis data analitis, seperti agregasi, penggabungan, pemfilteran kumpulan, dan deduplikasi catatan. Mereka digunakan untuk menyimpan dan mengambil data secara efisien dengan memetakan kunci ke indeks, memungkinkan waktu yang konstan, overhead rendah, penyisipan, penghapusan, dan operasi pencarian[1]. Teori di balik tabel hash melibatkan penggunaan fungsi hash untuk mendistribusikan data ke seluruh rangkaian keranjang, dengan masing-masing keranjang berisi daftar nilai tertaut dengan nilai hash yang sama[2].

Tabel hash dirancang untuk meminimalkan jumlah tabrakan, yang terjadi ketika dua atau lebih kunci melakukan hash ke indeks yang sama. Teknik resolusi tabrakan, seperti rangkaian dan pengalamatan terbuka, digunakan untuk menangani tabrakan dan menjaga efisiensi struktur data[2]. Pilihan fungsi hash dan metode resolusi tabrakan dapat berdampak signifikan terhadap kinerja tabel hash. Dalam beberapa tahun terakhir, terdapat kemajuan dalam desain tabel hash, seperti hashing Iceberg, yang menawarkan jaminan kuat pada efisiensi ruang, efisiensi cache, dan kemungkinan kegagalan yang rendah sekaligus mendukung faktor beban hingga 1 - o(1) [3] . Selain itu, metode hashing yang sempurna telah diusulkan untuk sistem OLAP, yang dapat memberikan pengambilan dan penyimpanan data yang efisien.
  
Untuk pemahaman komprehensif tentang teori dan implementasi tabel hash, buku "The Joys of Hashing: Hash Table Programming with C" memberikan pandangan mendalam tentang desain dan implementasi tabel hash, termasuk strategi resolusi tabrakan, teknik pengubahan ukuran, dan penggunaan fungsi hash heuristik[2].
</p>
## Daftar Pustaka
[1].	Michael A. Bender, Alex Conway, Martin Farach-Colton, William Kuszmaul, Guido Tagliavini, “Iceberg Hashing,” Optimizing Many Hash-Table Criteria at Once, Volume 70, Issue 6 December 2023.

[2].	Thomas Mailund, The Joys of Hashing: Hash Table Programming with C [1 ed.], Aarhus N, Denmark, 2019.

[3].	Tianqi Zheng,  Zhibin Zhang, Xueqi Cheng, “SAHA,”  A String Adaptive Hash Table for Analytical Databases, Volume 10, Issue 6, 11 March 2020
