# <h1 align="center"> Laporan Praktium Modul-4 Circular dan Non-Circular Linked List </h1>
<p align="center"> Andhika Haqqa Syahrony <p>
<p align="center"> 2311102197@ittelkom-pwt.ac.id</p>

## Dasar Teori
<div style="text-align: right">
Daftar tertaut adalah struktur data yang bisa linier atau nonlinier, bergantung pada implementasinya. Dalam daftar tertaut, elemen dialokasikan secara acak di memori, dan elemen dihubungkan melalui pointer. Hal ini memungkinkan penggunaan memori yang lebih efisien dibandingkan dengan array. Dalam bab ini, kita akan membahas karakteristik empat jenis daftar tertaut: daftar tertaut tunggal, daftar tertaut ganda, daftar tertaut melingkar, dan daftar tertaut header.

Daftar tertaut melingkar adalah tipe khusus dari daftar tertaut di mana simpul terakhir menunjuk kembali ke simpul pertama, sehingga menciptakan perulangan. Hal ini memungkinkan akses berkelanjutan ke daftar tanpa awal atau akhir yang ditentukan. Daftar tertaut melingkar berguna dalam aplikasi di mana data perlu diproses secara terus menerus, seperti aplikasi atau simulasi waktu nyata [1].

Selain karakteristiknya, daftar tertaut juga digunakan dalam berbagai aplikasi. Mereka sangat berguna dalam sistem manajemen memori, di mana pengumpulan sampah dapat dilakukan ketika hanya ada sedikit ruang atau tidak ada ruang tersisa sama sekali dalam daftar penyimpanan kosong, atau ketika CPU menganggur dan mempunyai waktu untuk melakukan pengumpulan. Sistem manajemen memori menggunakan konsep pemadatan, yang mengumpulkan semua blok ruang kosong dan menempatkannya di satu lokasi dalam satu blok kosong. Hal ini memungkinkan penggunaan memori lebih efisien dan mengurangi fragmentasi [1].

</div>

## Guided

### Guided 1. Single linked Non-Circular List
```C++
#include <iostream>
using namespace std;
/// PROGRAM SINGLE LINKED LIST NON-CIRCULAR
// Deklarasi Struct Node
struct Node
{
    int data;
    Node *next;
};
Node *head;
Node *tail;

// Inisialisasi Node
void init()
{
    head = NULL;
    tail = NULL;
}

// Pengecekan
bool isEmpty()
{
    if (head == NULL)
        return true;
    else
        return false;
}

// Tambah Depan
void insertDepan(int nilai)
{
    // Buat Node baru
    Node *baru = new Node;
    baru->data = nilai;
    baru->next = NULL;
    if (isEmpty() == true)
    {
        head = tail = baru;
        tail->next = NULL;
    }
    else
    {
        baru->next = head;
        head = baru;
    }
}

// Tambah Belakang
void insertBelakang(int nilai)
{
    // Buat Node baru
    Node *baru = new Node;
    baru->data = nilai;
    baru->next = NULL;
    if (isEmpty() == true)
    {
        head = tail = baru;
        tail->next = NULL;
    }
    else
    {
        tail->next = baru;
        tail = baru;
    }
}

// Hitung Jumlah List
int hitungList()
{
    Node *hitung;
    hitung = head;
    int jumlah = 0;
    while (hitung != NULL)
    {
        jumlah++;
        hitung = hitung->next;
    }
    return jumlah;
}
void insertTengah(int data, int posisi)
{
    if (posisi < 1 || posisi > hitungList())
    {
        cout << "Posisi diluar jangkauan" << endl;
    }
    else if (posisi == 1)
    {
        cout << "Posisi bukan posisi tengah" << endl;
    }
    else
    {
        Node *baru, *bantu;
        baru = new Node();
        baru->data = data;
        // tranversing
        bantu = head;
        int nomor = 1;
        while (nomor < posisi - 1)
        {
            bantu = bantu->next;
            nomor++;
        }
        baru->next = bantu->next;
        bantu->next = baru;
    }
}

// Hapus Depan
void hapusDepan()
{
    Node *hapus;
    if (isEmpty() == false)
    {
        if (head->next != NULL)
        {
            hapus = head;
            head = head->next;
            delete hapus;
        }
        else
        {
            head = tail = NULL;
        }
    }
    else
    {
        cout << "List Kosong!" << endl;
    }
}
void hapusBelakang()
{
    Node *hapus;
    Node *bantu;
    if (isEmpty() == false)
    {
        if (head != tail)
        {
            hapus = tail;
            bantu = head;
            while (bantu->next != tail)
            {
                bantu = bantu->next;
            }
            tail = bantu;
            tail->next = NULL;
            delete hapus;
        }
        else
        {
            head = tail = NULL;
        }
    }
    else
    {
        cout << "List kosong!" << endl;
    }
}
void hapusTengah(int posisi)
{
    Node *bantu, *hapus, *sebelum;
    if (posisi < 1 || posisi > hitungList())
    {
        cout << "Posisi di luar jangkauan" << endl;
    }
    else if (posisi == 1)
    {
        cout << "Posisi bukan posisi tengah" << endl;
    }
    else
    {
        int nomor = 1;
        bantu = head;
        while (nomor <= posisi)
        {
            if (nomor == posisi - 1)
            {
                sebelum = bantu;
            }
            if (nomor == posisi)
            {
                hapus = bantu;
            }
            bantu = bantu->next;
            nomor++;
        }
        sebelum->next = bantu;
        delete hapus;
    }
}
void ubahDepan(int data)
{
    if (isEmpty() == 0)
    {
        head->data = data;
    }
    else
    {
        cout << "List masih kosong!" << endl;
    }
}
void ubahTengah(int data, int posisi)
{
    Node *bantu;
    if (isEmpty() == 0)
    {
        if (posisi < 1 || posisi > hitungList())
        {
            cout << "Posisi di luar jangkauan" << endl;
        }
        else if (posisi == 1)
        {
            cout << "Posisi bukan posisi tengah" << endl;
        }
        else
        {
            bantu = head;
            int nomor = 1;
            while (nomor < posisi)
            {
                bantu = bantu->next;
                nomor++;
            }
            bantu->data = data;
        }
    }
    else
    {
        cout << "List masih kosong!" << endl;
    }
}
void ubahBelakang(int data)
{
    if (isEmpty() == 0)
    {
        tail->data = data;
    }
    else
    {
        cout << "List masih kosong!" << endl;
    }
}
void clearList()
{
    Node *bantu, *hapus;
    bantu = head;
    while (bantu != NULL)
    {
        hapus = bantu;
        bantu = bantu->next;
        delete hapus;
    }
    head = tail = NULL;
    cout << "List berhasil terhapus!" << endl;
}

// Tampilkan List
void tampil()
{
    Node *bantu;
    bantu = head;
    if (isEmpty() == false)
    {
        while (bantu != NULL)
        {
            cout << bantu->data << ends;
            bantu = bantu->next;
        }
        cout << endl;
    }
    else
    {
        cout << "List masih kosong!" << endl;
    }
}
int main()
{
init();
insertDepan(3);
tampil();
insertBelakang(5);
tampil();
insertDepan(2);
tampil();
insertDepan(1);
tampil();
hapusDepan();
tampil();
hapusBelakang();
tampil();
insertTengah(7, 2);
tampil();
hapusTengah(2);
tampil();
ubahDepan(1);
tampil();
ubahBelakang(8);
tampil();
ubahTengah(11, 2);
tampil();
return 0;
}
```

### Screenshot
![image](https://github.com/KotaNamaki/Structure-Data-Assignment/assets/125143781/7e36b500-5fe9-4bee-bc38-a2c419450474)


### Guided 2 Single linked Circular 
```C++
// Andhika Haqqa Syahrony
// 2311102197
#include <iostream>
#include <stdio.h>
#include <string>
// Linked List CIrcular
using namespace std;
// Deklarasi Struct Node
struct node
{
    string data;
    node *next;
};
node *head, *tail, *baru, *bantu, *hapus;
void init()
{
    head = NULL;
    tail = head;
}
// pengecekan
int isEmpty()
{
    if (head == NULL)
        return 1;
    else
        return 0;
}
// Node Baru
void buatNode(string data)
{
    baru = new node;
    baru->data = data;
    baru->next = NULL;
}
int hitunglist()
{
    bantu = head;
    int jumlah = 0;
    while (bantu != NULL)
    {
        jumlah++;
        bantu = bantu->next;
    }
    return jumlah;
}

// tambah depan
void insertDepan(string data)
{
    buatNode(data);
    if (isEmpty() == 1)
    {
        head = baru;
        tail = head;
        baru->next = head;
    }
    else
    {
        while (tail->next != head)
        {
            tail = tail->next;
        }
        baru->next = head;
        head = baru;
        tail->next = head;
    }
}
// tambah belakang
void insertBelakang(string data)
{
    // buat node baru
    buatNode(data);
    if (isEmpty() == 1)
    {
        head = baru;
        tail = head;
        baru->next = head;
    }
    else
    {
        while (tail->next != head)
        {
            tail = tail->next;
        }
        tail->next = baru;
        baru->next = head;
        tail = baru;
    }
}

void insertTengah(string data, int posisi)
{
    if (isEmpty() == 1)
    {
        head = baru;
        tail = head;
        baru->next = head;
    }
    else
    {
        baru->data = data;
        int nomor = 1;
        bantu = head;
        while (nomor < posisi - 1)
        {
            bantu = bantu->next;
            nomor++;
        }
        baru->next = bantu->next;
        bantu->next = baru;
    }
}
// hapus depan
void hapusDepan()
{
    if (isEmpty() == 0)
    {
        hapus = head;
        tail = head;
        if (hapus->next == head)
        {
            head = NULL;
            tail = NULL;
            delete hapus;
        }
        else
        {
            while (tail->next != hapus)
            {
                tail = head->next;
            }
            head = head->next;
            tail->next = head;
            hapus->next = NULL;
            delete hapus;
        }
    }
    else
    {
        cout << "List Kosong! " << endl;
    }
}

// hapus belakang
void hapusBelakang()
{
    if (isEmpty() == 0)
    {
        hapus = head;
        tail = head;
        if (hapus->next == head)
        {
            head = NULL;
            tail = NULL;
            delete hapus;
        }
        else
        {
            while (hapus->next != head)
            {
                hapus = hapus->next;
            }
            while (tail->next != hapus)
            {
                tail = tail->next;
            }
            tail->next = head;
            hapus->next = NULL;
            delete hapus;
        }
    }
    else
    {
        cout << "List Kosong!!! " << endl;
    }
}
void hapusTengah(int posisi)
{
    if (isEmpty() == 0)
    {
        int nomor = 1;
        bantu = head;
        while (nomor < posisi - 1)
        {
            bantu = bantu->next;
            nomor++;
        }
        hapus = bantu->next;
        bantu->next = hapus->next;

        delete hapus;
    }
    else
    {
        cout << "list Kosong!!" << endl;
    }
}
// clear list
void hapusList()
{
    if (head != NULL)
    {
        hapus = head->next;
        while (hapus != head)
        {
            bantu = hapus->next;
            delete hapus;
            hapus = bantu;
        }
        delete head;
        head = NULL;
    }
    cout << "list telah diahpus" << endl;
}

// tampilkan list
void Display()
{
    if (isEmpty() == 0)
    {
        tail = head;
        do
        {
            cout << tail->data << " "<<ends;
            tail = tail->next;

        } while (tail != head);
        cout << endl;
    }
    else
    {
        cout << "List kosong!!!" << endl;
    }
}
int main()
{
    init();
    insertDepan("Ayam");
    Display();
    insertDepan("Bebek");
    Display();
    insertBelakang("Cicak");
    Display();
    insertBelakang("Domba");
    Display();
    hapusBelakang();
    Display();
    hapusDepan();
    Display();
    insertTengah("Sapi", 3);
    Display();
    hapusTengah(3);
    Display();
    return 0;
}
```

### Screenshot

## Daftar Pustaka

[1]. Sachi Nandan Mohanty, Pabitra Kumar Tripathy, Data Structure and Algorithms Using C++: A Practical Implementation, New York:Scrivener Publishing LLC, 14 January 2021.

[2]. 
