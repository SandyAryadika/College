#include <iostream>
using namespace std;

int main() {
    char char_huruf[7] = {'a', 'b', 'c', 'd', 'e', 'f', 'g'};
    int int_angka[7] = {2, 3, 4, 8, 6, 0, 1};
    float float_desimal[7] = {1.1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7};

    cout << "Huruf : ";
    for (int i = 0; i < 7; i++) {
        cout << char_huruf[i] << " ";
    }
    cout << endl;

    cout << "Nilai : ";
    for (int i = 0; i < 7; i++) {
        cout << int_angka[i] << " ";
    }
    cout << endl;

    cout << "Desimal : ";
    for (int i = 0; i < 7; i++) {
        cout << float_desimal[i] << " ";
    }
    cout << endl;

    int search_index = 5;  // Index yang ingin dicari (indeks ke-5)
    
    // Pencarian dan output
    if (search_index >= 0 && search_index < 7) {
        cout << "Huruf pada indeks " << search_index << ": " << char_huruf[search_index] << endl;
        cout << "Angka pada indeks " << search_index << ": " << int_angka[search_index] << endl;
        cout << "Desimal pada indeks " << search_index << ": " << float_desimal[search_index] << endl;
    } else {
        cout << "Indeks pencarian tidak valid." << endl;
    }

    return 0;
}
