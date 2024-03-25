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