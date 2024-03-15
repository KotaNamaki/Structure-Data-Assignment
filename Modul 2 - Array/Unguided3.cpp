#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

// Fungsi untuk menampilkan menu
void menu()
{
    cout << "\n\t\tMENU :" << endl;
    cout << "\nPress 1 untuk mencari nilai maksimum di array" << endl;
    cout << "Press 2 untuk mencari nilai minimum di array" << endl;
    cout << "Press 3 untuk mencari rata rata di array" << endl;
    cout << "Press 4 to exit" << endl;
}

// Fungsi untuk mencari elemen maksimum dalam array
int findMax(vector<int> &arr)
{
    return *max_element(arr.begin(), arr.end());
}

// Fungsi untuk mencari elemen minimum dalam array
int findMin(vector<int> &arr)
{
    return *min_element(arr.begin(), arr.end());
}

// Fungsi untuk menghitung rata-rata elemen dalam array
double calculateAverage(vector<int> &arr)
{
    return accumulate(arr.begin(), arr.end(), 0.0) / arr.size();
}

int main()
{
    int choice;
    vector<int> arr;
    int n, element;

    cout << "Masukan Berapa Elemen yang ingin dimasukkan di array: ";
    cin >> n;

    cout << "Masukan elemen: ";
    for (int i = 0; i < n; i++)
    {
        cin >> element;
        arr.push_back(element);
    }

    do
    {
        menu();
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Maximum element di array: " << findMax(arr) << endl;
            break;
        case 2:
            cout << "Minimum element di array: " << findMin(arr) << endl;
            break;
        case 3:
            cout << "Rata-rata of elements di array: " << calculateAverage(arr) << endl;
            break;
        case 4:
            cout << "Exiting the program." << endl;
            break;
        default:
            cout << "Invalid option. Please try again." << endl;
        }
    } while (choice != 4);

    return 0;
}