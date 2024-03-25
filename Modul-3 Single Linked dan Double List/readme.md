# <h1 align="center"> Laporan Praktium Modul-2 Array </h1>
<p align="center"> Andhika Haqqa Syahrony <p>
<p align="center"> 2311102197@ittelkom-pwt.ac.id</p>

## Dasar Teori 
<div style="text-align: right">
Double Linked List adalah jenis linked list yang memiliki node yang memiliki data dan dua buah reference link, biasanya disebut next dan prev, yang menunjuk ke node yang berada sebelumnya dan sesudahnya Double Linked List memiliki beberapa keunggulan terhadap Single Linked List, seperti:
  
- Double Linked List memiliki dua pointer sambungan, yang memungkinkan penyisipan bisa dilakukan sebelum data tertentu atau sesudah data tertentu
- Double Linked List dapat dilakukan dari kiri ke kanan atau dari kanan ke kiri dalam hal menyusuri list
- Double Linked List memiliki kemampuan untuk menghapus elemen dengan lebih cepat, karena tidak perlu melakukan traversal seluruh linked list

Sebagai contoh, jika kita memiliki Double Linked List yang terdiri dari beberapa elemen, kita dapat melakukan penyisipan elemen baru di awal, tengah, atau akhir linked list dengan mudah. Ketika linked list masih kosong, simpul baru akan menjadi simpul awal dan sekaligus simpul akhir dari Double Linked List.
</div>

## Guided 
### 1. Latihan Single Linked List
```C++
#include <iostream>
using namespace std;

/// PROGRAM SINGLE LINKED LIST NON-CIRCULAR
// Deklarasi Struct Node
struct Node
{
    // komponen/member
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
// Tambah Tengah
void insertTengah(int data, int posisi)
{
    if (posisi < 1 || posisi > hitungList())
    {
        cout << "Posisi diluar jangkauan" << endl;
    }
    else if (posisi == 1)
    {
        cout << "Posisi bukan posisi tengah" <<

            endl;
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
        cout << "List kosong!" << endl;
    }
}

// Hapus Belakang
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
// Hapus Tengah
void hapusTengah(int posisi)
{
    Node *hapus, *bantu, *bantu2;
    if (posisi < 1 || posisi > hitungList())
    {
        cout << "Posisi di luar jangkauan" << endl;
    }
    else if (posisi == 1)
    {
        cout << "Posisi bukan posisi tengah" <<

            endl;
    }
    else
    {
        int nomor = 1;
        bantu = head;
        while (nomor <= posisi)
        {

            if (nomor == posisi - 1)
            {
                bantu2 = bantu;
            }
            if (nomor == posisi)
            {
                hapus = bantu;
            }
            bantu = bantu->next;
            nomor++;
        }
        bantu2->next = bantu;
        delete hapus;
    }
}
// Ubah Depan
void ubahDepan(int data)
{
    if (isEmpty() == false)
    {
        head->data = data;
    }
    else
    {
        cout << "List masih kosong!" << endl;
    }
}
// Ubah Tengah
void ubahTengah(int data, int posisi)
{
    Node *bantu;
    if (isEmpty() == false)
    {
        if (posisi < 1 || posisi > hitungList())
        {
            cout << "Posisi di luar jangkauan" <<

                endl;
        }
        else if (posisi == 1)
        {
            cout << "Posisi bukan posisi tengah" <<

                endl;
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
// Ubah Belakang
void ubahBelakang(int data)
{
    if (isEmpty() == false)
    {
        tail->data = data;
    }
    else
    {
        cout << "List masih kosong!" << endl;
    }
}
// Hapus List
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
![image](https://github.com/KotaNamaki/Structure-Data-Assignment/assets/125143781/81bacde6-2c4b-4be8-a792-ba8379e3fd72)

### 2. Latihan Double Linked List
```C++
#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *prev;
    Node *next;
};
class DoublyLinkedList
{

public:
    Node *head;
    Node *tail;
    DoublyLinkedList()
    {
        head = nullptr;
        tail = nullptr;
    }
    void push(int data)
    {
        Node *newNode = new Node;
        newNode->data = data;
        newNode->prev = nullptr;
        newNode->next = head;
        if (head != nullptr)
        {
            head->prev = newNode;
        }
        else
        {
            tail = newNode;
        }
        head = newNode;
    }
    void pop()
    {
        if (head == nullptr)
        {
            return;
        }
        Node *temp = head;
        head = head->next;
        if (head != nullptr)
        {
            head->prev = nullptr;
        }
        else
        {
            tail = nullptr;
        }
        delete temp;
    }
    bool update(int oldData, int newData)
    {
        Node *current = head;
        while (current != nullptr)
        {
            if (current->data == oldData)
            {
                current->data = newData;
                return true;
            }
            current = current->next;
        }

        return false;
    }
    void deleteAll()
    {
        Node *current = head;
        while (current != nullptr)
        {
            Node *temp = current;
            current = current->next;
            delete temp;
        }
        head = nullptr;
        tail = nullptr;
    }
    void display()
    {
        Node *current = head;
        while (current != nullptr)
        {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }
};
int main()
{
    DoublyLinkedList list;
    while (true)
    {
        cout << "1. Add data" << endl;
        cout << "2. Delete data" << endl;
        cout << "3. Update data" << endl;
        cout << "4. Clear data" << endl;
        cout << "5. Display data" << endl;
        cout << "6. Exit" << endl;
        int choice;
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
        {
            int data;
            cout << "Enter data to add: ";
            cin >> data;
            list.push(data);
            break;
        }
        case 2:
        {
            list.pop();
            break;
        }
        case 3:
        {
            int oldData, newData;
            cout << "Enter old data: ";
            cin >> oldData;
            cout << "Enter new data: ";
            cin >> newData;
            bool updated = list.update(oldData,

                                       newData);

            if (!updated)
            {
                cout << "Data not found" << endl;
            }
            break;
        }
        case 4:
        {
            list.deleteAll();
            break;
        }
        case 5:
        {
            list.display();
            break;
        }
        case 6:
        {
            return 0;
        }
        default:
        {
            cout << "Invalid choice" << endl;
            break;
        }
        }
    }
    return 0;
}
```
### Screenshot: 
![image](https://github.com/KotaNamaki/Structure-Data-Assignment/assets/125143781/31ce7f7d-811b-42ea-8c9e-5f7bc5497e07)

## Unguided
### 1. Buatlah program menu Single Linked List Non-Circular untuk
menyimpan Nama dan usia mahasiswa, dengan menggunakan inputan
dari user. Lakukan operasi berikut:

a. Masukkan data sesuai urutan berikut. (Gunakan insert depan,
belakang atau tengah). Data pertama yang dimasukkan adalah
nama dan usia anda.

![image](https://github.com/KotaNamaki/Structure-Data-Assignment/assets/125143781/f3e6575d-203d-418f-b3ac-6745b44d5585)

b. Hapus data Akechi
c. Tambahkan data berikut diantara John dan Jane : Futaba 18
d. Tambahkan data berikut diawal : Igor 20
e. Ubah data Michael menjadi : Reyn 18
f. Tampilkan seluruh data

```C++
#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;
// Mendefinisikan struct Node dengan 3 field: nama, usia, dan pointer next
struct Node
{
    string nama;
    int usia;
    Node *next;
};

// Pointer head dan tail untuk menandai awal dan akhir dari linked list
Node *head = NULL;
Node *tail = NULL;

// Fungsi untuk memasukkan data di depan linked list
void insertDepan(string nama, int usia)
{
    // Membuat node baru
    Node *baru = new Node;
    baru->nama = nama;
    baru->usia = usia;

    // Menghubungkan node baru ke node selanjutnya (sebelumnya head)
    baru->next = head;

    // Memperbarui head untuk menunjuk ke node baru
    head = baru;

    // Jika tail masih kosong, maka tail juga menunjuk ke node baru
    if (tail == NULL)
    {
        tail = baru;
    }
}

// Fungsi untuk memasukkan data di belakang linked list
void insertBelakang(string nama, int usia)
{
    // Membuat node baru
    Node *baru = new Node;
    baru->nama = nama;
    baru->usia = usia;
    baru->next = NULL;

    // Jika tail masih kosong, maka node baru menjadi head dan tail
    if (tail == NULL)
    {
        head = baru;
        tail = baru;
    }
    else
    {
        // Menghubungkan node baru ke tail
        tail->next = baru;

        // Memperbarui tail untuk menunjuk ke node baru
        tail = baru;
    }
}

// Fungsi untuk memasukkan data di tengah linked list
void insertTengah(string nama, int usia, string target)
{
    // Membuat node baru
    Node *baru = new Node;
    baru->nama = nama;
    baru->usia = usia;

    // Mencari node dengan nama target
    Node *temp = head;
    while (temp != NULL && temp->nama != target)
    {
        temp = temp->next;
    }

    // Jika target tidak ditemukan, tampilkan pesan error
    if (temp == NULL)
    {
        cout << "Target tidak ditemukan!" << endl;
    }
    else
    {
        // Menghubungkan node baru setelah node target
        baru->next = temp->next;
        temp->next = baru;
    }
}

// Fungsi untuk menghapus data dari linked list
void hapusData(string nama)
{
    // Mencari node dengan nama yang ingin dihapus
    Node *temp = head;
    Node *prev = NULL;

    while (temp != NULL && temp->nama != nama)
    {
        prev = temp;
        temp = temp->next;
    }

    // Jika data tidak ditemukan, tampilkan pesan error
    if (temp == NULL)
    {
        cout << "Data tidak ditemukan!" << endl;
    }
    else if (prev == NULL)
    {
        // Jika data yang dihapus adalah head, maka head diubah ke node selanjutnya
        head = head->next;
        if (head == NULL)
        {
            // Jika linked list kosong setelah penghapusan, maka tail juga diubah menjadi NULL
            tail = NULL;
        }
    }
    else
    {
        // Menghubungkan node sebelumnya dengan node setelah node yang dihapus
        prev->next = temp->next;

        // Jika node yang dihapus adalah tail, maka tail diubah ke node sebelumnya
        if (temp == tail)
        {
            tail = prev;
        }
    }

    // Menghapus node yang sudah tidak terpakai
    delete temp;
}

void ubahData(string nama, string namaBaru, int usiaBaru)
{
    // Mencari node dengan nama yang ingin diubah
    Node *temp = head;
    while (temp != NULL && temp->nama != nama)
    {
        temp = temp->next;
    }

    // Jika data tidak ditemukan, tampilkan pesan error
    if (temp == NULL)
    {
        cout << "Data tidak ditemukan!" << endl;
    }
    else
    {
        // Mengubah nama dan usia pada node yang ditemukan
        temp->nama = namaBaru;
        temp->usia = usiaBaru;
    }
}

// Fungsi untuk menampilkan seluruh data dalam linked list
void tampilData()
{
    // Node temp untuk iterasi
    Node *temp = head;

    // Menampilkan data dari setiap node
    while (temp != NULL)
    {
        cout << temp->nama << " " << temp->usia << endl;
        temp = temp->next;
    }
}

// Fungsi main untuk menjalankan program
int main()
{
    // Masukkan data diri
    string namaAnda;
    int usiaAnda;
    cout << "Masukkan nama Anda: ";
    cin >> namaAnda;
    cout << "Masukkan usia Anda: ";
    cin >> usiaAnda;

    // Masukkan data diri ke linked list di depan
    insertDepan(namaAnda, usiaAnda);
    // Masukkan data lainnya
    string nama, namaTarget;
    int usia;

    while (true)
    {
        cout << "1. Insert Depan" << endl;
        cout << "2. Insert Belakang" << endl;
        cout << "3. Insert Tengah" << endl;
        cout << "4. Hapus Data" << endl;
        cout << "5. Tampilkan Data" << endl;
        cout << "6. Ubah data" << endl;
        cout << "7. Keluar " << endl;

        int pilihan;
        cout << "Pilih operasi: ";
        cin >> pilihan;

        switch (pilihan)
        {
        case 1:
            cout << "Masukkan nama: ";
            cin >> nama;
            cout << "Masukkan usia: ";
            cin >> usia;
            insertDepan(nama, usia); // Penjelasan ada di fungsi insertDepan
            break;
        case 2:
            cout << "Masukkan nama: ";
            cin >> nama;
            cout << "Masukkan usia: ";
            cin >> usia;
            insertBelakang(nama, usia); // Penjelasan ada di fungsi insertBelakang
            break;
        case 3:
            cout << "Masukkan nama: ";
            cin >> nama;
            cout << "Masukkan usia: ";
            cin >> usia;
            cout << "Masukkan nama target: ";
            cin >> namaTarget;
            insertTengah(nama, usia, namaTarget); // Penjelasan ada di fungsi insertTengah
            break;
        case 4:
            cout << "Masukkan nama yang ingin dihapus: ";
            cin >> nama;
            hapusData(nama); // Penjelasan ada di fungsi hapusData
            break;
        case 5:
            tampilData(); // Penjelasan ada di fungsi tampilData
            break;
        case 6:
            cout << "Masukkan nama: ";
            cin >> nama;
            cout << "Masukkan usia: ";
            cin >> usia;
            ubahData("Michael", "Reyn", 18);
            break;
        case 7:
            cout << "Keluar dari program." << endl;
            exit(0); // Keluar dari program
        default:
            cout << "Pilihan tidak valid!" << endl;
        }
    }

    return 0;
}
```
### Screenshot
![image](https://github.com/KotaNamaki/Structure-Data-Assignment/assets/125143781/6214a12e-f7e2-43e1-a14a-a51980cce44d)
![image](https://github.com/KotaNamaki/Structure-Data-Assignment/assets/125143781/0d73ed8c-bf39-4843-bbc2-7f1dbb0ca3b3)
![image](https://github.com/KotaNamaki/Structure-Data-Assignment/assets/125143781/8e56773c-7db1-4305-98c3-d393a26af0bc)
![image](https://github.com/KotaNamaki/Structure-Data-Assignment/assets/125143781/f0d5a15b-b054-4ed0-9829-f5ef057b54a5)
![image](https://github.com/KotaNamaki/Structure-Data-Assignment/assets/125143781/73e6902f-b278-4384-ac33-e97ab2d65b93)

