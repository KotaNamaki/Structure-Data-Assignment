#include <iostream>
#include <string>

using namespace std;

/// PROGRAM SINGLE LINKED LIST CIRCULAR

// Deklarasi Struct Node
struct Node
{
    string data;
    Node *next;
};

Node *head, *tail;

void init()
{
    head = NULL;
    tail = NULL;
}

// Pengecekan
int isEmpty()
{
    if (head == NULL)
        return 1; // true
    else
        return 0; // false
}

// Buat Node Baru
Node* buatNode(string data)
{
    Node* baru = new Node;
    baru->data = data;
    baru->next = NULL;
    return baru;
}

// Tambah Depan
void insertDepan(string data)
{
    Node* baru = buatNode(data);

    if (isEmpty() == 1)
    {
        head = baru;
        tail = baru;
        tail->next = head;
    }
    else
    {
        baru->next = head;
        head = baru;
        tail->next = head;
    }
}

// Tambah Belakang
void insertBelakang(string data)
{
    Node* baru = buatNode(data);

    if (isEmpty() == 1)
    {
        head = baru;
        tail = baru;
        tail->next = head;
    }
    else
    {
        tail->next = baru;
        tail = baru;
        tail->next = head;
    }
}

// Hapus Depan
void hapusDepan()
{
    if (isEmpty() == 0)
    {
        Node* hapus = head;
        if (head == tail)
        {
            head = NULL;
            tail = NULL;
        }
        else
        {
            head = head->next;
            tail->next = head;
        }
        delete hapus;
    }
    else
    {
        cout << "List masih kosong!" << endl;
    }
}

// Hapus Belakang
void hapusBelakang()
{
    if (isEmpty() == 0)
    {
        Node* hapus = tail;
        if (head == tail)
        {
            head = NULL;
            tail = NULL;
        }
        else
        {
            Node* current = head;
            while (current->next != tail)
            {
                current = current->next;
            }
            current->next = head;
            tail = current;
        }
        delete hapus;
    }
    else
    {
        cout << "List masih kosong!" << endl;
    }
}

// Tampilkan List
void tampil()
{
    if (isEmpty() == 0)
    {
        Node* current = head;
        do
        {
            cout << current->data << " ";
            current = current->next;
        } while (current != head);
        cout << endl;
    }
    else
    {
        cout << "List masih kosong!" << endl;
    }
}

// Tambah Tengah
void insertTengah(string data, int posisi)
{
    if (isEmpty() == 0)
    {
        Node* baru = buatNode(data);
        if (posisi == 1)
        {
            insertDepan(data);
        }
        else
        {
            Node* bantu = head;
            for (int i = 1; i < posisi - 1; i++)
            {
                if (bantu->next != head)
                {
                    bantu = bantu->next;
                }
                else
                {
                    cout << "Posisi tidak valid!" << endl;
                    return;
                }
            }
            baru->next = bantu->next;
            bantu->next = baru;
        }
    }
    else
    {
        insertDepan(data);
    }
}

// Hapus Tengah
void hapusTengah(int posisi)
{
    if (isEmpty() == 0)
    {
        if (posisi == 1)
        {
            hapusDepan();
        }
        else
        {
            Node* hapus;
            Node* bantu = head;
            for (int i = 1; i < posisi - 1; i++)
            {
                if (bantu->next != head)
                {
                    bantu = bantu->next;
                }
                else
                {
                    cout << "Posisi tidak valid!" << endl;
                    return;
                }
            }
            hapus = bantu->next;
            bantu->next = hapus->next;
            delete hapus;
        }
    }
    else
    {
        cout << "List masih kosong!" << endl;
    }
}

int main()
{
    init();
    insertDepan("Ayam");
    tampil();
    insertDepan("Bebek");
    tampil();
    insertBelakang("Cicak");
    tampil();
    insertBelakang("Domba");
    tampil();
    hapusBelakang();
    tampil();
    hapusDepan();
    tampil();
    insertTengah("Sapi", 2);
    tampil();
    hapusTengah(2);
    tampil();

    return 0;
}
