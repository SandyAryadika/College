#include <iostream>
using namespace std;

/*Faktorial dari sebuah bilangan adalah hasil perkalian semua bilangan bulat positif 
dari 1 hingga bilangan tersebut. Contohnya, faktorial dari 5 (ditulis sebagai 5!) adalah 5 x 4 x 3 x 2 x 1 = 120.*/

//fungsi untuk menghitung faktorial
int faktorial (int n) {
    if (n <= 1) {
        return 1; // faktorial dari 0 dan 1 adalah 1 
    } else {
        return n * faktorial(n - 1);
    }
}

int main () {
    int n;
    cout << "masukkan bilangan untuk menghitung faktorial: ";
    cin >> n;

    if (n < 0)
    {
        cout << "bilangan faktorial tidak memiliki angka negatif" << endl;
    } else {
        int result = faktorial(n);
        cout << " faktorial dari " << n << " adalah " << result << endl;
    }

    return 0;
    
}
