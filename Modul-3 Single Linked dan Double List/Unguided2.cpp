#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;
struct Node {
  string nama_produk;
  int harga;
  Node *prev, *next;

  Node(string nama_produk, int harga) {
    this->nama_produk = nama_produk;
    this->harga = harga;
    prev = next = nullptr;
  }
};
class DoubleLinkedList {
  private:
    Node *head, *tail;

  public:
    DoubleLinkedList() {
      head = tail = nullptr;
    }

  // Menambahkan data di akhir
  void addData(string nama_produk, int harga) {
    Node *newNode = new Node(nama_produk, harga);
    if (head == nullptr) {
      head = tail = newNode;
    } else {
      tail->next = newNode;
      newNode->prev = tail;
      tail = newNode;
    }
  }

  // Menambahkan data di urutan tertentu
  void addDataAtIndex(int index, string nama_produk, int harga) {
    if (index < 0 || index > size()) {
      cout << "Indeks tidak valid!" << endl;
      return;
    }

    Node *newNode = new Node(nama_produk, harga);
    if (index == 0) {
      addData(nama_produk, harga);
      return;
    }

    Node *curr = head;
    for (int i = 0; i < index - 1; i++) {
      curr = curr->next;
    }

    if (curr == tail) {
      addData(nama_produk, harga);
      return;
    }

    newNode->next = curr->next;
    curr->next->prev = newNode;
    newNode->prev = curr;
    curr->next = newNode;
  }

  // Menghapus data di akhir
  void deleteData() {
    if (head == nullptr) {
      cout << "Data kosong!" << endl;
      return;
    }

    if (head == tail) {
      head = tail = nullptr;
    } else {
      tail = tail->prev;
      tail->next = nullptr;
    }
  }

  // Menghapus data di urutan tertentu
  void deleteDataAtIndex(int index) {
    if (index < 0 || index >= size()) {
      cout << "Indeks tidak valid!" << endl;
      return;
    }

    if (index == 0) {
      head = head->next;
      if (head != nullptr) {
        head->prev = nullptr;
      } else {
        tail = nullptr;
      }
      return;
    }

    Node *curr = head;
    for (int i = 0; i < index; i++) {
      curr = curr->next;
    }

    if (curr == tail) {
      deleteData();
      return;
    }

    curr->prev->next = curr->next;
    curr->next->prev = curr->prev;
  }

  // Mengupdate data di urutan tertentu
  void updateDataAtIndex(int index, string nama_produk, int harga) {
    if (index < 0 || index >= size()) {
      cout << "Indeks tidak valid!" << endl;
      return;
    }

    Node *curr = head;
    for (int i = 0; i < index; i++) {
      curr = curr->next;
    }

    curr->nama_produk = nama_produk;
    curr->harga = harga;
  }

  // Menampilkan seluruh data
  void displayData() {
    if (head == nullptr) {
      cout << "Data kosong!" << endl;
      return;
    }

    Node *curr = head;
    while (curr != nullptr) {
      cout << curr->nama_produk << " " << curr->harga << endl;
      curr = curr->next;
    }
  }

  // Menghitung jumlah data
  int size() {
    int count = 0;
    Node *curr = head;
    while (curr != nullptr) {
      count++;
      curr = curr->next;
    }
    return count;
  };
};

int main() {
  DoubleLinkedList toko;

  // Data awal
  toko.addData("Originote", 60000);
  toko.addData("Somethinc", 150000);
  toko.addData("Skintific", 100000);
  toko.addData("Wardah", 50000);
  toko.addData("Hanasui", 30000);

  int pilihan;

  do {
    cout << "\nToko Skincare Purwokerto" << endl;
    cout << "1. Tambah Data" << endl;
    cout << "2. Hapus Data" << endl;
    cout << "3. Update Data" << endl;
    cout << "4. Tambah Data Urutan Tertentu" << endl;
    cout << "5. Hapus Data Urutan Tertentu" << endl;
    cout << "6. Hapus Seluruh Data" << endl;
    cout << "7. Tampilkan Data" << endl;
    cout << "8. Exit" << endl;
    cout << "Pilihan Anda: ";
    cin >> pilihan;

    switch (pilihan) {
      case 1: {
        string nama_produk;
        int harga;
        cout << "Masukkan nama produk: ";
        cin.ignore(); // Menghapus newline sebelumnya
        getline(cin, nama_produk);
        cout << "Masukkan harga: ";
        cin >> harga;
        toko.addData(nama_produk, harga);
        break;
      }
      case 2: {
        toko.deleteData();
        break;
      }
      case 3: {
        int index;
        string nama_produk;
        int harga;
        cout << "Masukkan indeks data: ";
        cin >> index;
        cout << "Masukkan nama produk baru: ";
        cin.ignore();
        getline(cin, nama_produk);
        cout << "Masukkan harga baru: ";
        cin >> harga;
        toko.updateDataAtIndex(index, nama_produk, harga);
        break;
      }
      case 4: {
        int index;
        string nama_produk;
        int harga;
        cout << "Masukkan indeks penambahan: ";
        cin >> index;
        cout << "Masukkan nama produk baru: ";
        cin.ignore();
        getline(cin, nama_produk);
        cout << "Masukkan harga baru: ";
        cin >> harga;
        toko.addDataAtIndex(index, nama_produk, harga);
        break;
      }
      case 5: {
        int index;
        cout << "Masukkan indeks penghapusan: ";
        cin >> index;
        toko.deleteDataAtIndex(index);
        break;
      }
      case 6: {
        while (toko.size() > 0) {
          toko.deleteData();
        }
        break;
      }
      case 7: {
        toko.displayData();
        break;
      }
      case 8: {
        cout << "Terima kasih telah menggunakan program!" << endl;
        break;
      }
      default: {
        cout << "Pilihan tidak valid!" << endl;
      }
    }
  } while (pilihan != 8);

  return 0;
}
