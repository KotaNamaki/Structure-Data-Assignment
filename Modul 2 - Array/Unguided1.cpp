#include <iostream>
using namespace std;

int main() {
  int n;
  cout << "Masukkan jumlah data: ";
  cin >> n;

  int data[n];
  cout << "Masukkan data:\n";
  for (int i = 0; i < n; i++) {
    cin >> data[i];
  }

  cout << "Data Array: ";
  for (int i = 0; i < n; i++) {
    cout << data[i] << " ";
  }

  cout << "\nNomor Genap: ";
  for (int i = 0; i < n; i++) {
    if (data[i] % 2 == 0) {
      cout << data[i] << " ";
    }
  }

  cout << "\nNomor Ganjil: ";
  for (int i = 0; i < n; i++) {
    if (data[i] % 2 == 1) {
      cout << data[i] << " ";
    }
  }

  cout << endl;
  return 0;
}
