#include <iostream>

/*
Masukkan bilangan = n
Menampilkan average dari nilai yang diinputkan berdasarkan jumlah bilangannya
*/

#include <iostream>

int main() {
    int n;
    double sum = 0.0;
    int count = 0;

    std::cout << "Masukkan bilangan = ";
    std::cin >> n;

    while (n != 0) {
        sum += n;
        count++;

        std::cout << "Masukkan bilangan = ";
        std::cin >> n;
    }

    if (count != 0) {
        double average = sum / count;
        std::cout << "Rata-rata: " << average << std::endl;
    } else {
        std::cout << "Tidak ada bilangan yang diinputkan." << std::endl;
    }

    return 0;
}
