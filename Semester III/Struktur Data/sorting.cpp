#include <iostream>
using namespace std;

// Fungsi untuk menukar dua elemen dalam array
void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

// Fungsi untuk melakukan pengurutan menggunakan algoritma bubble sort
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

// Fungsi untuk mencetak elemen-elemen array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;

    // Meminta pengguna untuk memasukkan jumlah elemen array
    cout << "Masukkan jumlah angka: ";
    cin >> n;

    int arr[n];

    // Meminta pengguna untuk memasukkan elemen-elemen array
    cout << "Masukkan angka-angka tersebut: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Menampilkan array sebelum diurutkan
    cout << "Array sebelum diurutkan: ";
    printArray(arr, n);

    // Melakukan pengurutan menggunakan bubble sort
    bubbleSort(arr, n);

    // Menampilkan array setelah diurutkan
    cout << "Array setelah diurutkan: ";
    printArray(arr, n);

    return 0;
}
