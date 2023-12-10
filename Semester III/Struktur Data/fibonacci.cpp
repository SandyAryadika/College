#include <iostream>
using namespace std;

/*Deret Fibonacci adalah deret bilangan di mana setiap angka setelah dua angka pertama adalah 
hasil penjumlahan dari dua angka sebelumnya. Deret ini dimulai dengan 0 dan 1, dan berlanjut ke 1, 2, 3, 5, 8, dan 
seterusnya.*/

//fungsi untuk menghasilkan deret fibonanci
int fibonancci (int n) {
    if (n <= 1) {
        return n;
    } else {
        return fibonancci (n - 1) + fibonancci (n - 2); 
    }
}

int main () {
    int n;
    cout << "masukkan panjang deret fibonancci yang ingin dhasilkan: ";
    cin >> n;

    if (n < 0) {
        cout << "panjang deret harus non-negatif" << endl;
    } else {
        cout << "deret fibonancci dengan panjang " << n << " adalah: ";
        for (int i = 0; i < n; i++) {
            cout << fibonancci (i) << " ";
        }
        cout << endl;
    }
    return 0;
}
