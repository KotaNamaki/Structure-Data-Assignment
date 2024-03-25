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

///PROGRAM SINGLE LINKED LIST NON-CIRCULAR
//Deklarasi Struct Node
struct Node{
//komponen/member
int data;
Node *next;
};
Node *head;
Node *tail;
//Inisialisasi Node
void init(){
head = NULL;
tail = NULL;
}
// Pengecekan
bool isEmpty(){
if (head == NULL)
return true;
else
return false;
}
//Tambah Depan
void insertDepan(int nilai){
//Buat Node baru
Node *baru = new Node;
baru->data = nilai;
baru->next = NULL;
if (isEmpty() == true){
head = tail = baru;
tail->next = NULL;

}
else{
baru->next = head;
head = baru;
}
}
//Tambah Belakang
void insertBelakang(int nilai){
//Buat Node baru
Node *baru = new Node;
baru->data = nilai;
baru->next = NULL;
if (isEmpty() == true){
head = tail = baru;
tail->next = NULL;
}
else{
tail->next = baru;
tail = baru;
}
}
//Hitung Jumlah List
int hitungList(){
Node *hitung;
hitung = head;
int jumlah = 0;
while( hitung != NULL ){
jumlah++;
hitung = hitung->next;
}
return jumlah;
}
//Tambah Tengah
void insertTengah(int data, int posisi){
if( posisi < 1 || posisi > hitungList() ){
cout << "Posisi diluar jangkauan" << endl;

}
else if( posisi == 1){
cout << "Posisi bukan posisi tengah" <<

endl;
}
else{
Node *baru, *bantu;
baru = new Node();
baru->data = data;
// tranversing
bantu = head;
int nomor = 1;
while( nomor < posisi - 1 ){
bantu = bantu->next;
nomor++;
}
baru->next = bantu->next;
bantu->next = baru;
}
}
//Hapus Depan
void hapusDepan() {
Node *hapus;
if (isEmpty() == false){
if (head->next != NULL){
hapus = head;
head = head->next;
delete hapus;
}
else{
head = tail = NULL;
}
}
else{
cout << "List kosong!" << endl;
}
}

//Hapus Belakang
void hapusBelakang() {
Node *hapus;
Node *bantu;
if (isEmpty() == false){
if (head != tail){
hapus = tail;
bantu = head;
while (bantu->next != tail){
bantu = bantu->next;
}
tail = bantu;
tail->next = NULL;
delete hapus;
}
else{
head = tail = NULL;
}
}
else{
cout << "List kosong!" << endl;
}
}
//Hapus Tengah
void hapusTengah(int posisi){
Node *hapus, *bantu, *bantu2;
if( posisi < 1 || posisi > hitungList() ){
cout << "Posisi di luar jangkauan" << endl;
}
else if( posisi == 1){
cout << "Posisi bukan posisi tengah" <<

endl;
}
else{
int nomor = 1;
bantu = head;
while( nomor <= posisi ){

if( nomor == posisi-1 ){
bantu2 = bantu;
}
if( nomor == posisi ){
hapus = bantu;
}
bantu = bantu->next;
nomor++;
}
bantu2->next = bantu;
delete hapus;
}
}
//Ubah Depan
void ubahDepan(int data){
if (isEmpty() == false){
head->data = data;
}
else{
cout << "List masih kosong!" << endl;
}
}
//Ubah Tengah
void ubahTengah(int data, int posisi){
Node *bantu;
if (isEmpty() == false){
if( posisi < 1 || posisi > hitungList() ){
cout << "Posisi di luar jangkauan" <<

endl;
}
else if( posisi == 1){
cout << "Posisi bukan posisi tengah" <<

endl;
}
else{
bantu = head;
int nomor = 1;

while (nomor < posisi){
bantu = bantu->next;nomor++;
}
bantu->data = data;
}
}
else{
cout << "List masih kosong!" << endl;
}
}
//Ubah Belakang
void ubahBelakang(int data){
if (isEmpty() == false){
tail->data = data;
}
else{
cout << "List masih kosong!" << endl;
}
}
//Hapus List
void clearList(){
Node *bantu, *hapus;
bantu = head;
while (bantu != NULL){
hapus = bantu;
bantu = bantu->next;
delete hapus;
}
head = tail = NULL;
cout << "List berhasil terhapus!" << endl;
}
//Tampilkan List
void tampil(){
Node *bantu;
bantu = head;
if (isEmpty() == false){

while (bantu != NULL){
cout << bantu->data << ends;
bantu = bantu->next;
}
cout << endl;
}
else{
cout << "List masih kosong!" << endl;
}
}
int main(){
init();
insertDepan(3);tampil();
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
insertTengah(7,2);
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

