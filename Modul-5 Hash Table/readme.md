# <h1 align="center"> Laporan Praktium Modul-5 Hash Table </h1>
<p align="center"> Andhika Haqqa Syahrony <p>
<p align="center"> 2311102197@ittelkom-pwt.ac.id</p>

## Dasar Teori
<p align = "Justify">
Tabel hash adalah struktur data mendasar dalam ilmu komputer untuk beban kerja basis data analitis, seperti agregasi, penggabungan, pemfilteran kumpulan, dan deduplikasi catatan. Mereka digunakan untuk menyimpan dan mengambil data secara efisien dengan memetakan kunci ke indeks, memungkinkan waktu yang konstan, overhead rendah, penyisipan, penghapusan, dan operasi pencarian[1]. Teori di balik tabel hash melibatkan penggunaan fungsi hash untuk mendistribusikan data ke seluruh rangkaian keranjang, dengan masing-masing keranjang berisi daftar nilai tertaut dengan nilai hash yang sama[2].

Tabel hash dirancang untuk meminimalkan jumlah tabrakan, yang terjadi ketika dua atau lebih kunci melakukan hash ke indeks yang sama. Teknik resolusi tabrakan, seperti rangkaian dan pengalamatan terbuka, digunakan untuk menangani tabrakan dan menjaga efisiensi struktur data[2]. Pilihan fungsi hash dan metode resolusi tabrakan dapat berdampak signifikan terhadap kinerja tabel hash. Dalam beberapa tahun terakhir, terdapat kemajuan dalam desain tabel hash, seperti hashing Iceberg, yang menawarkan jaminan kuat pada efisiensi ruang, efisiensi cache, dan kemungkinan kegagalan yang rendah sekaligus mendukung faktor beban hingga 1 - o(1) [3] . Selain itu, metode hashing yang sempurna telah diusulkan untuk sistem OLAP, yang dapat memberikan pengambilan dan penyimpanan data yang efisien.
  
Untuk pemahaman komprehensif tentang teori dan implementasi tabel hash, buku "The Joys of Hashing: Hash Table Programming with C" memberikan pandangan mendalam tentang desain dan implementasi tabel hash, termasuk strategi resolusi tabrakan, teknik pengubahan ukuran, dan penggunaan fungsi hash heuristik[2].
</p>

## Guided

### Guided 1 
```C++
#include <iostream>

using namespace std;

const int MAX_SIZE = 10;

// Fungsi hash sederhana

int hash_func(int key) {

return key % MAX_SIZE;

}

// Struktur data untuk setiap node

struct Node {

int key;

int value;

Node* next;

Node(int key, int value) : key(key), value(value),

next(nullptr) {}

};

// Class hash table

class HashTable {

private:

Node** table;

public:

HashTable() {

table = new Node*[MAX_SIZE]();

}

~HashTable() {

for (int i = 0; i < MAX_SIZE; i++) {

Node* current = table[i];

while (current != nullptr) {

Node* temp = current;

current = current->next;

delete temp;

}

}

delete[] table;

}

// Insertion

void insert(int key, int value) {

int index = hash_func(key);

Node* current = table[index];

while (current != nullptr) {

if (current->key == key) {

current->value = value;

return;

}

current = current->next;

}
Node* node = new Node(key, value);

node->next = table[index];

table[index] = node;

}

// Searching

int get(int key) {

int index = hash_func(key);

Node* current = table[index];

while (current != nullptr) {

if (current->key == key) {

return current->value;

}

current = current->next;

}

return -1;

}

// Deletion

void remove(int key) {

int index = hash_func(key);

Node* current = table[index];

Node* prev = nullptr;

while (current != nullptr) {

if (current->key == key) {

if (prev == nullptr) {

table[index] = current->next;

} else {

prev->next = current->next;

}

delete current;

return;

}

prev = current;

current = current->next;

}

}

// Traversal

void traverse() {

for (int i = 0; i < MAX_SIZE; i++) {

Node* current = table[i];

while (current != nullptr) {

cout << current->key << ": " << current->value

<< endl;

current = current->next;

}

}

}

};
int main() {

HashTable ht;

// Insertion

ht.insert(1, 10);

ht.insert(2, 20);

ht.insert(3, 30);

// Searching

cout << "Get key 1: " << ht.get(1) << endl;

cout << "Get key 4: " << ht.get(4) << endl;

// Deletion

ht.remove(4);

// Traversal

ht.traverse();

return 0;

}

```

### Guided 2

```C++
#include <iostream>

#include <string>

#include <vector>

using namespace std;

const int TABLE_SIZE = 11;

string name;

string phone_number;

class HashNode {

public:

string name;

string phone_number;

HashNode(string name, string phone_number) {

this->name = name;

this->phone_number = phone_number;

}

};

class HashMap {

private:
vector<HashNode*> table[TABLE_SIZE];

public:

int hashFunc(string key) {

int hash_val = 0;

for (char c : key) {

hash_val += c;

}

return hash_val % TABLE_SIZE;

}

void insert(string name, string phone_number) {

int hash_val = hashFunc(name);

for (auto node : table[hash_val]) {

if (node->name == name) {

node->phone_number = phone_number;

return;

}

}

table[hash_val].push_back(new HashNode(name,

phone_number));

}

void remove(string name) {

int hash_val = hashFunc(name);

for (auto it = table[hash_val].begin(); it !=

table[hash_val].end(); it++) {

if ((*it)->name == name) {

table[hash_val].erase(it);

return;

}

}

}

string searchByName(string name) {

int hash_val = hashFunc(name);

for (auto node : table[hash_val]) {

if (node->name == name) {

return node->phone_number;

}

}

return "";

}

void print() {

for (int i = 0; i < TABLE_SIZE; i++) {

cout << i << ": ";

for (auto pair : table[i]) {

if(pair != nullptr){

cout << "[" << pair->name << ", " <<

pair->phone_number << "]";

}
}

cout << endl;

}

}

};

int main() {

HashMap employee_map;

employee_map.insert("Mistah", "1234");

employee_map.insert("Pastah", "5678");

employee_map.insert("Ghana", "91011");

cout << "Nomer Hp Mistah : "

<<employee_map.searchByName("Mistah") << endl;

cout << "Phone Hp Pastah : "

<<employee_map.searchByName("Pastah") << endl;

employee_map.remove("Mistah");

cout << "Nomer Hp Mistah setelah dihapus : "

<<employee_map.searchByName("Mistah") << endl << endl;

cout << "Hash Table : " << endl;

employee_map.print();

return 0;

}
```

## Unguided 

```C++
#include <iostream>
#include <list>
using namespace std;

class Mahasiswa {
public:
    int nim;
    int nilai;
};

class HashTable {
private:
    list<Mahasiswa> *table;
    int total_elements;

public:
    HashTable(int n) {
        total_elements = n;
        table = new list<Mahasiswa>[total_elements];
    }

    void insertMahasiswa(int nim, int nilai) {
        int index = nim % total_elements;
        table[index].push_back({nim, nilai});
    }

    void deleteMahasiswa(int nim) {
        int index = nim % total_elements;
        list<Mahasiswa>::iterator it;
        for (it = table[index].begin(); it != table[index].end(); it++) {
            if (it->nim == nim) {
                table[index].erase(it);
                break;
            }
        }
    }

    void searchMahasiswaByNIM(int nim) {
        int index = nim % total_elements;
        list<Mahasiswa>::iterator it;
        for (it = table[index].begin(); it != table[index].end(); it++) {
            if (it->nim == nim) {
                cout << "NIM: " << it->nim << ", Nilai: " << it->nilai << endl;
                break;
            }
        }
    }

    void searchMahasiswaByRange(int min, int max) {
        for (int i = 0; i < total_elements; i++) {
            list<Mahasiswa>::iterator it;
            for (it = table[i].begin(); it != table[i].end(); it++) {
                if (it->nilai >= min && it->nilai <= max) {
                    cout << "NIM: " << it->nim << ", Nilai: " << it->nilai << endl;
                }
            }
        }
    }
};

int main() {
    int nim;
    int nilai;
    int min;
    int max;
    
    // Create hash table
    HashTable ht(100);
    while (true){
        cout<<"Menu"<<endl;
        cout<<"1. insert data"<<endl;
      cout<< "2. delete data" <<endl;
      cout<< "3. search by him" <<endl;
      cout <<" 4. search by range"<< endl;
      cout<<"\n";
      int pilihan;
      cout << "Masukan Pilihan: ";
      cin>>pilihan;

      switch(pilihan) {
        case 1:
        cout<< "Masukan nim: ";cin >> nim;
        cout<< "Masukan Nilai: " ; cin >> nilai;
        ht.insertMahasiswa(nim, nilai);
        break;
        case 2:
        cout << " Masukan nim: "; cin>> nim;
        ht.deleteMahasiswa(nim) ;
        break;
        case 3:
        cout<<" Masukan Nim: " ;cin>>nim;
        ht.searchMahasiswaByNIM(nim);
        break;
        case 4:
        cout<<"Masukan nilai min: ";cin>> min;
        cout<<"Masukan nilai max: ";cin>> max;
        ht.searchMahasiswaByRange(min, max) ;
        break;
        case 0:
        exit(0);
      }
        
    }
    return 0;
}
```


## Daftar Pustaka

[1].	Michael A. Bender, Alex Conway, Martin Farach-Colton, William Kuszmaul, Guido Tagliavini, “Iceberg Hashing,” Optimizing Many Hash-Table Criteria at Once, Volume 70, Issue 6 December 2023.

[2].	Thomas Mailund, The Joys of Hashing: Hash Table Programming with C [1 ed.], Aarhus N, Denmark, 2019.

[3].	Tianqi Zheng,  Zhibin Zhang, Xueqi Cheng, “SAHA,”  A String Adaptive Hash Table for Analytical Databases, Volume 10, Issue 6, 11 March 2020